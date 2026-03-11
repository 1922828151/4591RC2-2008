/*
 * func-name: sub_101D8710
 * func-address: 0x101d8710
 * callers: 0x1000fb19
 * callees: none
 */

_DWORD *__thiscall sub_101D8710(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
