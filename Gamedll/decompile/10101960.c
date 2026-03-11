/*
 * func-name: sub_10101960
 * func-address: 0x10101960
 * callers: 0x10007720
 * callees: none
 */

_DWORD *__cdecl sub_10101960(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
