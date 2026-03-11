/*
 * func-name: sub_101E48D0
 * func-address: 0x101e48d0
 * callers: 0x100040b1
 * callees: none
 */

bool __thiscall sub_101E48D0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
