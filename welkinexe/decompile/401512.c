/*
 * func-name: GetCurrentThread
 * func-address: 0x401512
 * callers: none
 * callees: none
 */

// attributes: thunk
HANDLE __stdcall GetCurrentThread()
{
  return __imp_GetCurrentThread();
}
