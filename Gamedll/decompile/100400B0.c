/*
 * func-name: sub_100400B0
 * func-address: 0x100400b0
 * callers: 0x10001df2
 * callees: none
 */

bool __thiscall sub_100400B0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
