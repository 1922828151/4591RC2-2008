/*
 * func-name: sub_10008240
 * func-address: 0x10008240
 * callers: 0x10009d70, 0x10009e90
 * callees: none
 */

_DWORD *__usercall sub_10008240@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] == *(_DWORD *)(*a1 + 4) )
    invalid_parameter_noinfo();
  a1[1] = *(_DWORD *)a1[1];
  return a1;
}
