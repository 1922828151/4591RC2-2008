/*
 * func-name: sub_101E4180
 * func-address: 0x101e4180
 * callers: 0x100144d9
 * callees: none
 */

bool __thiscall sub_101E4180(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
