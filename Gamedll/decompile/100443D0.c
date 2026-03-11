/*
 * func-name: sub_100443D0
 * func-address: 0x100443d0
 * callers: 0x10013ca0
 * callees: none
 */

int __thiscall sub_100443D0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return (this[1] - a2[1]) >> 2;
}
