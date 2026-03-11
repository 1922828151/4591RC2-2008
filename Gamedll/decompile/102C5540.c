/*
 * func-name: sub_102C5540
 * func-address: 0x102c5540
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C5540(_DWORD *this, _DWORD *a2)
{
  bool v3; // zf
  int v4; // eax
  int v5; // ecx

  v3 = *this == 0;
  v4 = this[1];
  v5 = this[2];
  *a2 = 0;
  a2[1] = v4;
  a2[2] = v5;
  if ( v3 )
    _invalid_parameter_noinfo();
  *a2 = *this;
  return a2;
}
