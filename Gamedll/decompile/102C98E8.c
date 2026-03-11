/*
 * func-name: GetCurrentDirectoryA
 * func-address: 0x102c98e8
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer)
{
  return __imp_GetCurrentDirectoryA(nBufferLength, lpBuffer);
}
