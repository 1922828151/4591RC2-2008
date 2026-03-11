/*
 * func-name: ??0CRETimer@@QAE@XZ
 * func-address: 0x1007e320
 * callers: 0x1007e670
 * callees: none
 */

CRETimer *__thiscall CRETimer::CRETimer(CRETimer *this)
{
  BOOL v2; // eax
  DWORD LowPart; // edx
  LARGE_INTEGER Frequency; // [esp+4h] [ebp-8h] BYREF

  *((_DWORD *)this + 520) = 0;
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 1) = 1;
  v2 = QueryPerformanceFrequency(&Frequency);
  LowPart = Frequency.LowPart;
  *((_DWORD *)this + 3) = Frequency.HighPart;
  *(_BYTE *)this = v2;
  *((_DWORD *)this + 2) = LowPart;
  return this;
}
