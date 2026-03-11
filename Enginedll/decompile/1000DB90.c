/*
 * func-name: sub_1000DB90
 * func-address: 0x1000db90
 * callers: 0x10012f30, 0x100640a0
 * callees: 0x1017a0b0
 */

int __stdcall sub_1000DB90(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 140 )
    result = sub_1017A0B0(i + 100);
  return result;
}
