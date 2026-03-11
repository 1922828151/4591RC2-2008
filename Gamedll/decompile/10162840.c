/*
 * func-name: sub_10162840
 * func-address: 0x10162840
 * callers: 0x1000326f
 * callees: none
 */

bool __thiscall sub_10162840(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
