/*
 * func-name: sub_101910B0
 * func-address: 0x101910b0
 * callers: 0x10015c71
 * callees: none
 */

bool __thiscall sub_101910B0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
