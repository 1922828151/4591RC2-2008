/*
 * func-name: sub_10005D90
 * func-address: 0x10005d90
 * callers: 0x100036a0, 0x10003990, 0x10003e80, 0x10004030
 * callees: 0x10007770, 0x10018cf2
 */

void __stdcall sub_10005D90(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_10007770(a1 + 4);
  operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
}
