/*
 * func-name: sub_102AF140
 * func-address: 0x102af140
 * callers: 0x10010a4b
 * callees: none
 */

bool __thiscall sub_102AF140(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
