/*
 * func-name: sub_10013080
 * func-address: 0x10013080
 * callers: 0x10011e80, 0x10012140
 * callees: 0x100140c0, 0x10018cf2
 */

void __stdcall sub_10013080(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_100140C0(a1 + 4);
  operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
}
