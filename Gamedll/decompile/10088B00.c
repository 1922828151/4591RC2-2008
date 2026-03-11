/*
 * func-name: sub_10088B00
 * func-address: 0x10088b00
 * callers: 0x1000bdc5
 * callees: none
 */

_DWORD *__cdecl sub_10088B00(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
