/*
 * func-name: sub_101229C0
 * func-address: 0x101229c0
 * callers: 0x10004228
 * callees: none
 */

_DWORD *__thiscall sub_101229C0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
