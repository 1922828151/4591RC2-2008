/*
 * func-name: sub_10008200
 * func-address: 0x10008200
 * callers: 0x100073a0
 * callees: 0x10008c80, 0x100098d0
 */

int __usercall sub_10008200@<eax>(int a1@<eax>)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  sub_10008C80();
  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > v2 )
    invalid_parameter_noinfo();
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_100098D0(*(unsigned __int8 *)(a1 + 16), a1, v3, a1, v2);
}
