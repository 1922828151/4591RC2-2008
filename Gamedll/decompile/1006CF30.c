/*
 * func-name: sub_1006CF30
 * func-address: 0x1006cf30
 * callers: 0x10007eeb
 * callees: none
 */

_DWORD *__thiscall sub_1006CF30(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
