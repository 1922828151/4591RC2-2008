/*
 * func-name: sub_10112180
 * func-address: 0x10112180
 * callers: 0x101157a0
 * callees: 0x10011510
 */

int __cdecl sub_10112180(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 16 )
    result = sub_10011510(i, a3);
  return result;
}
