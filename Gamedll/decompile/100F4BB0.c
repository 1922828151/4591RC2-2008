/*
 * func-name: sub_100F4BB0
 * func-address: 0x100f4bb0
 * callers: 0x100153ac
 * callees: none
 */

_DWORD *__thiscall sub_100F4BB0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
