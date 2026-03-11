/*
 * func-name: sub_10124360
 * func-address: 0x10124360
 * callers: 0x1000fc1d
 * callees: none
 */

int __cdecl sub_10124360(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 16 )
    std::vector<ModelFrame *>::operator=(i + a3 - a1, i);
  return a3 + 16 * ((a2 - a1) >> 4);
}
