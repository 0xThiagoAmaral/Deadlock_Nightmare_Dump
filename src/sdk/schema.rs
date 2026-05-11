use std::collections::HashMap;
use serde::{Serialize, Deserialize};
use crate::mem::Process;

#[derive(Serialize, Deserialize, Clone)]
pub struct ModuleData {
    pub classes: HashMap<String, HashMap<String, i32>>,
}

pub fn dump_schemas(proc: &Process, client_base: usize) -> HashMap<String, ModuleData> {
    let mut schema_data = HashMap::new();
    let schema_system_offset = 0x38F9710;
    let schema_system: usize = proc.read(client_base + schema_system_offset);
    
    if schema_system == 0 { return schema_data; }

    let num_scopes: u32 = proc.read(schema_system + 0x190);
    let scopes_ptr: usize = proc.read(schema_system + 0x198);
    
    for i in 0..num_scopes {
        let scope: usize = proc.read(scopes_ptr + (i as usize * 8));
        if scope == 0 { continue; }
        
        let scope_name = proc.read_string(scope + 0x08, 64);
        let mut classes = HashMap::new();
        
        let capacity: i16 = proc.read(scope + 0x472);
        let array_ptr: usize = proc.read(scope + 0x478);
        
        for j in 0..capacity {
            let binding_ptr: usize = proc.read(array_ptr + (j as usize * 24) + 16);
            if binding_ptr == 0 { continue; }
            
            let name_ptr: usize = proc.read(binding_ptr + 8);
            let class_name = proc.read_string(name_ptr, 128);
            
            let info_ptr: usize = proc.read(binding_ptr + 0x20);
            let field_count: u16 = proc.read(info_ptr + 0x1C);
            let fields_ptr: usize = proc.read(info_ptr + 0x28);
            
            let mut fields = HashMap::new();
            for f in 0..field_count {
                let field_addr = fields_ptr + (f as usize * 0x20);
                let f_name_ptr: usize = proc.read(field_addr);
                let f_name = proc.read_string(f_name_ptr, 128);
                let f_off: i32 = proc.read(field_addr + 0x10);
                fields.insert(f_name, f_off);
            }
            classes.insert(class_name, fields);
        }
        schema_data.insert(scope_name, ModuleData { classes });
    }
    schema_data
}
