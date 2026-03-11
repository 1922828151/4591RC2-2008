/*
 * func-name: sub_10273680
 * func-address: 0x10273680
 * callers: 0x10003c29
 * callees: 0x1000e854
 */

int __cdecl sub_10273680(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 80 )
    result = sub_1000E854(a3);
  return result;
}
