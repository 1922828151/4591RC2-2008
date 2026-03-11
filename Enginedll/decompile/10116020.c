/*
 * func-name: sub_10116020
 * func-address: 0x10116020
 * callers: 0x101163a0
 * callees: 0x101121f0, 0x10115d40
 */

int *__cdecl sub_10116020(int a1, int a2, int a3)
{
  int i; // esi
  int *result; // eax

  for ( i = a1; i != a2; i += 60 )
  {
    std::string::operator=(i, a3);
    sub_10115D40(i + 28, a3 + 28);
    result = sub_101121F0((int *)(i + 44), (int *)(a3 + 44));
  }
  return result;
}
