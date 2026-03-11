/*
 * func-name: sub_10115CF0
 * func-address: 0x10115cf0
 * callers: 0x10016469
 * callees: none
 */

bool __thiscall sub_10115CF0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
