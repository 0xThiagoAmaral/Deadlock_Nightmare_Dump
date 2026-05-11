use std::collections::HashMap;
use std::fs;
use crate::sdk::ModuleData;

pub fn export_cpp(schema_data: &HashMap<String, ModuleData>) {
    for (mod_name, data) in schema_data {
        let clean_name = mod_name.replace(".", "_");
        let mut hpp = format!("// Generated via Nightmare Oracle\n#pragma once\n#include <cstddef>\n\nnamespace deadlock_dumper {{\n  namespace {} {{\n", clean_name);
        
        let mut sorted_classes: Vec<_> = data.classes.iter().collect();
        sorted_classes.sort_by_key(|a| a.0);

        for (class_name, fields) in sorted_classes {
            let safe_class = class_name.replace("::", "__");
            hpp.push_str(&format!("    namespace {} {{\n", safe_class));
            
            let mut sorted_fields: Vec<_> = fields.iter().collect();
            sorted_fields.sort_by_key(|a| a.1);

            for (f_name, off) in sorted_fields {
                hpp.push_str(&format!("      constexpr std::ptrdiff_t {} = {:#x};\n", f_name, off));
            }
            hpp.push_str("    }\n");
        }
        hpp.push_str("  }\n}\n");
        fs::write(format!("output/{}.hpp", clean_name), hpp).unwrap();
    }
}
