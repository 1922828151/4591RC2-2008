/*
 * func-name: GetCurrentProcess
 * func-address: 0x102ca96e
 * callers: none
 * callees: none
 */

// attributes: thunk
HANDLE __stdcall GetCurrentProcess()
{
  return __imp_GetCurrentProcess();
}
