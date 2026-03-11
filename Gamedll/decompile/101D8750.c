/*
 * func-name: sub_101D8750
 * func-address: 0x101d8750
 * callers: 0x1000c21b
 * callees: none
 */

_DWORD *__thiscall sub_101D8750(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
