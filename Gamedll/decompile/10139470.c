/*
 * func-name: sub_10139470
 * func-address: 0x10139470
 * callers: 0x10005632
 * callees: none
 */

bool __thiscall sub_10139470(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
