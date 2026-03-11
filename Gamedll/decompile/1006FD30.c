/*
 * func-name: sub_1006FD30
 * func-address: 0x1006fd30
 * callers: 0x100023d3
 * callees: none
 */

_DWORD *__thiscall sub_1006FD30(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
