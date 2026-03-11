/*
 * func-name: sub_10141420
 * func-address: 0x10141420
 * callers: 0x10001ad2
 * callees: none
 */

_DWORD *__thiscall sub_10141420(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
