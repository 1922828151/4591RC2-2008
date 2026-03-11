/*
 * func-name: sub_100ED590
 * func-address: 0x100ed590
 * callers: 0x100ed940
 * callees: 0x100ecd30
 */

_DWORD *__cdecl sub_100ED590(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 20 )
    result = sub_100ECD30(i, a3);
  return result;
}
