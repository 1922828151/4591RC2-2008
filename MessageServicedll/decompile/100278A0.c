/*
 * func-name: sub_100278A0
 * func-address: 0x100278a0
 * callers: 0x1001bd30, 0x10027030
 * callees: 0x10027a50
 */

int __usercall sub_100278A0@<eax>(int a1@<eax>)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  _BYTE v5[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > v2 )
    invalid_parameter_noinfo();
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_10027A50(v5, a1, v3, a1, v2);
}
