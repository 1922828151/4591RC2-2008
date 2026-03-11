/*
 * func-name: sub_10124140
 * func-address: 0x10124140
 * callers: 0x10005574
 * callees: none
 */

_DWORD *__thiscall sub_10124140(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
