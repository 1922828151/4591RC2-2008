/*
 * func-name: sub_10151990
 * func-address: 0x10151990
 * callers: 0x100055b5
 * callees: none
 */

_DWORD *__thiscall sub_10151990(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
