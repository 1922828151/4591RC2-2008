/*
 * func-name: sub_100037F0
 * func-address: 0x100037f0
 * callers: 0x10003b80
 * callees: none
 */

int __cdecl sub_100037F0(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 28 )
    std::string::operator=(a3 - a1 + i, i);
  return a3 + 28 * ((a2 - a1) / 28);
}
