/*
 * func-name: ?StartMiniTimer@CRETimer@@QAEXXZ
 * func-address: 0x1007e380
 * callers: 0x10008c60, 0x1003dda0, 0x100477a0, 0x10048730, 0x1004d7e0, 0x10088cd0, 0x1008ce00, 0x100958f0, 0x10095ca0, 0x100f4f50, 0x101017c0, 0x10103770, 0x1011b870, 0x1011d270, 0x1011ed60, 0x1011ef20, 0x10124f00, 0x10125a30, 0x10136530, 0x10138880, 0x101396e0, 0x10139890, 0x1013e2e0, 0x10173030
 * callees: 0x100956d0
 */

void __thiscall CRETimer::StartMiniTimer(LARGE_INTEGER *this)
{
  int LowPart; // eax
  DWORD v3; // eax

  LowPart = this[260].LowPart;
  if ( (unsigned int)LowPart >= 0xFE )
  {
    if ( LowPart <= 0 )
      Error("Too few nested REGetGlobalTimer()->StartMiniTimer() calls");
    else
      Error("Too many nested REGetGlobalTimer()->StartMiniTimer() calls");
  }
  v3 = this[260].LowPart;
  this[260].LowPart = v3 + 1;
  QueryPerformanceCounter(&this[v3 + 5]);
}
