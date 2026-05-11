use std::collections::HashMap;
use std::fs;

pub fn export_signatures(
    static_sigs: &HashMap<String, String>,
    auto_sigs: &HashMap<String, String>
) {
    let mut hpp = String::from("// Generated via Nightmare Oracle - The End of Offset Suffering\n#pragma once\n#include <cstdint>\n\nnamespace deadlock_signatures {\n");

    hpp.push_str("    // --- Global Master Pointers (Resolved Offsets) ---\n");
    let mut sorted_static: Vec<_> = static_sigs.iter().collect();
    sorted_static.sort_by_key(|a| a.0);

    for (name, offset) in sorted_static {
        hpp.push_str(&format!("    constexpr std::ptrdiff_t dw{} = {};\n", name, offset));
    }

    hpp.push_str("\n    // --- NetVar Xref Signatures (Auto-Update Offsets) ---\n");
    let mut sorted_auto: Vec<_> = auto_sigs.iter().collect();
    sorted_auto.sort_by_key(|a| a.0);

    for (name, offset) in sorted_auto {
        let clean_name = name.replace("::", "_");
        hpp.push_str(&format!("    // {}\n", name));
        hpp.push_str(&format!("    constexpr std::ptrdiff_t dw{} = {};\n", clean_name, offset));
    }

    hpp.push_str("}\n");
    fs::write("output/signatures.hpp", hpp).unwrap();
}
