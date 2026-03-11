/*
 * func-name: sub_10044C40
 * func-address: 0x10044c40
 * callers: 0x10019f74
 * callees: none
 */

_DWORD *__thiscall sub_10044C40(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
