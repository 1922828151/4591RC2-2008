/*
 * func-name: sub_10163C40
 * func-address: 0x10163c40
 * callers: 0x100045d4
 * callees: none
 */

_DWORD *__thiscall sub_10163C40(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
