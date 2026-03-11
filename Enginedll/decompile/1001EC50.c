/*
 * func-name: sub_1001EC50
 * func-address: 0x1001ec50
 * callers: 0x10027390, 0x1002f1c0, 0x1002f4a0
 * callees: 0x1001ca30
 */

int __cdecl sub_1001EC50(int a1, int a2, int a3)
{
  sub_1001CA30(a1, a2, a3);
  return a3 + 32 * ((a2 - a1) >> 5);
}
