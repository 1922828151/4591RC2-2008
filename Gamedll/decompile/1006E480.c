/*
 * func-name: sub_1006E480
 * func-address: 0x1006e480
 * callers: 0x1001502d
 * callees: none
 */

bool __thiscall sub_1006E480(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
