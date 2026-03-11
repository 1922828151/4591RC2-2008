/*
 * func-name: sub_10012990
 * func-address: 0x10012990
 * callers: 0x10010f50, 0x10010fd0, 0x100125a0
 * callees: 0x10013ed0, 0x10018cf2
 */

void __stdcall sub_10012990(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_10013ED0();
  operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
}
