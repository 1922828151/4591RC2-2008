/*
 * func-name: sub_101B4230
 * func-address: 0x101b4230
 * callers: 0x1001443e
 * callees: none
 */

_DWORD *__thiscall sub_101B4230(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
