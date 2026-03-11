/*
 * func-name: sub_100513A0
 * func-address: 0x100513a0
 * callers: 0x10012f1c
 * callees: none
 */

_DWORD *__cdecl sub_100513A0(int a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *result; // eax

  for ( result = a2; result != a4; result += 2 )
  {
    *result = *a5;
    result[1] = a5[1];
  }
  return result;
}
