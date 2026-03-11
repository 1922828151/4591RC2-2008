/*
 * func-name: sub_1001EAB0
 * func-address: 0x1001eab0
 * callers: 0x100216e0, 0x10021730, 0x10025190
 * callees: 0x1001c890
 */

int __cdecl sub_1001EAB0(int a1, int a2, int a3)
{
  sub_1001C890(a1, a2, a3);
  return a3 + 40 * ((a2 - a1) / 40);
}
