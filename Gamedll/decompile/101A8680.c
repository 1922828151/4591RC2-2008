/*
 * func-name: sub_101A8680
 * func-address: 0x101a8680
 * callers: 0x1000cc2f
 * callees: none
 */

_DWORD *__cdecl sub_101A8680(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}
