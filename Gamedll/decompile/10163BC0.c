/*
 * func-name: sub_10163BC0
 * func-address: 0x10163bc0
 * callers: 0x1001910a
 * callees: none
 */

_DWORD *__cdecl sub_10163BC0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
