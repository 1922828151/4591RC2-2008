/*
 * func-name: sub_1007CE60
 * func-address: 0x1007ce60
 * callers: 0x1000c81f
 * callees: none
 */

_DWORD *__thiscall sub_1007CE60(int *this, _DWORD *a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  unsigned int v5; // esi
  _DWORD *result; // eax

  v3 = this[1];
  v4 = *this;
  if ( !*this )
    _invalid_parameter_noinfo();
  v5 = -48 * a3 + v3;
  if ( v5 > *(_DWORD *)(v4 + 8) || v5 < *(_DWORD *)(v4 + 4) )
    _invalid_parameter_noinfo();
  result = a2;
  *a2 = v4;
  a2[1] = v5;
  return result;
}
