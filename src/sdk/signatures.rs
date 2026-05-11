use std::collections::HashMap;
use crate::mem::Process;

pub struct Signature {
    pub name: String,
    pub patterns: Vec<(&'static [u8], &'static str, usize, usize)>, // pattern, mask, rip_offset, rip_size
}

pub fn scan_signatures(proc: &Process, client_base: usize, client_size: usize) -> HashMap<String, String> {
    let mut results = HashMap::new();
    
    let signatures = vec![
        Signature {
            name: "EntityList".to_string(),
            patterns: vec![
                (&[0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x7C, 0x24, 0x00, 0x8B, 0xFA, 0xC1, 0xEB], "xxx????xxxx?xxxx", 3, 7),
                (&[0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x8B, 0xC1], "xxx????xxx", 3, 7),
            ],
        },
        Signature {
            name: "LocalPlayerController".to_string(),
            patterns: vec![
                (&[0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC0, 0x74, 0x4F], "xxx????xxxxx", 3, 7),
            ],
        },
        Signature {
            name: "ViewMatrix".to_string(),
            patterns: vec![
                (&[0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0xC1, 0xE0, 0x06], "xxx????xxxx", 3, 7),
            ],
        },
        Signature {
            name: "GlobalVars".to_string(),
            patterns: vec![
                (&[0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xD1, 0x48, 0x8B, 0x0D], "xxx????xxxxxx", 3, 7),
            ],
        },
        Signature {
            name: "GameEntitySystem".to_string(),
            patterns: vec![
                (&[0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x74, 0x0F], "xxx????xxxx?", 3, 7),
            ],
        },
        Signature {
            name: "ForceAttack".to_string(),
            patterns: vec![
                (&[0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x15, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x44, 0x24], "xxx????xxx????xxxx", 3, 7),
            ],
        },
        Signature {
            name: "ForceJump".to_string(),
            patterns: vec![
                (&[0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x15, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x44, 0x24], "xxx????xxx????xxxx", 3, 7),
            ],
        },
    ];

    let data = vec![0u8; client_size];
    unsafe {
        use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
        let _ = ReadProcessMemory(proc.handle, client_base as _, data.as_ptr() as _, client_size, None);
    }

    for sig in signatures {
        for (p, mask, rip_off, rip_size) in sig.patterns {
            if let Some(addr) = find_pattern(&data, p, mask) {
                let inst_addr = client_base + addr;
                let rel_off: i32 = proc.read(inst_addr + rip_off);
                let abs_addr = inst_addr + rip_size + rel_off as usize;
                
                // Validation: Ensure the pointer is not zero
                let ptr: usize = proc.read(abs_addr);
                if ptr != 0 {
                    results.insert(sig.name, format!("{:#x}", abs_addr - client_base));
                    break;
                }
            }
        }
    }

    results
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
