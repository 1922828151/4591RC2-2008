/*
 * func-name: sub_1026E890
 * func-address: 0x1026e890
 * callers: 0x10012fa3
 * callees: none
 */

int __cdecl sub_1026E890(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 28 )
    std::wstring::operator=(a3 - a1 + i, i);
  return a3 + 28 * ((a2 - a1) / 28);
}
