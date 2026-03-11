/*
 * func-name: sub_1014F3A0
 * func-address: 0x1014f3a0
 * callers: 0x1001168a
 * callees: none
 */

_DWORD *__thiscall sub_1014F3A0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
