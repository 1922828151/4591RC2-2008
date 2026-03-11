/*
 * func-name: sub_100CEF00
 * func-address: 0x100cef00
 * callers: 0x100d29b0
 * callees: 0x100ceb10
 */

int __cdecl sub_100CEF00(int a1, int a2, int (__cdecl *a3)(_DWORD, int))
{
  int result; // eax
  int i; // esi
  int v5; // eax

  result = ((a2 - a1) >> 2) - ((a2 - a1) >> 31);
  for ( i = ((a2 - a1) >> 2) / 2; i > 0; result = sub_100CEB10(a1, i, (a2 - a1) >> 2, v5, a3) )
    v5 = *(_DWORD *)(a1 + 4 * i-- - 4);
  return result;
}
