/*
 * func-name: sub_1006BDA0
 * func-address: 0x1006bda0
 * callers: 0x10019196
 * callees: none
 */

bool __thiscall sub_1006BDA0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
