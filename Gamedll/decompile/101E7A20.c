/*
 * func-name: sub_101E7A20
 * func-address: 0x101e7a20
 * callers: 0x10015cb2
 * callees: none
 */

_DWORD *__thiscall sub_101E7A20(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
