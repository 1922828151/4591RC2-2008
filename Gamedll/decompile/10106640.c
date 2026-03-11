/*
 * func-name: sub_10106640
 * func-address: 0x10106640
 * callers: 0x10008648
 * callees: none
 */

bool __thiscall sub_10106640(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
