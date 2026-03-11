/*
 * func-name: sub_100AA020
 * func-address: 0x100aa020
 * callers: 0x10019c8b
 * callees: 0x100047a5
 */

int __cdecl sub_100AA020(int a1, int a2, int a3)
{
  sub_100047A5(a1, a2, a3);
  return a3 - 24 * ((a2 - a1) / 24);
}
