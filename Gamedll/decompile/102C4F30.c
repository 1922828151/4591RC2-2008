/*
 * func-name: sub_102C4F30
 * func-address: 0x102c4f30
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C4F30(_DWORD *this, _DWORD *a2)
{
  *this = 0;
  this[1] = a2[1];
  this[2] = a2[2];
  if ( !*a2 )
    _invalid_parameter_noinfo();
  *this = *a2;
  return this;
}
