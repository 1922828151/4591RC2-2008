/*
 * func-name: sub_1006BD60
 * func-address: 0x1006bd60
 * callers: 0x10007bfd
 * callees: none
 */

bool __thiscall sub_1006BD60(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
