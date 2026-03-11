/*
 * func-name: sub_10021930
 * func-address: 0x10021930
 * callers: 0x1001bd30, 0x100214e0
 * callees: 0x10021c40
 */

int __usercall sub_10021930@<eax>(int a1@<esi>)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  _BYTE v4[8]; // [esp+8h] [ebp-8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > v1 )
    invalid_parameter_noinfo();
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_10021C40(a1, v4, a1, v2, a1, v1);
}
