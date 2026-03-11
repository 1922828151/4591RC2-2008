/*
 * func-name: sub_100EA5D0
 * func-address: 0x100ea5d0
 * callers: 0x10003341
 * callees: none
 */

_DWORD *__thiscall sub_100EA5D0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
