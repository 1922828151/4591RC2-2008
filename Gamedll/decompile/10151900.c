/*
 * func-name: sub_10151900
 * func-address: 0x10151900
 * callers: 0x10002e28
 * callees: none
 */

_DWORD *__thiscall sub_10151900(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
