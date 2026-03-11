/*
 * func-name: sub_10218FE0
 * func-address: 0x10218fe0
 * callers: 0x10001e42
 * callees: 0x1000c252
 */

int __cdecl sub_10218FE0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 16 )
    result = sub_1000C252(a3);
  return result;
}
