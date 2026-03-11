/*
 * func-name: sub_1014F0C0
 * func-address: 0x1014f0c0
 * callers: 0x10019c13
 * callees: none
 */

bool __thiscall sub_1014F0C0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
