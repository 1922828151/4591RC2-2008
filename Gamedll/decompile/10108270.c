/*
 * func-name: sub_10108270
 * func-address: 0x10108270
 * callers: 0x1000bd3e
 * callees: none
 */

_DWORD *__thiscall sub_10108270(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
