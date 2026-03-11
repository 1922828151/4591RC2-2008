/*
 * func-name: sub_10040AC0
 * func-address: 0x10040ac0
 * callers: 0x100199c5
 * callees: none
 */

bool __thiscall sub_10040AC0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
