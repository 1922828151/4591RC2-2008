/*
 * func-name: sub_10051250
 * func-address: 0x10051250
 * callers: 0x100194f2
 * callees: none
 */

_DWORD *__cdecl sub_10051250(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax

  for ( result = a2; result != a4; result += 2 )
  {
    *result = *a5;
    result[1] = a5[1];
  }
  return result;
}
