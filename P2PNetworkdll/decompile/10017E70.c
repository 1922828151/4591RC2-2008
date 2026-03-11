/*
 * func-name: sub_10017E70
 * func-address: 0x10017e70
 * callers: none
 * callees: none
 */

_DWORD *__cdecl sub_10017E70(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *result; // eax

  for ( result = a2; *a2 != a3; ++*a2 )
  {
    if ( *a4 == a5 )
      break;
    *(_WORD *)*a4 = *(unsigned __int8 *)*a2;
    *a4 += 2;
  }
  return result;
}
