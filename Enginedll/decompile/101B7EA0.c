/*
 * func-name: sub_101B7EA0
 * func-address: 0x101b7ea0
 * callers: none
 * callees: none
 */

FARPROC sub_101B7EA0()
{
  HMODULE ModuleHandleA; // eax
  FARPROC result; // eax

  ModuleHandleA = GetModuleHandleA("kernel32");
  result = GetProcAddress(ModuleHandleA, "IsWow64Process");
  dword_1028582C = (int (__stdcall *)(_DWORD, _DWORD))result;
  return result;
}
