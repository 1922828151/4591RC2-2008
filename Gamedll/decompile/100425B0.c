/*
 * func-name: sub_100425B0
 * func-address: 0x100425b0
 * callers: 0x1000263a
 * callees: none
 */

_DWORD *__thiscall sub_100425B0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
