/*
 * func-name: sub_1008FC70
 * func-address: 0x1008fc70
 * callers: 0x10090680, 0x10090a60
 * callees: none
 */

_DWORD *__cdecl sub_1008FC70(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 6 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
      result[2] = v3[2];
      result[3] = v3[3];
      result[4] = v3[4];
      result[5] = v3[5];
    }
    v3 += 6;
  }
  return result;
}
