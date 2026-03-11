/*
 * func-name: QueryPerformanceCounter
 * func-address: 0x102ca986
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}
