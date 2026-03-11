/*
 * func-name: sub_10049180
 * func-address: 0x10049180
 * callers: 0x1000cd06
 * callees: none
 */

_DWORD *__cdecl sub_10049180(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
