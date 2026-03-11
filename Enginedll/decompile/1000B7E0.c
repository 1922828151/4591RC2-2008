/*
 * func-name: sub_1000B7E0
 * func-address: 0x1000b7e0
 * callers: 0x1000b950, 0x1000dc10, 0x10011510, 0x100246c0
 * callees: none
 */

int __cdecl sub_1000B7E0(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 28 )
    std::string::operator=(a3 - a1 + i, i);
  return a3 + 28 * ((a2 - a1) / 28);
}
