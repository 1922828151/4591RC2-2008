/*
 * func-name: sub_10063F40
 * func-address: 0x10063f40
 * callers: 0x100640a0
 * callees: 0x1000b680
 */

_DWORD *__cdecl sub_10063F40(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 35 )
    result = sub_1000B680(i, a3);
  return result;
}
