use std::collections::HashMap;
use crate::mem::Process;

pub struct Signature {
    pub name: String,
    pub pattern: Vec<u8>,
    pub mask: String,
    pub offset: usize, // Offset da instrucao
    pub rip_offset: usize, // Offset do operando RIP-relativo
    pub rip_size: usize,   // Tamanho total da instrucao para calculo RIP
}

pub fn scan_signatures(proc: &Process, client_base: usize, client_size: usize) -> HashMap<String, String> {
    let mut results = HashMap::new();
    
    // Padroes conhecidos para Deadlock (Source 2)
    let signatures = vec![
        Signature {
            name: "EntityList".to_string(),
            pattern: vec![0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x7C, 0x24, 0x00, 0x8B, 0xFA, 0xC1, 0xEB],
            mask: "xxx????xxxx?xxxx".to_string(),
            offset: 0,
            rip_offset: 3,
            rip_size: 7,
        },
        Signature {
            name: "LocalPlayerController".to_string(),
            pattern: vec![0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC0, 0x74, 0x4F],
            mask: "xxx????xxxxx".to_string(),
            offset: 0,
            rip_offset: 3,
            rip_size: 7,
        },
        Signature {
            name: "ViewMatrix".to_string(),
            pattern: vec![0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0xC1, 0xE0, 0x06],
            mask: "xxx????xxxx".to_string(),
            offset: 0,
            rip_offset: 3,
            rip_size: 7,
        },
        Signature {
            name: "GlobalVars".to_string(),
            pattern: vec![0x44, 0x8B, 0x81, 0x24, 0x0B, 0x00, 0x00, 0x45, 0x85, 0xC0, 0x78, 0x00, 0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x44, 0x3B, 0x40, 0x44],
            mask: "xxxxxxxxxxx?xxx????xxxx".to_string(),
            offset: 0,
            rip_offset: 15,
            rip_size: 19,
        },
        Signature {
            name: "ViewRender".to_string(),
            pattern: vec![0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8B, 0x01, 0x48, 0xFF, 0x60, 0x38],
            mask: "xxx????xxxxxxx".to_string(),
            offset: 0,
            rip_offset: 3,
            rip_size: 7,
        },
        Signature {
            name: "GameEntitySystem".to_string(),
            pattern: vec![0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x48, 0x85, 0xC9, 0x74, 0x0F],
            mask: "xxx????xxxx?".to_string(),
            offset: 0,
            rip_offset: 3,
            rip_size: 7,
        },
        Signature {
            name: "ForceAttack".to_string(),
            pattern: vec![0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x15, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x44, 0x24],
            mask: "xxx????xxx????xxxx".to_string(),
            offset: 0,
            rip_offset: 3,
            rip_size: 7,
        },
        Signature {
            name: "ForceJump".to_string(),
            pattern: vec![0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8D, 0x15, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x44, 0x24],
            mask: "xxx????xxx????xxxx".to_string(),
            offset: 28, // Offset dependente do binario, mas vamos usar um pattern mais especifico se possivel
            rip_offset: 3,
            rip_size: 7,
        },
    ];

    let data = vec![0u8; client_size];
    unsafe {
        use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
        let _ = ReadProcessMemory(proc.handle, client_base as _, data.as_ptr() as _, client_size, None);
    }

    for sig in signatures {
        if let Some(addr) = find_pattern(&data, &sig.pattern, &sig.mask) {
            let inst_addr = client_base + addr + sig.offset;
            let rel_off: i32 = proc.read(inst_addr + sig.rip_offset);
            let abs_addr = inst_addr + sig.rip_size + rel_off as usize;
            results.insert(sig.name, format!("{:#x}", abs_addr - client_base));
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
