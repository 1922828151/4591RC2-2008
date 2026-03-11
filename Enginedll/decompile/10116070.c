/*
 * func-name: sub_10116070
 * func-address: 0x10116070
 * callers: 0x10116170
 * callees: 0x10115f70
 */

int __cdecl sub_10116070(int a1, int a2, int a3)
{
  sub_10115F70(a1, a2, a3);
  return a3 - 60 * ((a2 - a1) / 60);
}
