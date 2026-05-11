use crate::mem::Process;

pub fn generate_xref_signature(proc: &Process, client_base: usize, client_size: usize, offset: i32) -> Option<String> {
    let data = vec![0u8; client_size];
    unsafe {
        use windows::Win32::System::Diagnostics::Debug::ReadProcessMemory;
        let _ = ReadProcessMemory(proc.handle, client_base as _, data.as_ptr() as _, client_size, None);
    }

    // Procuramos por instrucoes que usem o offset como um valor imediato de 4 bytes
    // Exemplo: MOV [reg + offset], ... ou LEA reg, [reg + offset]
    let off_bytes = offset.to_le_bytes();
    
    for i in 0..data.len() - 15 {
        // Busca simples: a instrucao contem os 4 bytes do offset
        if data[i..i+4] == off_bytes {
            // Encontramos uma referencia! Agora vamos extrair os bytes ao redor
            // para criar uma assinatura. Pegamos 5 bytes antes e 5 depois.
            let start = if i > 5 { i - 5 } else { i };
            let end = if i + 10 < data.len() { i + 10 } else { data.len() };
            
            let mut sig = String::new();
            for (idx, byte) in data[start..end].iter().enumerate() {
                let current_pos = start + idx;
                // Se o byte atual faz parte do nosso offset, colocamos curinga
                if current_pos >= i && current_pos < i + 4 {
                    sig.push_str("?? ");
                } else {
                    sig.push_str(&format!("{:02X} ", byte));
                }
            }
            return Some(sig.trim().to_string());
        }
    }
    None
}
