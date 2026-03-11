/*
 * func-name: sub_1013A490
 * func-address: 0x1013a490
 * callers: 0x1001a4bf
 * callees: none
 */

_DWORD *__cdecl sub_1013A490(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
