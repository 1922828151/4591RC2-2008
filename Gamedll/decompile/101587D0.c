/*
 * func-name: sub_101587D0
 * func-address: 0x101587d0
 * callers: 0x10015dca
 * callees: none
 */

_DWORD *__cdecl sub_101587D0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
