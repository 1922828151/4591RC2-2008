/*
 * func-name: sub_100A1C90
 * func-address: 0x100a1c90
 * callers: 0x1001c970
 * callees: none
 */

_DWORD *__cdecl sub_100A1C90(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax
  int v5; // esi

  v3 = a2;
  for ( result = a3; v3 != a1; result[4] = v3[4] )
  {
    v5 = *(v3 - 5);
    v3 -= 5;
    result -= 5;
    *result = v5;
    result[1] = v3[1];
    result[2] = v3[2];
    result[3] = v3[3];
  }
  return result;
}
