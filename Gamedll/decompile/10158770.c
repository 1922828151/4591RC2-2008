/*
 * func-name: sub_10158770
 * func-address: 0x10158770
 * callers: 0x100063f7
 * callees: none
 */

_DWORD *__cdecl sub_10158770(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 5 )
  {
    *result = *a3;
    result[1] = a3[1];
    result[2] = a3[2];
    result[3] = a3[3];
    result[4] = a3[4];
  }
  return result;
}
