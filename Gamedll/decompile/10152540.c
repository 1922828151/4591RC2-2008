/*
 * func-name: sub_10152540
 * func-address: 0x10152540
 * callers: 0x10015339
 * callees: none
 */

_DWORD *__thiscall sub_10152540(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
