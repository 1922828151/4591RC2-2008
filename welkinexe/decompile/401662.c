/*
 * func-name: GetProcAddress
 * func-address: 0x401662
 * callers: none
 * callees: none
 */

// attributes: thunk
FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
  return __imp_GetProcAddress(hModule, lpProcName);
}
