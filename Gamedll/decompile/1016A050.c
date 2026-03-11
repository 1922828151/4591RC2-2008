/*
 * func-name: sub_1016A050
 * func-address: 0x1016a050
 * callers: 0x1001a726
 * callees: none
 */

bool __thiscall sub_1016A050(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
