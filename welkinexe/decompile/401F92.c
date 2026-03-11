/*
 * func-name: QueryPerformanceCounter
 * func-address: 0x401f92
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)
{
  return __imp_QueryPerformanceCounter(lpPerformanceCount);
}
