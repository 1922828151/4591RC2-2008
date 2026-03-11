/*
 * func-name: sub_1025AD30
 * func-address: 0x1025ad30
 * callers: 0x10001767
 * callees: 0x1000e854
 */

int __cdecl sub_1025AD30(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 80 )
    sub_1000E854(i);
  return a3 + 80 * ((a2 - a1) / 80);
}
