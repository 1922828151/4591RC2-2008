/*
 * func-name: GetCurrentThreadId
 * func-address: 0x102c98d0
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}
