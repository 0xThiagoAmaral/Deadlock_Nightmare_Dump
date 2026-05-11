use crate::mem::Process;
use std::collections::HashMap;

pub fn dump_vtables(proc: &Process, base: usize, size: usize) -> HashMap<String, Vec<String>> {
    let mut results = HashMap::new();
    
    let (rdata_addr, rdata_size) = match proc.get_section(base, ".rdata") {
        Some(s) => s,
        None => return results,
    };

    let (text_addr, text_size) = match proc.get_section(base, ".text") {
        Some(s) => s,
        None => return results,
    };

    let rdata = vec![0u8; rdata_size];
    unsafe {
        use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
        let _ = ReadProcessMemory(proc.handle, rdata_addr as _, rdata.as_ptr() as _, rdata_size, None);
    }

    // Scan for VTable candidates in .rdata
    // A VTable starts with a pointer to RTTI Locator at vtable-8
    for i in (8..rdata_size - 8).step_by(8) {
        let locator_ptr = usize::from_le_bytes(rdata[i-8..i].try_into().unwrap());
        let first_fn_ptr = usize::from_le_bytes(rdata[i..i+8].try_into().unwrap());

        // Check if first function is in .text
        if first_fn_ptr >= text_addr && first_fn_ptr < text_addr + text_size {
            // Check if locator_ptr is in .rdata
            if locator_ptr >= rdata_addr && locator_ptr < rdata_addr + rdata_size {
                // Parse RTTI Locator
                // struct IMAGE_RTTI_COMPLETE_OBJECT_LOCATOR {
                //    u32 signature; u32 offset; u32 cdOffset; u32 pTypeDescriptor; ...
                // }
                let type_desc_rva: u32 = proc.read(locator_ptr + 12);
                if type_desc_rva != 0 {
                    let type_desc_addr = base + type_desc_rva as usize;
                    // TypeDescriptor: vtable_ptr (8), spare (8), name (string)
                    let name = proc.read_string(type_desc_addr + 16, 128);
                    
                    if name.starts_with(".?AV") {
                        let clean_name = name.trim_start_matches(".?AV").trim_end_matches("@@").replace("@@", "::");
                        
                        // Extract first 10 methods
                        let mut methods = Vec::new();
                        for m in 0..10 {
                            let m_ptr: usize = proc.read(rdata_addr + i + (m * 8));
                            if m_ptr >= text_addr && m_ptr < text_addr + text_size {
                                methods.push(format!("Index {}: {:#x}", m, m_ptr - base));
                            } else {
                                break;
                            }
                        }
                        results.insert(clean_name, methods);
                    }
                }
            }
        }
    }

    results
}
