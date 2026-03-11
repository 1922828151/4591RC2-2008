/*
 * func-name: sub_101C79F0
 * func-address: 0x101c79f0
 * callers: 0x1001758f
 * callees: none
 */

_DWORD *__cdecl sub_101C79F0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
