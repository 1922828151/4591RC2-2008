/*
 * func-name: sub_1007CDD0
 * func-address: 0x1007cdd0
 * callers: 0x100018cf
 * callees: none
 */

int __thiscall sub_1007CDD0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] >= *(_DWORD *)(*this + 8) )
    _invalid_parameter_noinfo();
  return this[1];
}
