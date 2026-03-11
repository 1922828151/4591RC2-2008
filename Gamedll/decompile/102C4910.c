/*
 * func-name: sub_102C4910
 * func-address: 0x102c4910
 * callers: none
 * callees: none
 */

int __thiscall sub_102C4910(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return (this[1] - a2[1]) >> 3;
}
