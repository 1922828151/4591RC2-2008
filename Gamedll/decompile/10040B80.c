/*
 * func-name: sub_10040B80
 * func-address: 0x10040b80
 * callers: 0x10017ac6
 * callees: none
 */

bool __thiscall sub_10040B80(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
