/*
 * func-name: sub_10052210
 * func-address: 0x10052210
 * callers: 0x10022a90, 0x100523a0, 0x1006e8b0, 0x100786b0, 0x100d0620, 0x100d1230, 0x100ff430, 0x101466d0, 0x10146700, 0x10157d40
 * callees: none
 */

_DWORD *__cdecl sub_10052210(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 3 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
      result[2] = v3[2];
    }
    v3 += 3;
  }
  return result;
}
