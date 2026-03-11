/*
 * func-name: sub_101081F0
 * func-address: 0x101081f0
 * callers: 0x1000abcd
 * callees: none
 */

_DWORD *__thiscall sub_101081F0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
