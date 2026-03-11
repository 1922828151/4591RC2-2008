/*
 * func-name: sub_1012A3B0
 * func-address: 0x1012a3b0
 * callers: 0x10011c02
 * callees: none
 */

_DWORD *__cdecl sub_1012A3B0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; result += 2 )
  {
    if ( result )
    {
      *result = *v3;
      result[1] = v3[1];
    }
    v3 += 2;
  }
  return result;
}
