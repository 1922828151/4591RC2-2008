/*
 * func-name: sub_101004A0
 * func-address: 0x101004a0
 * callers: 0x1000218f
 * callees: none
 */

_DWORD *__thiscall sub_101004A0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
