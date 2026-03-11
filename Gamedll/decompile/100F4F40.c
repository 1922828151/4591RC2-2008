/*
 * func-name: sub_100F4F40
 * func-address: 0x100f4f40
 * callers: 0x10003738
 * callees: none
 */

_DWORD *__thiscall sub_100F4F40(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
