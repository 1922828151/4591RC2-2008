/*
 * func-name: sub_10263730
 * func-address: 0x10263730
 * callers: 0x10001f50
 * callees: none
 */

_DWORD *__thiscall sub_10263730(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
