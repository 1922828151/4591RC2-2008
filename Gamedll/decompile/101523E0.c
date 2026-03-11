/*
 * func-name: sub_101523E0
 * func-address: 0x101523e0
 * callers: 0x1000f62d
 * callees: none
 */

bool __thiscall sub_101523E0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
