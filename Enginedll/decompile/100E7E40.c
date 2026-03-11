/*
 * func-name: sub_100E7E40
 * func-address: 0x100e7e40
 * callers: 0x100e8600, 0x10127000
 * callees: 0x100e7bf0
 */

int __cdecl sub_100E7E40(int a1, int a2, int a3)
{
  sub_100E7BF0(a1, a2, a3);
  return a3 - 32 * ((a2 - a1) >> 5);
}
