/*
 * func-name: sub_101679E0
 * func-address: 0x101679e0
 * callers: 0x10004b97
 * callees: none
 */

_DWORD *__thiscall sub_101679E0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
