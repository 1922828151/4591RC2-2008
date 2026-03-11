/*
 * func-name: sub_10288530
 * func-address: 0x10288530
 * callers: 0x1000d6c5
 * callees: none
 */

void __cdecl sub_10288530(_DWORD *a1, int a2)
{
  unsigned int v2; // eax

  if ( !*a1 )
    _invalid_parameter_noinfo();
  v2 = 4 * a2 + a1[1];
  if ( v2 > *(_DWORD *)(*a1 + 8) || v2 < *(_DWORD *)(*a1 + 4) )
    _invalid_parameter_noinfo();
  a1[1] += 4 * a2;
}
