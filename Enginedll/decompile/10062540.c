/*
 * func-name: sub_10062540
 * func-address: 0x10062540
 * callers: 0x10062b80
 * callees: 0x1000d9a0
 */

int __cdecl sub_10062540(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 16 )
    result = sub_1000D9A0(i, a3);
  return result;
}
