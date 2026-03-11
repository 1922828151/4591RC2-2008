/*
 * func-name: sub_100EAA30
 * func-address: 0x100eaa30
 * callers: 0x100117d9
 * callees: none
 */

bool __thiscall sub_100EAA30(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
