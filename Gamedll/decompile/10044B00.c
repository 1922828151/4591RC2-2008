/*
 * func-name: sub_10044B00
 * func-address: 0x10044b00
 * callers: 0x10010401
 * callees: none
 */

_DWORD *__thiscall sub_10044B00(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
