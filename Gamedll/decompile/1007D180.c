/*
 * func-name: sub_1007D180
 * func-address: 0x1007d180
 * callers: 0x10019894
 * callees: none
 */

_DWORD *__thiscall sub_1007D180(_DWORD *this, _DWORD *a2)
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
