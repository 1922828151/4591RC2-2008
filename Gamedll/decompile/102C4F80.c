/*
 * func-name: sub_102C4F80
 * func-address: 0x102c4f80
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C4F80(_DWORD *this, unsigned int a2, int a3)
{
  *this = 0;
  if ( !a3 || *(_DWORD *)(a3 + 4) > a2 || a2 > *(_DWORD *)(a3 + 8) )
    _invalid_parameter_noinfo();
  *this = a3;
  this[1] = a2;
  return this;
}
