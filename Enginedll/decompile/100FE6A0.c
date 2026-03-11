/*
 * func-name: sub_100FE6A0
 * func-address: 0x100fe6a0
 * callers: 0x100786b0, 0x100d1230, 0x100ff430, 0x10146700, 0x10157d40
 * callees: none
 */

_DWORD *__cdecl sub_100FE6A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 3 )
  {
    *result = *a3;
    result[1] = a3[1];
    result[2] = a3[2];
  }
  return result;
}
