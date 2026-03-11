/*
 * func-name: sub_1000A8C0
 * func-address: 0x1000a8c0
 * callers: 0x1000a000, 0x1000b510
 * callees: 0x100294f2
 */

void __stdcall sub_1000A8C0(int a1)
{
  if ( *(_DWORD *)(a1 + 8) )
    operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
}
