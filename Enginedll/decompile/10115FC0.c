/*
 * func-name: sub_10115FC0
 * func-address: 0x10115fc0
 * callers: 0x101162a0
 * callees: 0x10115f20
 */

int __cdecl sub_10115FC0(int a1, int a2, int a3)
{
  sub_10115F20(a1, a2, a3);
  return a3 + 60 * ((a2 - a1) / 60);
}
