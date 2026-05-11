import json
import re

def parse_vdata(content):
    hero_map = {}
    # Find all hero blocks
    # Pattern: hero_(\w+) = \s*\{ (.*? m_HeroID = (\d+))
    # Using a more robust regex to find the hero name and ID
    matches = re.finditer(r'hero_(\w+)\s*=\s*\{', content)
    for match in matches:
        hero_name = match.group(1)
        # Find the HeroID within this block (up to 200 chars after)
        block_content = content[match.start():match.start()+1000]
        id_match = re.search(r'm_HeroID\s*=\s*(\d+)', block_content)
        if id_match:
            hero_id = int(id_match.group(1))
            if hero_id != 0: # Skip base or invalid
                # Capitalize name
                display_name = hero_name.replace("_", " ").title().replace(" ", "")
                hero_map[display_name] = hero_id
    return hero_map

with open(r'C:\Users\Th\.gemini\antigravity\brain\111a4073-0f12-4bdb-a91b-e58f17ea3568\.system_generated\steps\402\content.md', 'r', encoding='utf-8') as f:
    content = f.read()

hero_ids = parse_vdata(content)
# Sort by ID
sorted_heroes = dict(sorted(hero_ids.items(), key=lambda item: item[1]))

print(json.dumps(sorted_heroes, indent=2))

with open('output/hero_ids.json', 'w') as f:
    json.dump(sorted_heroes, f, indent=2)
