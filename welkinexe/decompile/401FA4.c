/*
 * func-name: GetCurrentProcessId
 * func-address: 0x401fa4
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetCurrentProcessId()
{
  return __imp_GetCurrentProcessId();
}
