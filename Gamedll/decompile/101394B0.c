/*
 * func-name: sub_101394B0
 * func-address: 0x101394b0
 * callers: 0x1000c7bb
 * callees: none
 */

bool __thiscall sub_101394B0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
