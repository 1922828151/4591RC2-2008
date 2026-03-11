/*
 * func-name: sub_1000A930
 * func-address: 0x1000a930
 * callers: 0x10005230
 * callees: 0x1000d7a0
 */

int __usercall sub_1000A930@<eax>(int a1@<esi>)
{
  int result; // eax

  if ( *(_DWORD *)(a1 + 100) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 100));
  if ( *(_DWORD *)(a1 + 104) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 104));
  if ( *(_DWORD *)(a1 + 108) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 108));
  if ( *(_DWORD *)(a1 + 112) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 112));
  result = 0;
  *(_DWORD *)(a1 + 100) = -1;
  *(_DWORD *)(a1 + 104) = -1;
  *(_DWORD *)(a1 + 108) = -1;
  *(_DWORD *)(a1 + 112) = -1;
  *(_BYTE *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 117) = 0;
  *(_BYTE *)(a1 + 118) = 0;
  *(_WORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_WORD *)(a1 + 158) = 0;
  *(_WORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  return result;
}
