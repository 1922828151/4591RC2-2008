/*
 * func-name: sub_1004BEA0
 * func-address: 0x1004bea0
 * callers: 0x10013007
 * callees: none
 */

_DWORD *__thiscall sub_1004BEA0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
