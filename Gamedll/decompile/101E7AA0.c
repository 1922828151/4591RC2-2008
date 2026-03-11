/*
 * func-name: sub_101E7AA0
 * func-address: 0x101e7aa0
 * callers: 0x10004e9e
 * callees: none
 */

_DWORD *__thiscall sub_101E7AA0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
