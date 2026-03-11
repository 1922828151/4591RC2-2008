/*
 * func-name: sub_102C2FE0
 * func-address: 0x102c2fe0
 * callers: none
 * callees: none
 */

bool __thiscall sub_102C2FE0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] == a2[1];
}
