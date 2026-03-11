/*
 * func-name: sub_101D5550
 * func-address: 0x101d5550
 * callers: 0x10004e0d
 * callees: none
 */

_DWORD *__thiscall sub_101D5550(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
