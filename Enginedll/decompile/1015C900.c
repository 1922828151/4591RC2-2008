/*
 * func-name: sub_1015C900
 * func-address: 0x1015c900
 * callers: 0x1015c210
 * callees: none
 */

int __thiscall sub_1015C900(_DWORD *this)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( this[1] >= *(_DWORD *)(*this + 8) )
    invalid_parameter_noinfo();
  return this[1];
}
