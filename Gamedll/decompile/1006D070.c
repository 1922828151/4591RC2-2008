/*
 * func-name: sub_1006D070
 * func-address: 0x1006d070
 * callers: 0x10003ad0
 * callees: none
 */

_DWORD *__thiscall sub_1006D070(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
