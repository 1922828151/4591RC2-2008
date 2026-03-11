/*
 * func-name: ?StopMiniTimer@CRETimer@@QAEMXZ
 * func-address: 0x1007e3d0
 * callers: 0x10008c60, 0x1003dda0, 0x100477a0, 0x10048730, 0x1004d7e0, 0x10088cd0, 0x1008ce00, 0x100958f0, 0x10095cf0, 0x100f4f50, 0x101017c0, 0x10103770, 0x1011b870, 0x1011d270, 0x1011ed60, 0x1011ef20, 0x10124f00, 0x10125a30, 0x10136530, 0x10138880, 0x101396e0, 0x10139890, 0x1013e2e0, 0x10173030
 * callees: none
 */

double __thiscall CRETimer::StopMiniTimer(CRETimer *this)
{
  double QuadPart; // st7
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  QuadPart = (double)PerformanceCount.QuadPart;
  *(float *)&PerformanceCount.LowPart = (QuadPart - (double)*((__int64 *)this + --*((_DWORD *)this + 520) + 5))
                                      / ((double)*((__int64 *)this + 1)
                                       / 1000.0);
  return *(float *)&PerformanceCount.LowPart;
}
