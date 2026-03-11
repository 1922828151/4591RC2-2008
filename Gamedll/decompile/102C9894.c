/*
 * func-name: GetLastError
 * func-address: 0x102c9894
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetLastError()
{
  return __imp_GetLastError();
}
