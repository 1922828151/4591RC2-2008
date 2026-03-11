/*
 * func-name: sub_10005B10
 * func-address: 0x10005b10
 * callers: 0x10004830
 * callees: 0x100081f0, 0x1000b100
 */

int __usercall sub_10005B10@<eax>(int a1@<eax>)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  sub_1000B100();
  v2 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > v2 )
    invalid_parameter_noinfo();
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  return sub_100081F0(*(_BYTE *)(a1 + 16), a1, v3, a1, v2);
}
