/*
 * func-name: sub_101D5510
 * func-address: 0x101d5510
 * callers: 0x100152b7
 * callees: none
 */

bool __thiscall sub_101D5510(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
