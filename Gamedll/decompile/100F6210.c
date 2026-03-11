/*
 * func-name: sub_100F6210
 * func-address: 0x100f6210
 * callers: 0x1000bb09
 * callees: none
 */

bool __thiscall sub_100F6210(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
