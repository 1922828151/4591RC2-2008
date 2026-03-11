/*
 * func-name: sub_10004A20
 * func-address: 0x10004a20
 * callers: 0x100042f0, 0x10004ac0
 * callees: 0x100048f0
 */

char __cdecl sub_10004A20(HANDLE hProcess)
{
  HMODULE LibraryA; // eax
  HMODULE v2; // esi
  DWORD Options; // eax

  if ( !dword_1003850C )
  {
    LibraryA = LoadLibraryA("PSAPI.DLL");
    v2 = LibraryA;
    if ( !LibraryA )
      return 0;
    EnumProcesses = (int)GetProcAddress(LibraryA, "EnumProcesses");
    EnumProcessModules = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(v2, "EnumProcessModules");
    GetModuleFileNameExA = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(v2, "GetModuleFileNameExA");
    GetModuleBaseNameA = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(v2, "GetModuleBaseNameA");
    GetModuleInformation = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD))GetProcAddress(v2, "GetModuleInformation");
    Options = SymGetOptions();
    SymSetOptions(Options | 0x80000010);
    SymInitialize(hProcess, 0, 1);
    sub_100048F0(hProcess);
    dword_1003850C = 1;
  }
  return 1;
}
