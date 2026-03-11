/*
 * func-name: sub_100ED5F0
 * func-address: 0x100ed5f0
 * callers: 0x10013a43
 * callees: none
 */

_DWORD *__thiscall sub_100ED5F0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
