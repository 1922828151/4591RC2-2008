/*
 * func-name: GetCurrentProcessId
 * func-address: 0x102c98ca
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetCurrentProcessId()
{
  return __imp_GetCurrentProcessId();
}
