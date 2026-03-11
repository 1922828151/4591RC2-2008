/*
 * func-name: sub_100F49B0
 * func-address: 0x100f49b0
 * callers: 0x1000d46d
 * callees: none
 */

bool __thiscall sub_100F49B0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
