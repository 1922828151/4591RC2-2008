/*
 * func-name: sub_102C48E0
 * func-address: 0x102c48e0
 * callers: none
 * callees: none
 */

int __thiscall sub_102C48E0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return (this[1] - a2[1]) >> 2;
}
