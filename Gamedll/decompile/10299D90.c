/*
 * func-name: sub_10299D90
 * func-address: 0x10299d90
 * callers: 0x1000e45d
 * callees: 0x100148e4
 */

int __cdecl sub_10299D90(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 128 )
    result = sub_100148E4(a3);
  return result;
}
