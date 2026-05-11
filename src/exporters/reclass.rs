use std::collections::HashMap;
use std::fs;
use crate::sdk::ModuleData;

pub fn export_reclass(schema_data: &HashMap<String, ModuleData>) {
    let mut xml = String::from("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<reclass version=\"1\">\n  <classes>\n");

    for (mod_name, data) in schema_data {
        // Vamos focar no client.dll para nao sobrecarregar o ReClass inicial
        if !mod_name.contains("client.dll") { continue; }

        let mut sorted_classes: Vec<_> = data.classes.iter().collect();
        sorted_classes.sort_by_key(|a| a.0);

        for (class_name, fields) in sorted_classes {
            xml.push_str(&format!("    <class name=\"{}\" comment=\"Module: {}\" uuid=\"{}\">\n", 
                class_name.replace("::", "__"), 
                mod_name,
                generate_fake_uuid(class_name)
            ));

            let mut sorted_fields: Vec<_> = fields.iter().collect();
            sorted_fields.sort_by_key(|a| a.1);

            for (f_name, off) in sorted_fields {
                // No ReClass, usamos Hex32/64 como padrao para offsets desconhecidos
                xml.push_str(&format!("      <node type=\"Hex32\" name=\"{}\" comment=\"\" offset=\"{}\" />\n", 
                    f_name, off));
            }
            xml.push_str("    </class>\n");
        }
    }

    xml.push_str("  </classes>\n</reclass>");
    fs::write("output/deadlock_classes.reclass", xml).unwrap();
}

fn generate_fake_uuid(name: &str) -> String {
    // ReClass precisa de UUIDs unicos. Vamos gerar um hash simples.
    use std::collections::hash_map::DefaultHasher;
    use std::hash::{Hash, Hasher};
    let mut hasher = DefaultHasher::new();
    name.hash(&mut hasher);
    let hash = hasher.finish();
    format!("{:016x}-{:016x}", hash, hash)
}
