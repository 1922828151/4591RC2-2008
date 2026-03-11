/*
 * func-name: sub_100194B0
 * func-address: 0x100194b0
 * callers: 0x100180e0, 0x10018240, 0x100182b0, 0x1001ce10, 0x10027830
 * callees: none
 */

void __usercall sub_100194B0(_DWORD *a1@<ebx>, int a2, _DWORD *a3, int a4, _DWORD *a5)
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
