/*
 * func-name: sub_101B3820
 * func-address: 0x101b3820
 * callers: 0x10007f9f
 * callees: none
 */

_DWORD *__thiscall sub_101B3820(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
