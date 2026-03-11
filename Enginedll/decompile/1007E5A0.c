/*
 * func-name: ?GetTime@CRETimer@@QAENXZ
 * func-address: 0x1007e5a0
 * callers: none
 * callees: none
 */

double __thiscall CRETimer::GetTime(CRETimer *this)
{
  DWORD LowPart; // ecx
  LONG HighPart; // eax
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  if ( !*(_BYTE *)this )
    return -1.0;
  LowPart = *((_DWORD *)this + 4);
  HighPart = *((_DWORD *)this + 5);
  if ( !*((_QWORD *)this + 2) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    HighPart = PerformanceCount.HighPart;
    LowPart = PerformanceCount.LowPart;
  }
  PerformanceCount.QuadPart = __PAIR64__(HighPart, LowPart) - *((_QWORD *)this + 4);
  return (double)PerformanceCount.QuadPart / (double)*((__int64 *)this + 1);
}
