/*
 * func-name: sub_100E7C80
 * func-address: 0x100e7c80
 * callers: 0x100e8310
 * callees: 0x1001b4d0
 */

_DWORD *__cdecl sub_100E7C80(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 24 )
    result = sub_1001B4D0(i, a3);
  return result;
}
