/*
 * func-name: sub_10008910
 * func-address: 0x10008910
 * callers: 0x100064b0, 0x1000db10
 * callees: none
 */

void __usercall sub_10008910(_DWORD *a1@<ebx>, int a2, _DWORD *a3, int a4, _DWORD *a5)
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
