/*
 * func-name: sub_1004EF40
 * func-address: 0x1004ef40
 * callers: 0x100042dc
 * callees: none
 */

_DWORD *__cdecl sub_1004EF40(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
