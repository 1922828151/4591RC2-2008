/*
 * func-name: sub_102C5000
 * func-address: 0x102c5000
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C5000(_DWORD *this, int a2, int a3)
{
  *this = 0;
  this[1] = a2;
  this[2] = 0;
  if ( !a3 )
    _invalid_parameter_noinfo();
  *this = a3;
  return this;
}
