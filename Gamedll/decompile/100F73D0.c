/*
 * func-name: sub_100F73D0
 * func-address: 0x100f73d0
 * callers: 0x1000635c
 * callees: none
 */

_DWORD *__thiscall sub_100F73D0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
