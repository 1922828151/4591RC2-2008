/*
 * func-name: sub_101D9360
 * func-address: 0x101d9360
 * callers: 0x10002af9
 * callees: none
 */

_DWORD *__thiscall sub_101D9360(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
