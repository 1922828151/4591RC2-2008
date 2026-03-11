/*
 * func-name: sub_10100DF0
 * func-address: 0x10100df0
 * callers: 0x10019eb1
 * callees: none
 */

bool __thiscall sub_10100DF0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
