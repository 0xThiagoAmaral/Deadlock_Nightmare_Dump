use std::collections::HashMap;
use crate::mem::Process;
use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;

pub fn dump_interfaces(proc: &Process, target_dlls: &[&str]) -> HashMap<String, HashMap<String, usize>> {
    let mut interfaces = HashMap::new();
    
    for dll in target_dlls {
        if let Some((base, size)) = proc.get_module(dll) {
            let data = vec![0u8; size];
            unsafe {
                let _ = ReadProcessMemory(proc.handle, base as _, data.as_ptr() as _, size, None);
            }
            
            let patterns = [
                ([0x48, 0x8B, 0x05].as_slice(), "xxx????", 7, 3), // mov rax, [rip+offset]
                ([0x48, 0x8B, 0x0D].as_slice(), "xxx????", 7, 3), // mov rcx, [rip+offset]
            ];

            let mut list_head_ptr = 0;
            for (p, mask, size, off) in patterns {
                if let Some(idx) = find_pattern(&data, p, mask) {
                    let rel_off = i32::from_le_bytes(data[idx+off..idx+off+4].try_into().unwrap());
                    list_head_ptr = base + idx + size + rel_off as usize;
                    break;
                }
            }
            
            if list_head_ptr != 0 {
                let mut current_reg: usize = proc.read(list_head_ptr);
                
                let mut module_inters = HashMap::new();
                while current_reg != 0 {
                    let name_ptr: usize = proc.read(current_reg);
                    let fn_ptr: usize = proc.read(current_reg + 8);
                    let next_ptr: usize = proc.read(current_reg + 16);
                    
                    let name = proc.read_string(name_ptr, 128);
                    if name.is_empty() || !name.chars().next().unwrap().is_alphabetic() { break; }
                    
                    module_inters.insert(name, fn_ptr - base);
                    current_reg = next_ptr;
                }
                interfaces.insert(dll.to_string(), module_inters);
            }
        }
    }
    interfaces
}

fn find_pattern(data: &[u8], pattern: &[u8], mask: &str) -> Option<usize> {
    let mask_bytes = mask.as_bytes();
    for i in 0..data.len() - pattern.len() {
        let mut found = true;
        for j in 0..pattern.len() {
            if mask_bytes[j] == b'x' && data[i + j] != pattern[j] {
                found = false;
                break;
            }
        }
        if found { return Some(i); }
    }
    None
}
