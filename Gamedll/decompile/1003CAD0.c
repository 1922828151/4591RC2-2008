/*
 * func-name: sub_1003CAD0
 * func-address: 0x1003cad0
 * callers: 0x10006d93
 * callees: none
 */

bool __thiscall sub_1003CAD0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] == a2[1];
}
