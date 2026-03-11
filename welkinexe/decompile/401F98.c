/*
 * func-name: GetTickCount
 * func-address: 0x401f98
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetTickCount()
{
  return __imp_GetTickCount();
}
