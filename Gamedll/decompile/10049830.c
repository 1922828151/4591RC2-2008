/*
 * func-name: sub_10049830
 * func-address: 0x10049830
 * callers: 0x10004755
 * callees: none
 */

int __thiscall sub_10049830(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  return this[1] + 8;
}
