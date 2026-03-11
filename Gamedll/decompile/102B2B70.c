/*
 * func-name: sub_102B2B70
 * func-address: 0x102b2b70
 * callers: 0x10004025
 * callees: none
 */

void __cdecl sub_102B2B70(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  while ( 1 )
  {
    if ( !a1 || a1 != a3 )
      _invalid_parameter_noinfo();
    if ( a2 == a4 )
      break;
    ++*a5;
    if ( !a1 )
      _invalid_parameter_noinfo();
    if ( a2 == *(_DWORD **)(a1 + 4) )
      _invalid_parameter_noinfo();
    a2 = (_DWORD *)*a2;
  }
}
