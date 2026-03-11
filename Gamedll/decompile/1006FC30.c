/*
 * func-name: sub_1006FC30
 * func-address: 0x1006fc30
 * callers: 0x10011347
 * callees: none
 */

_DWORD *__thiscall sub_1006FC30(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
