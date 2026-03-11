/*
 * func-name: sub_1008FB90
 * func-address: 0x1008fb90
 * callers: 0x1008fbe0
 * callees: none
 */

_DWORD *__cdecl sub_1008FB90(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax
  int v5; // esi

  v3 = a2;
  for ( result = a3; v3 != a1; result[5] = v3[5] )
  {
    v5 = *(v3 - 6);
    v3 -= 6;
    *(result - 6) = v5;
    result -= 6;
    result[1] = v3[1];
    result[2] = v3[2];
    result[3] = v3[3];
    result[4] = v3[4];
  }
  return result;
}
