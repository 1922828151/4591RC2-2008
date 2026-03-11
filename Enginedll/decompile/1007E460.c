/*
 * func-name: ?Start@CRETimer@@QAEXXZ
 * func-address: 0x1007e460
 * callers: none
 * callees: none
 */

void __thiscall CRETimer::Start(CRETimer *this)
{
  DWORD LowPart; // ecx
  LONG HighPart; // eax
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  if ( *(_BYTE *)this )
  {
    LowPart = *((_DWORD *)this + 4);
    HighPart = *((_DWORD *)this + 5);
    if ( !*((_QWORD *)this + 2) )
    {
      QueryPerformanceCounter(&PerformanceCount);
      HighPart = PerformanceCount.HighPart;
      LowPart = PerformanceCount.LowPart;
    }
    if ( *((_BYTE *)this + 1) )
      *((_QWORD *)this + 4) += __PAIR64__(HighPart, LowPart) - *((_QWORD *)this + 2);
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 6) = LowPart;
    *((_DWORD *)this + 7) = HighPart;
    *((_BYTE *)this + 1) = 0;
  }
}
