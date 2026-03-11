/*
 * func-name: sub_1002C660
 * func-address: 0x1002c660
 * callers: 0x1002a4c0, 0x1003a2e0, 0x1004d820
 * callees: none
 */

void __usercall sub_1002C660(_DWORD *a1@<ebx>, int a2, _DWORD *a3, int a4, _DWORD *a5)
{
  while ( 1 )
  {
    if ( !a2 || a2 != a4 )
      invalid_parameter_noinfo();
    if ( a3 == a5 )
      break;
    ++*a1;
    if ( !a2 )
      invalid_parameter_noinfo();
    if ( a3 == *(_DWORD **)(a2 + 4) )
      invalid_parameter_noinfo();
    a3 = (_DWORD *)*a3;
  }
}
