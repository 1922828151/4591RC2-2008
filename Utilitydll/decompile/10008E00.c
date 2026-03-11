/*
 * func-name: sub_10008E00
 * func-address: 0x10008e00
 * callers: 0x100086c0, 0x10008950, 0x10008a80, 0x1000b550, 0x10010cb0, 0x10014830, 0x10014920
 * callees: none
 */

_DWORD *__usercall sub_10008E00@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] == *(_DWORD *)(*a1 + 4) )
    invalid_parameter_noinfo();
  a1[1] = *(_DWORD *)a1[1];
  return a1;
}
