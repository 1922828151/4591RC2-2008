/*
 * func-name: sub_1000AFF0
 * func-address: 0x1000aff0
 * callers: 0x10033cf0, 0x10047c70
 * callees: none
 */

int __usercall sub_1000AFF0@<eax>(_DWORD *a1@<ebx>)
{
  unsigned int v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // eax

  v1 = a1[3];
  if ( v1 > v1 + a1[4] )
    invalid_parameter_noinfo();
  v2 = v1 >> 2;
  if ( v1 >= a1[3] + a1[4] )
    invalid_parameter_noinfo();
  v3 = a1[2];
  if ( v3 <= v2 )
    v2 -= v3;
  return *(_DWORD *)(a1[1] + 4 * v2) + 4 * (v1 & 3);
}
