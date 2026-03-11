/*
 * func-name: sub_10017EB0
 * func-address: 0x10017eb0
 * callers: none
 * callees: none
 */

_DWORD *__cdecl sub_10017EB0(int a1, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *result; // eax

  for ( result = a2; *a2 != a3; *(_BYTE *)(*a4)++ = *(_BYTE *)(*a2)++ )
  {
    if ( *a4 == a5 )
      break;
  }
  return result;
}
