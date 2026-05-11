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
            
            if let Some(idx) = data.windows(8).position(|w| w[0..3] == [0x48, 0x8B, 0x05] && w[7] == 0xC3) {
                let rel_off = i32::from_le_bytes(data[idx+3..idx+7].try_into().unwrap());
                let list_head_ptr = base + idx + 7 + rel_off as usize;
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
