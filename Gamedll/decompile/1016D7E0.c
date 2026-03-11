/*
 * func-name: sub_1016D7E0
 * func-address: 0x1016d7e0
 * callers: 0x10011bc1
 * callees: none
 */

int __thiscall sub_1016D7E0(_DWORD *this)
{
  if ( !*this )
    _invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  return this[1] + 8;
}
