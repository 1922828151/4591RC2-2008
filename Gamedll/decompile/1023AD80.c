/*
 * func-name: sub_1023AD80
 * func-address: 0x1023ad80
 * callers: 0x1000fa60
 * callees: 0x1001a820
 */

int __cdecl sub_1023AD80(int a1, int a2, int a3)
{
  sub_1001A820(a1, a2, a3);
  return a3 - 56 * ((a2 - a1) / 56);
}
