/*
 * func-name: sub_10007720
 * func-address: 0x10007720
 * callers: 0x100051d0, 0x10005250, 0x10005560, 0x10028de0, 0x10028e60
 * callees: 0x1000a000, 0x100294f2
 */

void __stdcall sub_10007720(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_1000A000(a1 + 4);
  operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
}
