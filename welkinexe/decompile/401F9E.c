/*
 * func-name: GetCurrentThreadId
 * func-address: 0x401f9e
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}
