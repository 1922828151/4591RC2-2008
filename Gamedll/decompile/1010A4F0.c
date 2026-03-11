/*
 * func-name: sub_1010A4F0
 * func-address: 0x1010a4f0
 * callers: 0x1001186f
 * callees: none
 */

_DWORD *__thiscall sub_1010A4F0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // ebx
  bool v4; // cc

  v3 = this[2];
  v4 = this[1] <= v3;
  *a2 = 0;
  if ( !v4 )
    _invalid_parameter_noinfo();
  *a2 = this;
  a2[1] = v3;
  return a2;
}
