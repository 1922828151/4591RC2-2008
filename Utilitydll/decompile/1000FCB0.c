/*
 * func-name: sub_1000FCB0
 * func-address: 0x1000fcb0
 * callers: 0x1000fc00, 0x10011b40
 * callees: 0x10010840, 0x10018cf2
 */

void __stdcall sub_1000FCB0(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_10010840(a1 + 4);
  operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
}
