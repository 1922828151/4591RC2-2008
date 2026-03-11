/*
 * func-name: sub_102AFA00
 * func-address: 0x102afa00
 * callers: 0x10005aa6
 * callees: none
 */

_DWORD *__thiscall sub_102AFA00(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
