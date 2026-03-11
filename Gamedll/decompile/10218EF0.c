/*
 * func-name: sub_10218EF0
 * func-address: 0x10218ef0
 * callers: 0x1000b154
 * callees: 0x102c9d50
 */

void __stdcall sub_10218EF0(int a1)
{
  if ( *(_DWORD *)(a1 + 4) )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
