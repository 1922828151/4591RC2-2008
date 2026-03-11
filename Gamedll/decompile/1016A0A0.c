/*
 * func-name: sub_1016A0A0
 * func-address: 0x1016a0a0
 * callers: 0x1000489f
 * callees: none
 */

_DWORD *__thiscall sub_1016A0A0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
