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
| `server_dll.hpp` | Definições de lado servidor. |
| `all_modules.json` | Dump completo em formato JSON para parsing. |
| `deadlock_classes.reclass` | Projeto ReClass.NET pronto para inspeção de memória. |
| `hierarchy.html` | Visualização da hierarquia de classes do Source 2. |

## 🛠️ Protocolo de Versão
- **Binários:** Ignorados pelo `.gitignore` conforme Rule 6 (OpSec).
- **Artifacts:** Pushed para o repositório por solicitação explícita do usuário.

---
*Documentação gerada automaticamente conforme o Protocolo Legista.*
