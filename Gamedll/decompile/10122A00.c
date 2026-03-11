/*
 * func-name: sub_10122A00
 * func-address: 0x10122a00
 * callers: 0x1000b906
 * callees: none
 */

_DWORD *__thiscall sub_10122A00(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
