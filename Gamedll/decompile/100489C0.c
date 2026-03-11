/*
 * func-name: sub_100489C0
 * func-address: 0x100489c0
 * callers: 0x1001429a
 * callees: none
 */

_DWORD *__thiscall sub_100489C0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
