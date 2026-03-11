/*
 * func-name: sub_1004D030
 * func-address: 0x1004d030
 * callers: 0x1001955b
 * callees: none
 */

_DWORD *__cdecl sub_1004D030(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
