/*
 * func-name: sub_102C5630
 * func-address: 0x102c5630
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C5630(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  bool v4; // cc

  v3 = this[1];
  v4 = v3 <= this[2];
  *a2 = 0;
  if ( !v4 )
    _invalid_parameter_noinfo();
  *a2 = this;
  a2[1] = v3;
  return a2;
}
