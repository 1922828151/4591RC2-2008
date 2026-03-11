/*
 * func-name: sub_1006BCA0
 * func-address: 0x1006bca0
 * callers: 0x100187b9
 * callees: none
 */

bool __thiscall sub_1006BCA0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
