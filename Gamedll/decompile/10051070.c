/*
 * func-name: sub_10051070
 * func-address: 0x10051070
 * callers: 0x10012b0c
 * callees: 0x1000bdd4
 */

int __cdecl sub_10051070(int a1, int a2, int a3)
{
  sub_1000BDD4(a1, a2, a3);
  return a3 + ((a2 - a1) >> 6 << 6);
}
