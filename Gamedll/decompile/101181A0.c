/*
 * func-name: sub_101181A0
 * func-address: 0x101181a0
 * callers: 0x1001490c
 * callees: none
 */

int __cdecl sub_101181A0(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; std::string::swap(i + a3 - a2, i) )
    i -= 28;
  return a3 - 28 * ((a2 - a1) / 28);
}
