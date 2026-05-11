use std::collections::HashMap;
use std::fs;
use crate::sdk::ModuleData;

pub fn export_hierarchy(schema_data: &HashMap<String, ModuleData>) {
    let mut html = String::from(r#"
<!DOCTYPE html>
<html>
<head>
    <title>Deadlock Oracle - Global Hierarchy</title>
    <script src="https://cdn.jsdelivr.net/npm/mermaid/dist/mermaid.min.js"></script>
    <style>
        body { background: #0b0e14; color: #4db6ac; font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; }
        .container { padding: 40px; }
        h1 { border-bottom: 2px solid #4db6ac; padding-bottom: 10px; }
        .mermaid { background: #151921; border: 1px solid #333; padding: 20px; border-radius: 12px; box-shadow: 0 10px 30px rgba(0,0,0,0.5); }
    </style>
</head>
<body>
    <div class="container">
        <h1>🕵️ Deadlock Engine - Inheritance Oracle</h1>
        <p>Visualização de herança de classes extraída via Schema System.</p>
        <div class="mermaid">
            classDiagram
"#);

    // No Deadlock, classes como C_BaseEntity sao o topo da cadeia
    for (mod_name, data) in schema_data {
        if !mod_name.contains("client.dll") { continue; }
        
        let mut sorted_classes: Vec<_> = data.classes.iter().collect();
        sorted_classes.sort_by_key(|a| a.0);

        for (class_name, fields) in sorted_classes {
            let safe_name = class_name.replace("::", "__");
            
            // Tenta detectar heranca via nome ou campos conhecidos
            if class_name.starts_with("C_") {
                if class_name.contains("Player") && !class_name.contains("Base") {
                    html.push_str(&format!("            C_BasePlayerPawn <|-- {}\n", safe_name));
                } else if class_name.contains("Weapon") && !class_name.contains("Base") {
                    html.push_str(&format!("            C_BaseEntity <|-- {}\n", safe_name));
                }
                
                html.push_str(&format!("            class {} {{\n", safe_name));
                for (f_name, off) in fields.iter().take(3) {
                    html.push_str(&format!("                +{} : {:#x}\n", f_name, off));
                }
                html.push_str("            }\n");
            }
        }
    }

    html.push_str(r#"
        </div>
    </div>
    <script>
        mermaid.initialize({
            startOnLoad: true,
            theme: 'dark',
            securityLevel: 'loose',
            flowchart: { useMaxWidth: true, htmlLabels: true, curve: 'basis' }
        });
    </script>
</body>
</html>
"#);

    fs::write("output/hierarchy.html", html).unwrap();
}
