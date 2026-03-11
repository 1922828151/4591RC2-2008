/*
 * func-name: sub_102068E0
 * func-address: 0x102068e0
 * callers: 0x10005259
 * callees: 0x1000fe43
 */

int __cdecl sub_102068E0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 16 )
    result = sub_1000FE43(a3);
  return result;
}
