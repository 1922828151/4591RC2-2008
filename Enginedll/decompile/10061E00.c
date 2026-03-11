/*
 * func-name: sub_10061E00
 * func-address: 0x10061e00
 * callers: 0x10062710, 0x100627b0, 0x100ffd40, 0x100ffde0
 * callees: 0x101a2500
 */

void __stdcall sub_10061E00(int a1)
{
  if ( *(_DWORD *)(a1 + 4) )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
