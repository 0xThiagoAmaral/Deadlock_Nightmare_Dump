use windows::Win32::Foundation::*;
use windows::Win32::System::Threading::*;
use windows::Win32::System::Diagnostics::Debug::*;
use windows::Win32::System::ProcessStatus::*;

pub struct Process {
    pub handle: HANDLE,
}

impl Process {
    pub fn open(name: &str) -> Option<Self> {
        let mut process_ids = [0u32; 1024];
        let mut bytes_returned = 0u32;
        unsafe {
            if K32EnumProcesses(process_ids.as_mut_ptr(), process_ids.len() as u32 * 4, &mut bytes_returned).as_bool() {
                let count = bytes_returned / 4;
                for i in 0..count {
                    let pid = process_ids[i as usize];
                    if pid == 0 { continue; }
                    let handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, false, pid);
                    if let Ok(h) = handle {
                        let mut buffer = [0u16; 260];
                        if K32GetModuleBaseNameW(h, None, &mut buffer) > 0 {
                            let process_name = String::from_utf16_lossy(&buffer).trim_matches('\0').to_lowercase();
                            if process_name.contains(name) {
                                return Some(Process { handle: h });
                            }
                        }
                        let _ = CloseHandle(h);
                    }
                }
            }
        }
        None
    }

    pub fn get_module(&self, name: &str) -> Option<(usize, usize)> {
        let mut modules = [HMODULE::default(); 1024];
        let mut bytes_returned = 0u32;
        unsafe {
            if K32EnumProcessModules(self.handle, modules.as_mut_ptr(), (modules.len() * std::mem::size_of::<HMODULE>()) as u32, &mut bytes_returned).as_bool() {
                let count = bytes_returned / std::mem::size_of::<HMODULE>() as u32;
                for i in 0..count {
                    let mut buffer = [0u16; 260];
                    if K32GetModuleBaseNameW(self.handle, modules[i as usize], &mut buffer) > 0 {
                        let module_name = String::from_utf16_lossy(&buffer).trim_matches('\0').to_lowercase();
                        if module_name == name.to_lowercase() {
                            let mut info = MODULEINFO::default();
                            if K32GetModuleInformation(self.handle, modules[i as usize], &mut info, std::mem::size_of::<MODULEINFO>() as u32).as_bool() {
                                return Some((info.lpBaseOfDll as usize, info.SizeOfImage as usize));
                            }
                        }
                    }
                }
            }
        }
        None
    }

    pub fn read<T>(&self, addr: usize) -> T {
        let mut buffer: T = unsafe { std::mem::zeroed() };
        unsafe {
            let _ = ReadProcessMemory(self.handle, addr as _, &mut buffer as *mut T as _, std::mem::size_of::<T>(), None);
        }
        buffer
    }

    pub fn read_string(&self, addr: usize, max_len: usize) -> String {
        let mut buffer = vec![0u8; max_len];
        unsafe {
            let _ = ReadProcessMemory(self.handle, addr as _, buffer.as_mut_ptr() as _, max_len, None);
        }
        let end = buffer.iter().position(|&b| b == 0).unwrap_or(max_len);
        String::from_utf8_lossy(&buffer[..end]).to_string()
    }
}
