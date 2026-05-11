use std::collections::HashMap;
use std::fs;
use crate::sdk::ModuleData;

pub fn export_json(
    schema_data: &HashMap<String, ModuleData>, 
    interfaces: &HashMap<String, HashMap<String, usize>>,
    signatures: &HashMap<String, String>
) {
    let report = serde_json::json!({
        "signatures": signatures,
        "interfaces": interfaces,
        "schemas": schema_data
    });
    fs::write("output/all_modules.json", serde_json::to_string_pretty(&report).unwrap()).unwrap();
}
