/*
 * func-name: sub_10040D00
 * func-address: 0x10040d00
 * callers: 0x10019a3d
 * callees: none
 */

bool __thiscall sub_10040D00(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
