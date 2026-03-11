/*
 * func-name: sub_100EAA70
 * func-address: 0x100eaa70
 * callers: 0x1000cd42
 * callees: none
 */

_DWORD *__thiscall sub_100EAA70(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
