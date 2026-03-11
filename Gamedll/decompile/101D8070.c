/*
 * func-name: sub_101D8070
 * func-address: 0x101d8070
 * callers: 0x100192b3
 * callees: none
 */

bool __thiscall sub_101D8070(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
