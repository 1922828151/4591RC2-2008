/*
 * func-name: sub_10139E70
 * func-address: 0x10139e70
 * callers: 0x10019088
 * callees: none
 */

_DWORD *__cdecl sub_10139E70(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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
