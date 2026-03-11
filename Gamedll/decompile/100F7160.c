/*
 * func-name: sub_100F7160
 * func-address: 0x100f7160
 * callers: 0x10005b82
 * callees: 0x10008e40
 */

int __cdecl sub_100F7160(int a1, int a2, int a3)
{
  sub_10008E40(a1, a2, a3);
  return a3 - 36 * ((a2 - a1) / 36);
}
