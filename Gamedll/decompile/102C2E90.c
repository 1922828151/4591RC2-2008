/*
 * func-name: sub_102C2E90
 * func-address: 0x102c2e90
 * callers: none
 * callees: none
 */

int __thiscall sub_102C2E90(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return (this[1] - a2[1]) >> 3;
}
