/*
 * func-name: sub_1001EB10
 * func-address: 0x1001eb10
 * callers: 0x100270b0, 0x1002ee00
 * callees: 0x1001c900
 */

int __cdecl sub_1001EB10(int a1, int a2, int a3)
{
  sub_1001C900(a1, a2, a3);
  return a3 + 52 * ((a2 - a1) / 52);
}
