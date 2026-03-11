/*
 * func-name: sub_10040C80
 * func-address: 0x10040c80
 * callers: 0x1000fe89
 * callees: none
 */

bool __thiscall sub_10040C80(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
