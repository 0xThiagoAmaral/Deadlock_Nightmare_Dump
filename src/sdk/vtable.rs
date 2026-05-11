use crate::mem::Process;
use std::collections::HashMap;

pub struct VTableData {
    pub class_name: String,
    pub address: usize,
    pub function_indices: HashMap<usize, usize>, // Index -> Offset na DLL
}

pub fn dump_vtables(proc: &Process, client_base: usize, client_size: usize) -> HashMap<String, Vec<String>> {
    let mut results = HashMap::new();
    
    let data = vec![0u8; client_size];
    unsafe {
        use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
        let _ = ReadProcessMemory(proc.handle, client_base as _, data.as_ptr() as _, client_size, None);
    }

    // Padrao de atribuicao de VTable em construtores x64:
    // 48 8D 05 ? ? ? ? (LEA RAX, [RIP + offset])
    // 48 89 01          (MOV [RCX], RAX)
    let pattern = [0x48, 0x8D, 0x05, 0x00, 0x00, 0x00, 0x00, 0x48, 0x89, 0x01];
    let mask = "xxx????xxx";

    let mut vtable_candidates = Vec::new();

    for i in 0..data.len() - 10 {
        if match_pattern(&data[i..i+10], &pattern, mask) {
            let rel_off = i32::from_le_bytes(data[i+3..i+7].try_into().unwrap());
            let vtable_addr = client_base + i + 7 + rel_off as usize;
            if vtable_addr > client_base && vtable_addr < client_base + client_size {
                vtable_candidates.push(vtable_addr);
            }
        }
    }

    // Para cada VTable encontrada, vamos listar os primeiros 20 indices
    // (A maioria das funcoes importantes como GetAbsOrigin estao no comeco)
    for (idx, &vtable) in vtable_candidates.iter().take(5).enumerate() {
        let mut funcs = Vec::new();
        for f in 0..20 {
            let fn_ptr: usize = proc.read(vtable + (f * 8));
            if fn_ptr > client_base && fn_ptr < client_base + client_size {
                funcs.push(format!("Index {}: {:#x}", f, fn_ptr - client_base));
            } else {
                break;
            }
        }
        results.insert(format!("UnknownClass_{}", idx), funcs);
    }

    results
}

fn match_pattern(data: &[u8], pattern: &[u8], mask: &str) -> bool {
    let mask_bytes = mask.as_bytes();
    for i in 0..pattern.len() {
        if mask_bytes[i] == b'x' && data[i] != pattern[i] {
            return false;
        }
    }
    true
}
