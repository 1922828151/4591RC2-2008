/*
 * func-name: sub_10237060
 * func-address: 0x10237060
 * callers: 0x1001a46f
 * callees: none
 */

int __cdecl sub_10237060(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 56 )
  {
    std::string::operator=(i, a3);
    result = std::string::operator=(i + 28, a3 + 28);
  }
  return result;
}
