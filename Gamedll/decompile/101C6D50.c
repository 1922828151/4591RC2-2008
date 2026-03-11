/*
 * func-name: sub_101C6D50
 * func-address: 0x101c6d50
 * callers: 0x1000d53f
 * callees: none
 */

_DWORD *__thiscall sub_101C6D50(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
