/*
 * func-name: sub_100028B0
 * func-address: 0x100028b0
 * callers: 0x100012e0, 0x10001500, 0x10004d00, 0x100052a0, 0x10005560, 0x100174e0, 0x10017550, 0x1001a870, 0x1001aa80
 * callees: 0x10009e60, 0x100294f2
 */

void __stdcall sub_100028B0(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_10009E60(a1 + 4);
  operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
}
