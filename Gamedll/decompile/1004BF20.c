/*
 * func-name: sub_1004BF20
 * func-address: 0x1004bf20
 * callers: 0x10003297
 * callees: none
 */

_DWORD *__thiscall sub_1004BF20(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
