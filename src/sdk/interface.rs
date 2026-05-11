use std::collections::HashMap;
use crate::mem::Process;
use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;

pub fn dump_interfaces(proc: &Process, target_dlls: &[&str]) -> HashMap<String, HashMap<String, usize>> {
    let mut interfaces = HashMap::new();
    
    for dll in target_dlls {
        if let Some((base, size)) = proc.get_module(dll) {
            let data = vec![0u8; size];
            unsafe {
                use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
                let _ = ReadProcessMemory(proc.handle, base as _, data.as_ptr() as _, size, None);
            }

            let mut module_inters = HashMap::new();
            
            // Search for "Source2Client002" or "SchemaSystem_001" to find a RegIface
            let test_names = ["Source2Client002", "SchemaSystem_001", "Source2EngineClient001", "InputSystemVersion001"];
            let mut list_head = 0;

            for test_name in test_names {
                if let Some(name_idx) = data.windows(test_name.len()).position(|w| w == test_name.as_bytes()) {
                    let name_addr = base + name_idx;
                    
                    // Search for pointers to this string address
                    for i in (0..size - 8).step_by(8) {
                        let ptr: usize = usize::from_le_bytes(data[i..i+8].try_into().unwrap());
                        if ptr == name_addr {
                            // Found m_pName. The struct starts 8 bytes before.
                            let reg_addr = base + i - 8;
                            
                            // Follow the list back to find the head, or just start here
                            let mut current = reg_addr;
                            
                            // Validation: Check if m_pCreateFn is in the module
                            let create_fn: usize = proc.read(current);
                            if create_fn > base && create_fn < base + size {
                                list_head = current;
                                break;
                            }
                        }
                    }
                }
                if list_head != 0 { break; }
            }

            if list_head != 0 {
                let mut current = list_head;
                for _ in 0..512 {
                    let fn_ptr: usize = proc.read(current);
                    let name_ptr: usize = proc.read(current + 8);
                    let next_ptr: usize = proc.read(current + 16);
                    
                    if fn_ptr == 0 || name_ptr == 0 { break; }
                    
                    let name = proc.read_string(name_ptr, 64);
                    if name.is_empty() { break; }
                    
                    module_inters.insert(name, fn_ptr - base);
                    current = next_ptr;
                    if current == 0 { break; }
                }
            }
            
            if !module_inters.is_empty() {
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
