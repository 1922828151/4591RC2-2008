/*
 * func-name: sub_10124100
 * func-address: 0x10124100
 * callers: 0x1000a664
 * callees: none
 */

_DWORD *__thiscall sub_10124100(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
