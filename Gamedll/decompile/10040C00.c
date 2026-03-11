/*
 * func-name: sub_10040C00
 * func-address: 0x10040c00
 * callers: 0x10019e75
 * callees: none
 */

bool __thiscall sub_10040C00(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
