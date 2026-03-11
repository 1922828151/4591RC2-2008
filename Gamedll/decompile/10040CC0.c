/*
 * func-name: sub_10040CC0
 * func-address: 0x10040cc0
 * callers: 0x10004d27
 * callees: none
 */

bool __thiscall sub_10040CC0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
