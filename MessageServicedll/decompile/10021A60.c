/*
 * func-name: sub_10021A60
 * func-address: 0x10021a60
 * callers: 0x10020d10, 0x10020e70
 * callees: 0x10022cb0, 0x100294f2
 */

void __stdcall sub_10021A60(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_10022CB0(a1 + 4);
  operator delete(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
}
