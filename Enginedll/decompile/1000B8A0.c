/*
 * func-name: sub_1000B8A0
 * func-address: 0x1000b8a0
 * callers: 0x1000c590
 * callees: 0x1000a320
 */

int __cdecl sub_1000B8A0(int a1, int a2, int a3)
{
  sub_1000A320(a1, a2, a3);
  return a3 - 96 * ((a2 - a1) / 96);
}
