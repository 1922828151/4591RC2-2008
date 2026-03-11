/*
 * func-name: sub_102636A0
 * func-address: 0x102636a0
 * callers: 0x100189fd
 * callees: none
 */

bool __thiscall sub_102636A0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
