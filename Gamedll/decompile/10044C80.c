/*
 * func-name: sub_10044C80
 * func-address: 0x10044c80
 * callers: 0x1000899f
 * callees: none
 */

_DWORD *__thiscall sub_10044C80(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
