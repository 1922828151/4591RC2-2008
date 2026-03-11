/*
 * func-name: sub_102C4C10
 * func-address: 0x102c4c10
 * callers: none
 * callees: none
 */

bool __thiscall sub_102C4C10(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
