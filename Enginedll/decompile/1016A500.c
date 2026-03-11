/*
 * func-name: sub_1016A500
 * func-address: 0x1016a500
 * callers: 0x10162160
 * callees: none
 */

_DWORD *__cdecl sub_1016A500(_DWORD *a1, int a2, int *a3, int a4, int *a5, _WORD *a6)
{
  _DWORD *result; // eax

  while ( a3 != a5 && (*((_WORD *)a3 + 4) != *a6 || *((_WORD *)a3 + 5) != a6[1] || *((_WORD *)a3 + 6) != a6[2]) )
    a3 = (int *)*a3;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  return result;
}
