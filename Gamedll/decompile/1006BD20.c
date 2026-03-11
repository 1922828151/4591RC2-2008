/*
 * func-name: sub_1006BD20
 * func-address: 0x1006bd20
 * callers: 0x1001a4e7
 * callees: none
 */

bool __thiscall sub_1006BD20(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
