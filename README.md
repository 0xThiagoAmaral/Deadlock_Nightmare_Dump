# Nightmare Ecosystem: Deadlock Source 2 Internal Framework

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-blue?logo=cplusplus)
![Rust](https://img.shields.io/badge/Rust-Oracle-orange?logo=rust)
![Source 2](https://img.shields.io/badge/Engine-Source%202-red)
![License](https://img.shields.io/badge/License-MIT-green)

A high-performance, industrial-grade internal framework designed for **Deadlock (Source 2)**. This project implements a modular architecture for memory manipulation, automated schema dumping, and stealth-focused execution.

## 🌌 Project Architecture

The framework is divided into three core pillars:

### 1. Nightmare Loader (C++)
A robust **Manual Map Injector** that operates with kernel-like precision. 
- **Stealth First**: Implements PEB resolution for `GetProcAddress` and `LoadLibraryA`, bypassing standard debugger detection.
- **Dependency Awareness**: Synchronizes with the game engine, waiting for `client.dll` and `engine2.dll` to stabilize before deployment.
- **Relocation Engine**: Native DIR64 relocation handling for modern x64 environments.

### 2. Nightmare Oracle (Rust)
The "Brain" of the project. A high-speed memory dumper and signature scanner.
- **Cross-Update Stability**: Uses advanced AoB (Array of Bytes) scanning to find offsets dynamically, reducing the need for manual updates.
- **Schema Discovery**: Iterates through the Source 2 `CUtlVector` classes to extract NetVars and entity structures.
- **Output Protocols**: Generates C++ headers and JSON definitions for the core module.

### 3. Nightmare Core (Internal DLL)
The execution layer that hooks into the game's heartbeat.
- **Rendering**: Premium **ImGui** integration via `IDXGISwapChain::Present` hooks.
- **Combat Logic**: Implements Silent Aimbot, Probabilistic Target Weighting (Head/Chest), and sub-millisecond Orb prediction.
- **Engine Interaction**: Direct communication with `CGameEntitySystem` and `CUserCmd` buffers.

---

## 🛠️ Tech Stack

- **Languages**: C++20 (Loader/Core), Rust (Oracle/Dumper).
- **Hooks**: MinHook for stable VMT and Inline hijacking.
- **UI**: ImGui (Custom Red & Black Theme).
- **RE Tools**: Ghidra (Metadata Extraction), ReClass.NET (Struct Mapping).

---

## 🚀 Getting Started

### Prerequisites
- Visual Studio 2022 (v143 Toolset).
- Rust Toolchain (Stable).
- Windows 10/11 x64.

### Compilation
1. **Oracle**: Navigate to `deadlock_dumper_rust` and run `cargo build --release`.
2. **Core**: Compile the `dxgi_core` project in Release x64.
3. **Loader**: Compile the main `NightmareLoader` project.

### Deployment
Place all binaries in the same directory:
- `NightmareLoader.exe`
- `nightmare_dumper.exe`
- `dxgi_core.dll`

Run `NightmareLoader.exe` as Administrator.

---

## 🛡️ OpSec & Safety
This project is built with **Operational Security** in mind:
- Automated `.gitignore` shielding against binary leaks.
- Background process spoofing (`svchost.exe` masquerading).
- No hardcoded addresses; everything is signature-based.

---

## ⚖️ Disclaimer
This software is for **educational and research purposes only**. Use in production environments or public servers is at your own risk. The developers are not responsible for account bans or legal repercussions resulting from the use of this framework.

---

<p align="center">
  Developed with ❤️ for the RE Community.
</p>
