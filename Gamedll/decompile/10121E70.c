/*
 * func-name: sub_10121E70
 * func-address: 0x10121e70
 * callers: 0x1001abd1
 * callees: none
 */

bool __thiscall sub_10121E70(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
