/*
 * func-name: sub_101D9660
 * func-address: 0x101d9660
 * callers: 0x10016982
 * callees: none
 */

_DWORD *__cdecl sub_101D9660(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
