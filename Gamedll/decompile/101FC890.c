/*
 * func-name: sub_101FC890
 * func-address: 0x101fc890
 * callers: 0x10017657
 * callees: 0x1000d369
 */

int __cdecl sub_101FC890(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 84 )
    result = sub_1000D369(a3);
  return result;
}
