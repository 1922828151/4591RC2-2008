/*
 * func-name: sub_10001080
 * func-address: 0x10001080
 * callers: 0x100011d0, 0x100012d0
 * callees: none
 */

HANDLE __thiscall sub_10001080(int this)
{
  HMODULE LibraryA; // eax
  HANDLE CurrentProcess; // eax
  HANDLE result; // eax

  LibraryA = LoadLibraryA("ImageHlp.dll");
  *(_DWORD *)(this + 64) = LibraryA;
  SymInitialize_0 = (BOOL (__stdcall *)(HANDLE, PCSTR, BOOL))GetProcAddress(LibraryA, "SymInitialize");
  SymCleanup = (BOOL (__stdcall *)(HANDLE))GetProcAddress(*(HMODULE *)(this + 64), "SymCleanup");
  StackWalk_0 = (BOOL (__stdcall *)(DWORD, HANDLE, HANDLE, LPSTACKFRAME, PVOID, PREAD_PROCESS_MEMORY_ROUTINE, PFUNCTION_TABLE_ACCESS_ROUTINE, PGET_MODULE_BASE_ROUTINE, PTRANSLATE_ADDRESS_ROUTINE))GetProcAddress(*(HMODULE *)(this + 64), "StackWalk");
  SymGetSymFromAddr_0 = (BOOL (__stdcall *)(HANDLE, DWORD, PDWORD, PIMAGEHLP_SYMBOL))GetProcAddress(
                                                                                       *(HMODULE *)(this + 64),
                                                                                       "SymGetSymFromAddr");
  SymFunctionTableAccess_0 = (PVOID (__stdcall *)(HANDLE, DWORD))GetProcAddress(
                                                                   *(HMODULE *)(this + 64),
                                                                   "SymFunctionTableAccess");
  SymGetModuleBase_0 = (DWORD (__stdcall *)(HANDLE, DWORD))GetProcAddress(*(HMODULE *)(this + 64), "SymGetModuleBase");
  CurrentProcess = GetCurrentProcess();
  SymInitialize_0(CurrentProcess, 0, 1);
  result = CreateEventA(0, 0, 0, 0);
  *(_DWORD *)(this + 56) = result;
  return result;
}
