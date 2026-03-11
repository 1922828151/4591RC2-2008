/*
 * func-name: sub_1024F710
 * func-address: 0x1024f710
 * callers: 0x1000e13d
 * callees: 0x10015f8c
 */

void __cdecl sub_1024F710(int a1, int a2, int a3, unsigned int a4, char a5)
{
  _DWORD *v5; // [esp-8h] [ebp-18h]

  if ( !a1 || a1 != a3 )
    _invalid_parameter_noinfo();
  if ( a2 != a4 )
  {
    if ( !a3 )
      _invalid_parameter_noinfo();
    if ( a4 <= *(_DWORD *)(a3 + 4) )
      _invalid_parameter_noinfo();
    if ( (int)(a4 - 4 - a2) >> 2 > 0 )
    {
      v5 = *(_DWORD **)(a4 - 4);
      if ( v5 )
        ++v5[9];
      sub_10015F8C(a2, (int)(a4 - 4 - a2) >> 2, 0, v5, a5);
    }
  }
}
