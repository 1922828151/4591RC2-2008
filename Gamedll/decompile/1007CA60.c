/*
 * func-name: sub_1007CA60
 * func-address: 0x1007ca60
 * callers: 0x1001205d
 * callees: none
 */

_DWORD *__thiscall sub_1007CA60(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] >= *(_DWORD *)(*this + 8) )
    _invalid_parameter_noinfo();
  this[1] += 48;
  return this;
}
