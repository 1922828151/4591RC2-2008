/*
 * func-name: sub_101E6280
 * func-address: 0x101e6280
 * callers: 0x1000cf1d
 * callees: none
 */

bool __thiscall sub_101E6280(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
