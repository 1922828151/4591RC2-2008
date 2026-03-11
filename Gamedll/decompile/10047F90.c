/*
 * func-name: sub_10047F90
 * func-address: 0x10047f90
 * callers: 0x1000b5b9
 * callees: none
 */

void __cdecl sub_10047F90(_DWORD *a1, int a2)
{
  unsigned int v2; // eax

  if ( !*a1 )
    _invalid_parameter_noinfo();
  v2 = 4 * a2 + a1[1];
  if ( v2 > *(_DWORD *)(*a1 + 8) || v2 < *(_DWORD *)(*a1 + 4) )
    _invalid_parameter_noinfo();
  a1[1] += 4 * a2;
}
