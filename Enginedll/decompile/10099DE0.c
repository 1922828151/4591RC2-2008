/*
 * func-name: sub_10099DE0
 * func-address: 0x10099de0
 * callers: 0x10099f00
 * callees: none
 */

int __cdecl sub_10099DE0(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; std::wstring::swap(i + a3 - a2, i) )
    i -= 28;
  return a3 - 28 * ((a2 - a1) / 28);
}
