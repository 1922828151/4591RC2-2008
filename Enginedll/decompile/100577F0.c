/*
 * func-name: sub_100577F0
 * func-address: 0x100577f0
 * callers: 0x1005a2a0
 * callees: none
 */

void __cdecl sub_100577F0(int a1, _DWORD *a2, unsigned int a3, int a4, int a5, int a6, _DWORD *a7)
{
  unsigned int v8; // esi
  unsigned int v9; // eax

  while ( a3 != a6 )
  {
    v8 = a3 >> 2;
    if ( !a2 )
      invalid_parameter_noinfo();
    if ( a3 >= a2[3] + a2[4] )
      invalid_parameter_noinfo();
    v9 = a2[2];
    if ( v9 <= v8 )
      v8 -= v9;
    *(_DWORD *)(*(_DWORD *)(a2[1] + 4 * v8) + 4 * (a3++ & 3)) = *a7;
  }
}
