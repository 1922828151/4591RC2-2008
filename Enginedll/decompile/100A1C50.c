/*
 * func-name: sub_100A1C50
 * func-address: 0x100a1c50
 * callers: 0x10022540, 0x100a1e60, 0x100a2120, 0x100d14d0, 0x100f6900
 * callees: none
 */

_DWORD *__cdecl sub_100A1C50(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
