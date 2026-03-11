/*
 * func-name: sub_100DFAD0
 * func-address: 0x100dfad0
 * callers: 0x100038e6
 * callees: none
 */

bool __thiscall sub_100DFAD0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] == a2[1];
}
