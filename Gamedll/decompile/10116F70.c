/*
 * func-name: sub_10116F70
 * func-address: 0x10116f70
 * callers: 0x1000a27c
 * callees: none
 */

_DWORD *__thiscall sub_10116F70(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
