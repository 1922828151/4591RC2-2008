/*
 * func-name: sub_1004BD60
 * func-address: 0x1004bd60
 * callers: 0x10003616
 * callees: none
 */

_DWORD *__thiscall sub_1004BD60(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
