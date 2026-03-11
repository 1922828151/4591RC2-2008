/*
 * func-name: sub_102A8DC0
 * func-address: 0x102a8dc0
 * callers: 0x10009962
 * callees: none
 */

_DWORD *__thiscall sub_102A8DC0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
