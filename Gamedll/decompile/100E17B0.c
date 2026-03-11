/*
 * func-name: sub_100E17B0
 * func-address: 0x100e17b0
 * callers: 0x100123c3
 * callees: none
 */

void __cdecl sub_100E17B0(_DWORD *a1, int a2)
{
  unsigned int v2; // eax

  if ( !*a1 )
    _invalid_parameter_noinfo();
  v2 = 92 * a2 + a1[1];
  if ( v2 > *(_DWORD *)(*a1 + 8) || v2 < *(_DWORD *)(*a1 + 4) )
    _invalid_parameter_noinfo();
  a1[1] += 92 * a2;
}
