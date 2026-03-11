/*
 * func-name: sub_10050030
 * func-address: 0x10050030
 * callers: 0x100028c4
 * callees: none
 */

_DWORD *__thiscall sub_10050030(_DWORD *this, _DWORD *a2)
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
