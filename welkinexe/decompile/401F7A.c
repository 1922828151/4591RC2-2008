/*
 * func-name: GetCurrentProcess
 * func-address: 0x401f7a
 * callers: none
 * callees: none
 */

// attributes: thunk
HANDLE __stdcall GetCurrentProcess()
{
  return __imp_GetCurrentProcess();
}
