/*
 * func-name: sub_10167F70
 * func-address: 0x10167f70
 * callers: 0x10013561
 * callees: none
 */

_DWORD *__thiscall sub_10167F70(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
