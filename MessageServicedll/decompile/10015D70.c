/*
 * func-name: sub_10015D70
 * func-address: 0x10015d70
 * callers: 0x10015330
 * callees: 0x10016010
 */

int __usercall sub_10015D70@<eax>(int a1@<esi>)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  _BYTE v4[12]; // [esp+10h] [ebp-Ch] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > v1 )
    invalid_parameter_noinfo();
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_10016010(a1, v4, a1, v2, a1, v1);
}
