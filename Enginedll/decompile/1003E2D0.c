/*
 * func-name: sub_1003E2D0
 * func-address: 0x1003e2d0
 * callers: 0x1003e4b0, 0x10062270, 0x100f6bc0
 * callees: none
 */

_DWORD *__cdecl sub_1003E2D0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
