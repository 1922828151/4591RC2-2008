/*
 * func-name: ?GetElapsedTime@CRETimer@@QAENXZ
 * func-address: 0x1007e600
 * callers: none
 * callees: none
 */

double __thiscall CRETimer::GetElapsedTime(CRETimer *this)
{
  DWORD LowPart; // ecx
  LONG HighPart; // eax
  double QuadPart; // st7
  double v6; // st6
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
  PerformanceCount.QuadPart = __PAIR64__(HighPart, LowPart) - *((_QWORD *)this + 3);
  QuadPart = (double)PerformanceCount.QuadPart;
  v6 = (double)*((__int64 *)this + 1);
  *((_DWORD *)this + 6) = LowPart;
  *((_DWORD *)this + 7) = HighPart;
  return QuadPart / v6;
}
