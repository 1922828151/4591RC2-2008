/*
 * func-name: sub_100D50E0
 * func-address: 0x100d50e0
 * callers: 0x100d5290
 * callees: 0x10070f20
 */

int __cdecl sub_100D50E0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 20 )
  {
    sub_10070F20(i, a3);
    result = *(_DWORD *)(a3 + 16);
    *(_DWORD *)(i + 16) = result;
  }
  return result;
}
