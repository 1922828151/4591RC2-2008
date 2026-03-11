/*
 * func-name: sub_100E0520
 * func-address: 0x100e0520
 * callers: 0x100e07e0
 * callees: 0x100e0440
 */

char *__stdcall sub_100E0520(char *a1, int a2, char *a3)
{
  sub_100E0440(a3, a1, a2, a3);
  return &a1[72 * a2];
}
