/*
 * func-name: sub_100F61D0
 * func-address: 0x100f61d0
 * callers: 0x100079a5
 * callees: none
 */

_DWORD *__thiscall sub_100F61D0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
