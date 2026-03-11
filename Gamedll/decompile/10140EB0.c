/*
 * func-name: sub_10140EB0
 * func-address: 0x10140eb0
 * callers: 0x10010163
 * callees: none
 */

bool __thiscall sub_10140EB0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
