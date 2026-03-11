/*
 * func-name: sub_1001DE20
 * func-address: 0x1001de20
 * callers: 0x1001ec20, 0x10027320, 0x1002f310
 * callees: 0x1001b4d0
 */

int __cdecl sub_1001DE20(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 96 )
    sub_1001B4D0((_DWORD *)(i + a3 - a1), i);
  return a3 + 96 * ((a2 - a1) / 96);
}
