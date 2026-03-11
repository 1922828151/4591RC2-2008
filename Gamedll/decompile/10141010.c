/*
 * func-name: sub_10141010
 * func-address: 0x10141010
 * callers: 0x10019db7
 * callees: none
 */

_DWORD *__thiscall sub_10141010(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
