/*
 * func-name: sub_1000B180
 * func-address: 0x1000b180
 * callers: 0x100117b0
 * callees: none
 */

int __usercall sub_1000B180@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] >= *(_DWORD *)(*a1 + 8) )
    invalid_parameter_noinfo();
  return a1[1];
}
