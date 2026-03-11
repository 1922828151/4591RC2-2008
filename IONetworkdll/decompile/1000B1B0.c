/*
 * func-name: sub_1000B1B0
 * func-address: 0x1000b1b0
 * callers: 0x100117b0
 * callees: none
 */

_DWORD *__usercall sub_1000B1B0@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] >= *(_DWORD *)(*a1 + 8) )
    invalid_parameter_noinfo();
  a1[1] += 4;
  return a1;
}
