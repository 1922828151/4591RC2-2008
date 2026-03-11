/*
 * func-name: sub_1000C900
 * func-address: 0x1000c900
 * callers: 0x100136b0
 * callees: none
 */

_DWORD *__thiscall sub_1000C900(_DWORD *this, _DWORD *a2)
{
  *this = 0;
  this[1] = a2[1];
  this[2] = a2[2];
  if ( !*a2 )
    invalid_parameter_noinfo();
  *this = *a2;
  return this;
}
