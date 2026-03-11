/*
 * func-name: sub_100EA550
 * func-address: 0x100ea550
 * callers: 0x10019d35
 * callees: none
 */

_DWORD *__thiscall sub_100EA550(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
