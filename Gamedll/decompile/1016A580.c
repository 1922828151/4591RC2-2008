/*
 * func-name: sub_1016A580
 * func-address: 0x1016a580
 * callers: 0x10017daf
 * callees: none
 */

_DWORD *__thiscall sub_1016A580(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
