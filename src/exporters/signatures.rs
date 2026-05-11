use std::collections::HashMap;
use std::fs;

pub fn export_signatures(
    auto_sigs: &HashMap<String, String>
) {
    let mut hpp = String::from("// Generated via Nightmare Oracle - The End of Offset Suffering\n#pragma once\n\nnamespace deadlock_signatures {\n");

    hpp.push_str("    // --- Global Master Pointers (Hardcoded Patterns) ---\n");
    hpp.push_str("    // EntityList\n");
    hpp.push_str("    inline const char* PATTERN_ENTITYLIST = \"48 8B 0D ? ? ? ? 48 89 7C 24 ? 8B FA C1 EB\";\n");
    hpp.push_str("    // LocalPlayerController\n");
    hpp.push_str("    inline const char* PATTERN_LOCALPLAYERCONTROLLER = \"48 8B 05 ? ? ? ? 48 85 C0 74 4F\";\n");
    hpp.push_str("    // ViewMatrix\n");
    hpp.push_str("    inline const char* PATTERN_VIEWMATRIX = \"48 8D 0D ? ? ? ? 48 C1 E0 06\";\n\n");

    hpp.push_str("\n    // --- NetVar Xref Signatures (Auto-Update) ---\n");
    let mut sorted_sigs: Vec<_> = auto_sigs.iter().collect();
    sorted_sigs.sort_by_key(|a| a.0);

    for (name, sig) in sorted_sigs {
        let clean_name = name.replace("::", "_");
        hpp.push_str(&format!("    // {}\n", name));
        hpp.push_str(&format!("    inline const char* SIG_{} = \"{}\";\n", clean_name.to_uppercase(), sig));
    }

    hpp.push_str("}\n");
    fs::write("output/signatures.hpp", hpp).unwrap();
}
