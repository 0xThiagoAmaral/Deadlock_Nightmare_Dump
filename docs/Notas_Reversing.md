# 🕵️ Notas de Engenharia Reversa - Deadlock Source 2

## 🌌 Visão Geral do Dump
Este repositório contém o dump automatizado do framework **Nightmare Oracle**. Os arquivos foram extraídos diretamente da memória do jogo e organizados na pasta `output/`.

### 📅 Última Atualização
- **Data:** 2026-05-11
- **Status:** Push inicial de Schemas e Offsets.

## 📂 Estrutura de Arquivos (output/)
| Arquivo | Descrição |
| :--- | :--- |
| `client_dll.hpp` | Classes e NetVars do cliente (C_BaseEntity, etc). |
| `signatures.hpp` | Offsets resolvidos (dwEntityList, dwGlobalVars, etc). |
| `all_modules.json` | Dump completo com interfaces e assinaturas. |

## 🛠️ Novas Implementações
- **Resolved Offsets:** Agora o exportador gera valores hexadecimais reais (`constexpr std::ptrdiff_t`) em vez de patterns.
- **Assinaturas Vitais:** Adicionado `GlobalVars`, `ViewRender` e `GameEntitySystem`.
- **Interface Discovery:** Refatorado para encontrar interfaces em todos os módulos (client, engine, schemasystem).
- **Input System:** Adicionado mapeamento de botões (`ForceAttack`, `ForceJump`).

---
*Documentação atualizada conforme o Protocolo Legista.*
