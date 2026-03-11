/*
 * func-name: sub_1007CE10
 * func-address: 0x1007ce10
 * callers: 0x10009890
 * callees: none
 */

_DWORD *__thiscall sub_1007CE10(int *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // edi
  _DWORD *result; // eax

  v3 = *this;
  v4 = this[1];
  if ( !*this )
    _invalid_parameter_noinfo();
  v5 = 48 * a3 + v4;
  if ( v5 > *(_DWORD *)(v3 + 8) || v5 < *(_DWORD *)(v3 + 4) )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v5;
  *a2 = v3;
  return result;
}
