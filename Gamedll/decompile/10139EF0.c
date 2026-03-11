/*
 * func-name: sub_10139EF0
 * func-address: 0x10139ef0
 * callers: 0x1000c0c7
 * callees: none
 */

_DWORD *__thiscall sub_10139EF0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
