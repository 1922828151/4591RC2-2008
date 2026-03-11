/*
 * func-name: sub_1006CFF0
 * func-address: 0x1006cff0
 * callers: 0x1000e4ad
 * callees: none
 */

_DWORD *__thiscall sub_1006CFF0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
