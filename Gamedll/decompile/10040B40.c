/*
 * func-name: sub_10040B40
 * func-address: 0x10040b40
 * callers: 0x100030a3
 * callees: none
 */

bool __thiscall sub_10040B40(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
