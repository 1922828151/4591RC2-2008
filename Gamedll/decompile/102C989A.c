/*
 * func-name: GetTickCount
 * func-address: 0x102c989a
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetTickCount()
{
  return __imp_GetTickCount();
}
