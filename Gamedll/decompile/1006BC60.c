/*
 * func-name: sub_1006BC60
 * func-address: 0x1006bc60
 * callers: 0x1001a992
 * callees: none
 */

bool __thiscall sub_1006BC60(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
