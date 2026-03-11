/*
 * func-name: sub_10116270
 * func-address: 0x10116270
 * callers: 0x101163a0
 * callees: 0x10115c90
 */

int __stdcall sub_10116270(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 60 )
    result = sub_10115C90(i);
  return result;
}
