/*
 * func-name: GetSystemInfo
 * func-address: 0x40151e
 * callers: none
 * callees: none
 */

// attributes: thunk
void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
{
  __imp_GetSystemInfo(lpSystemInfo);
}
