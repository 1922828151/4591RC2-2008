/*
 * func-name: sub_100EAE30
 * func-address: 0x100eae30
 * callers: 0x1001a7a8
 * callees: none
 */

void __cdecl sub_100EAE30(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
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
