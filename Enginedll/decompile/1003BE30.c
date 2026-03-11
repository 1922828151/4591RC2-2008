/*
 * func-name: sub_1003BE30
 * func-address: 0x1003be30
 * callers: 0x1003c690, 0x1003c730, 0x1015c9f0
 * callees: 0x1017a0b0, 0x101a2500
 */

int __stdcall sub_1003BE30(int a1)
{
  if ( *(_DWORD *)(a1 + 52) )
    operator delete(*(void **)(a1 + 52));
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  return sub_1017A0B0(a1 + 4);
}
