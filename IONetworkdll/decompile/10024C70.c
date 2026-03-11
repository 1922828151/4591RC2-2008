/*
 * func-name: sub_10024C70
 * func-address: 0x10024c70
 * callers: 0x10015e70, 0x10025540, 0x10025660, 0x10025750, 0x10025840, 0x1002c6a0, 0x1004a540, 0x1004a630
 * callees: none
 */

_DWORD *__usercall sub_10024C70@<eax>(_DWORD *a1@<esi>)
{
  if ( !*a1 )
    invalid_parameter_noinfo();
  if ( a1[1] == *(_DWORD *)(*a1 + 4) )
    invalid_parameter_noinfo();
  a1[1] = *(_DWORD *)a1[1];
  return a1;
}
