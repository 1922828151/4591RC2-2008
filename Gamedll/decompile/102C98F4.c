/*
 * func-name: GetModuleFileNameA
 * func-address: 0x102c98f4
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
{
  return __imp_GetModuleFileNameA(hModule, lpFilename, nSize);
}
