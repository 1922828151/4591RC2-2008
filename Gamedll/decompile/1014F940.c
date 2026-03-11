/*
 * func-name: sub_1014F940
 * func-address: 0x1014f940
 * callers: 0x1000e1d3
 * callees: none
 */

_DWORD *__thiscall sub_1014F940(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
