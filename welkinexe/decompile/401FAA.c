/*
 * func-name: GetSystemTimeAsFileTime
 * func-address: 0x401faa
 * callers: none
 * callees: none
 */

// attributes: thunk
void __stdcall GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
  __imp_GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
}
