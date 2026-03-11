/*
 * func-name: sub_101516B0
 * func-address: 0x101516b0
 * callers: 0x1000a7ea
 * callees: none
 */

bool __thiscall sub_101516B0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
