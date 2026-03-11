/*
 * func-name: sub_1006CFB0
 * func-address: 0x1006cfb0
 * callers: 0x10011f22
 * callees: none
 */

_DWORD *__thiscall sub_1006CFB0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
