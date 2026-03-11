/*
 * func-name: sub_10044AC0
 * func-address: 0x10044ac0
 * callers: 0x100162e3
 * callees: none
 */

_DWORD *__thiscall sub_10044AC0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
