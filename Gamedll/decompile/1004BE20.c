/*
 * func-name: sub_1004BE20
 * func-address: 0x1004be20
 * callers: 0x1000bc17
 * callees: none
 */

_DWORD *__thiscall sub_1004BE20(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
