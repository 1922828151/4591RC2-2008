/*
 * func-name: sub_101E0310
 * func-address: 0x101e0310
 * callers: 0x10018b42
 * callees: none
 */

_DWORD *__cdecl sub_101E0310(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}
