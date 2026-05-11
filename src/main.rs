mod mem;
mod sdk;
mod exporters;

use std::collections::HashMap;
use std::fs;
use std::path::Path;
use mem::Process;

fn main() {
    println!("=== DEADLOCK ORACLE DUMPER (Industrial Edition) ===");
    
    let proc = match Process::open("deadlock") {
        Some(p) => p,
        None => {
            println!("[-] Deadlock nao encontrado. Certifique-se de que o jogo esta aberto.");
            return;
        }
    };

    let (client_base, client_size) = proc.get_module("client.dll").expect("client.dll nao encontrada");
    
    // 1. Interfaces & Signatures
    println!("[*] Escaneando Interfaces e Assinaturas...");
    let target_dlls = ["client.dll", "server.dll", "engine2.dll", "schemasystem.dll", "inputsystem.dll"];
    let interfaces = sdk::interface::dump_interfaces(&proc, &target_dlls);
    let signatures = sdk::signatures::scan_signatures(&proc, client_base, client_size);

    // 2. Schemas
    println!("[*] Extraindo Schemas (NetVars)...");
    let schema_data = sdk::schema::dump_schemas(&proc, client_base);

    // 3. Auto-Signatures para NetVars (O Fim dos Offsets Estaticos)
    println!("[*] Gerando Auto-Signatures para campos criticos...");
    let mut auto_sigs = HashMap::new();
    if let Some(client_mod) = schema_data.get("client.dll") {
        for (class_name, fields) in &client_mod.classes {
            if class_name.contains("BaseEntity") || class_name.contains("PlayerPawn") {
                for (f_name, off) in fields {
                    if f_name.contains("Health") || f_name.contains("Team") || f_name.contains("Origin") {
                        auto_sigs.insert(format!("{}::{}", class_name, f_name), format!("{:#x}", off));
                    }
                }
            }
        }
    }

    // 4. Mapeando VTables e Funcoes Virtuais
    println!("[*] Mapeando VTables e Funcoes Virtuais...");
    let vtables_raw = sdk::vtable::dump_vtables(&proc, client_base, client_size);
    let mut vtables = HashMap::new();
    
    for (class_name, methods) in vtables_raw {
        if class_name.contains("BaseEntity") || class_name.contains("PlayerPawn") || 
           class_name.contains("Controller") || class_name.contains("C_") {
            vtables.insert(class_name, methods);
        }
    }

    // 5. Protobuf Dumper (Nivel God)
    println!("[*] Extraindo Mensagens de Rede (Protobufs)...");
    let net_msgs = sdk::protobuf::dump_network_messages(&proc);

    // 6. Export
    println!("[*] Gerando SDK e Arquivos de Saida...");
    let out_dir = Path::new("output");
    if !out_dir.exists() { fs::create_dir(out_dir).unwrap(); }
    
    // Atualiza o JSON para incluir tudo
    let final_report = serde_json::json!({
        "signatures": signatures,
        "auto_sigs": auto_sigs,
        "vtables": vtables,
        "network_messages": net_msgs,
        "interfaces": interfaces,
        "schemas": schema_data
    });
    fs::write("output/all_modules.json", serde_json::to_string_pretty(&final_report).unwrap()).unwrap();
    exporters::cpp::export_cpp(&schema_data);
    exporters::reclass::export_reclass(&schema_data);
    exporters::hierarchy::export_hierarchy(&schema_data);
    exporters::signatures::export_signatures(&signatures, &auto_sigs);
    
    println!("\n[+] SUCESSO! O Oraculo terminou o dump.");
    println!("[+] Localizado em: deadlock_dumper_rust/output/");
}
