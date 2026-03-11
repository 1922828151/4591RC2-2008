/*
 * func-name: sub_102B3370
 * func-address: 0x102b3370
 * callers: 0x100147b3
 * callees: 0x10003ca6
 */

void __cdecl sub_102B3370(int a1, int a2, int a3, unsigned int a4)
{
  if ( !a1 || a1 != a3 )
    _invalid_parameter_noinfo();
  if ( a2 != a4 )
  {
    if ( !a3 )
      _invalid_parameter_noinfo();
    if ( a4 <= *(_DWORD *)(a3 + 4) )
      _invalid_parameter_noinfo();
    if ( (int)(a4 - 4 - a2) >> 2 > 0 )
      sub_10003CA6(a2, (int)(a4 - 4 - a2) >> 2, 0, *(_DWORD *)(a4 - 4));
  }
}
