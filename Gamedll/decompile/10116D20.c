/*
 * func-name: sub_10116D20
 * func-address: 0x10116d20
 * callers: 0x1000c9e1
 * callees: none
 */

bool __thiscall sub_10116D20(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
