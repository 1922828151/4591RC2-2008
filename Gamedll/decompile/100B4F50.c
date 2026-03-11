/*
 * func-name: sub_100B4F50
 * func-address: 0x100b4f50
 * callers: 0x1000457a
 * callees: none
 */

_DWORD *__cdecl sub_100B4F50(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}
