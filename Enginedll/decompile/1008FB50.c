/*
 * func-name: sub_1008FB50
 * func-address: 0x1008fb50
 * callers: 0x10090a60
 * callees: none
 */

_DWORD *__cdecl sub_1008FB50(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
