/*
 * func-name: sub_10100EF0
 * func-address: 0x10100ef0
 * callers: 0x1000768f
 * callees: none
 */

_DWORD *__thiscall sub_10100EF0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
