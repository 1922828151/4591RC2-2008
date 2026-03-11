/*
 * func-name: sub_100F6480
 * func-address: 0x100f6480
 * callers: 0x1001878c
 * callees: none
 */

_DWORD *__thiscall sub_100F6480(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
