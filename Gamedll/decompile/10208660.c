/*
 * func-name: sub_10208660
 * func-address: 0x10208660
 * callers: 0x10001d25
 * callees: none
 */

_DWORD *__thiscall sub_10208660(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
