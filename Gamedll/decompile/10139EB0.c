/*
 * func-name: sub_10139EB0
 * func-address: 0x10139eb0
 * callers: 0x10017495
 * callees: none
 */

_DWORD *__thiscall sub_10139EB0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
