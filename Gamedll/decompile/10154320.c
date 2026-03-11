/*
 * func-name: sub_10154320
 * func-address: 0x10154320
 * callers: 0x1000637a
 * callees: none
 */

_DWORD *__cdecl sub_10154320(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax

  for ( result = a2; result != a4; result += 2 )
  {
    *result = *a5;
    result[1] = a5[1];
  }
  return result;
}
