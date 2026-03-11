/*
 * func-name: ?Stop@CRETimer@@QAEXXZ
 * func-address: 0x1007e4c0
 * callers: none
 * callees: none
 */

void __thiscall CRETimer::Stop(CRETimer *this)
{
  DWORD LowPart; // ecx
  LONG HighPart; // eax
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  if ( *(_BYTE *)this && !*((_BYTE *)this + 1) )
  {
    LowPart = *((_DWORD *)this + 4);
    HighPart = *((_DWORD *)this + 5);
    if ( !*((_QWORD *)this + 2) )
    {
      QueryPerformanceCounter(&PerformanceCount);
      HighPart = PerformanceCount.HighPart;
      LowPart = PerformanceCount.LowPart;
    }
    *((_DWORD *)this + 4) = LowPart;
    *((_DWORD *)this + 5) = HighPart;
    *((_DWORD *)this + 6) = LowPart;
    *((_DWORD *)this + 7) = HighPart;
    *((_BYTE *)this + 1) = 1;
  }
}
