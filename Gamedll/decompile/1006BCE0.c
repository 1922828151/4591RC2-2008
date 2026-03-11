/*
 * func-name: sub_1006BCE0
 * func-address: 0x1006bce0
 * callers: 0x1001086b
 * callees: none
 */

bool __thiscall sub_1006BCE0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
