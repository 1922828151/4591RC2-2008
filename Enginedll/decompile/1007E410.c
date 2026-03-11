/*
 * func-name: ?Reset@CRETimer@@QAEXXZ
 * func-address: 0x1007e410
 * callers: none
 * callees: none
 */

void __thiscall CRETimer::Reset(CRETimer *this)
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
    *((_DWORD *)this + 8) = LowPart;
    *((_DWORD *)this + 9) = HighPart;
    *((_DWORD *)this + 6) = LowPart;
    *((_DWORD *)this + 7) = HighPart;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
    *((_BYTE *)this + 1) = 0;
  }
}
