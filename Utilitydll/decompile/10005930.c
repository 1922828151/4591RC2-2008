/*
 * func-name: sub_10005930
 * func-address: 0x10005930
 * callers: 0x10002810, 0x10002970, 0x1000cdb0, 0x1000ce30
 * callees: 0x10006700, 0x10018cf2
 */

int __stdcall sub_10005930(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  return sub_10006700();
}
