/*
 * func-name: sub_100A9D80
 * func-address: 0x100a9d80
 * callers: 0x1000ad6c
 * callees: none
 */

_DWORD *__cdecl sub_100A9D80(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 6 )
  {
    *result = *a3;
    result[1] = a3[1];
    result[2] = a3[2];
    result[3] = a3[3];
    result[4] = a3[4];
    result[5] = a3[5];
  }
  return result;
}
