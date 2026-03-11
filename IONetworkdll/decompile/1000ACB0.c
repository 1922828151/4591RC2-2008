/*
 * func-name: sub_1000ACB0
 * func-address: 0x1000acb0
 * callers: 0x10013430, 0x100148c0
 * callees: 0x1000b2b0
 */

int __usercall sub_1000ACB0@<eax>(int a1@<esi>)
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
  return sub_1000B2B0(a1, v4, a1, v2, a1, v1);
}
