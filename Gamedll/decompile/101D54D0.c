/*
 * func-name: sub_101D54D0
 * func-address: 0x101d54d0
 * callers: 0x10009caf
 * callees: none
 */

_DWORD *__thiscall sub_101D54D0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
