/*
 * func-name: sub_10273620
 * func-address: 0x10273620
 * callers: 0x10004b8d
 * callees: 0x1000e854
 */

int __cdecl sub_10273620(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; sub_1000E854(i) )
    i -= 80;
  return a3 - 80 * ((a2 - a1) / 80);
}
