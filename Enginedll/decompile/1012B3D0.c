/*
 * func-name: sub_1012B3D0
 * func-address: 0x1012b3d0
 * callers: 0x10134090
 * callees: none
 */

_DWORD *__thiscall sub_1012B3D0(int *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned int v5; // edi
  _DWORD *result; // eax

  v3 = *this;
  v4 = this[1];
  if ( !*this )
    invalid_parameter_noinfo();
  v5 = 176 * a3 + v4;
  if ( v5 > *(_DWORD *)(v3 + 8) || v5 < *(_DWORD *)(v3 + 4) )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v5;
  *a2 = v3;
  return result;
}
