/*
 * func-name: ?REGetGlobalTimer@@YAPAVCRETimer@@XZ
 * func-address: 0x1007e670
 * callers: 0x10008c60, 0x1003dda0, 0x100477a0, 0x10048730, 0x1004d7e0, 0x10088cd0, 0x1008ce00, 0x100956b0, 0x100958f0, 0x10095ca0, 0x10095cf0, 0x100a59e0, 0x100ac960, 0x100acd90, 0x100af1f0, 0x100bdfc0, 0x100c0490, 0x100c0c50, 0x100c84a0, 0x100f4f50, 0x101017c0, 0x10103770, 0x1011b870, 0x1011d270, 0x1011ed60, 0x1011ef20, 0x10124f00, 0x10125a30, 0x10136530, 0x10138880, 0x101396e0, 0x10139890, 0x1013e2e0, 0x10173030
 * callees: 0x1007e320
 */

struct CRETimer *__cdecl REGetGlobalTimer()
{
  if ( (dword_10285768 & 1) == 0 )
  {
    dword_10285768 |= 1u;
    CRETimer::CRETimer((CRETimer *)&unk_10284F40);
  }
  return (struct CRETimer *)&unk_10284F40;
}
