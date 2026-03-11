/*
 * func-name: sub_10043CE0
 * func-address: 0x10043ce0
 * callers: 0x100127c9
 * callees: none
 */

bool __thiscall sub_10043CE0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
