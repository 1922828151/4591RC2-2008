/*
 * func-name: sub_10003880
 * func-address: 0x10003880
 * callers: 0x100039c0
 * callees: none
 */

int __cdecl sub_10003880(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; std::string::swap(i + a3 - a2, i) )
    i -= 28;
  return a3 - 28 * ((a2 - a1) / 28);
}
