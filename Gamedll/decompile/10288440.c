/*
 * func-name: sub_10288440
 * func-address: 0x10288440
 * callers: 0x1001ac5d
 * callees: none
 */

_DWORD *__cdecl sub_10288440(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 4 )
  {
    *result = *a3;
    result[1] = a3[1];
    result[2] = a3[2];
    result[3] = a3[3];
  }
  return result;
}
