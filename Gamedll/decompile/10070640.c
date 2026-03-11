/*
 * func-name: sub_10070640
 * func-address: 0x10070640
 * callers: 0x10001a23
 * callees: none
 */

_DWORD *__cdecl sub_10070640(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
