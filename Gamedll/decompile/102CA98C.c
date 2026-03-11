/*
 * func-name: GetSystemTimeAsFileTime
 * func-address: 0x102ca98c
 * callers: none
 * callees: none
 */

// attributes: thunk
void __stdcall GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
  __imp_GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}
