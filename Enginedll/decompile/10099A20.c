/*
 * func-name: sub_10099A20
 * func-address: 0x10099a20
 * callers: 0x10099d80, 0x1009aed0, 0x1009af40, 0x1009b530
 * callees: 0x1009b6e0
 */

int __cdecl sub_10099A20(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 104 )
    sub_1009B6E0(i);
  return a3 + 104 * ((a2 - a1) / 104);
}
