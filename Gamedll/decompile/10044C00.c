/*
 * func-name: sub_10044C00
 * func-address: 0x10044c00
 * callers: 0x1001356b
 * callees: none
 */

_DWORD *__thiscall sub_10044C00(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
