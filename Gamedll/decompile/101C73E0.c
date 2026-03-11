/*
 * func-name: sub_101C73E0
 * func-address: 0x101c73e0
 * callers: 0x1001137e
 * callees: none
 */

_DWORD *__thiscall sub_101C73E0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
