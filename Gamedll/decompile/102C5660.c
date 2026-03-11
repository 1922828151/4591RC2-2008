/*
 * func-name: sub_102C5660
 * func-address: 0x102c5660
 * callers: 0x102c6cd0
 * callees: none
 */

_DWORD *__thiscall sub_102C5660(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // ebx

  v3 = this[2];
  if ( v3 > this[3] )
    _invalid_parameter_noinfo();
  *a2 = 0;
  a2[1] = v3;
  a2[2] = 0;
  if ( !this )
    _invalid_parameter_noinfo();
  *a2 = this;
  return a2;
}
