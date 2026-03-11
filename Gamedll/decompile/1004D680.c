/*
 * func-name: sub_1004D680
 * func-address: 0x1004d680
 * callers: 0x100035bc
 * callees: 0x1000a164
 */

int __cdecl sub_1004D680(int a1, int a2, int a3)
{
  sub_1000A164(a1, a2, a3);
  return a3 + 56 * ((a2 - a1) / 56);
}
