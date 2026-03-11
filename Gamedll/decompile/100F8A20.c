/*
 * func-name: sub_100F8A20
 * func-address: 0x100f8a20
 * callers: 0x1000ca45
 * callees: none
 */

_DWORD *__cdecl sub_100F8A20(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax

  for ( result = a2; result != a4; result += 2 )
  {
    *result = *a5;
    result[1] = a5[1];
  }
  return result;
}
