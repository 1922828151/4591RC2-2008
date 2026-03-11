/*
 * func-name: sub_101D9320
 * func-address: 0x101d9320
 * callers: 0x100145b5
 * callees: none
 */

_DWORD *__thiscall sub_101D9320(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
