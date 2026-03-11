/*
 * func-name: sub_100F6250
 * func-address: 0x100f6250
 * callers: 0x1001ab68
 * callees: none
 */

bool __thiscall sub_100F6250(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
