/*
 * func-name: sub_10186C10
 * func-address: 0x10186c10
 * callers: 0x10018dea
 * callees: none
 */

int __cdecl sub_10186C10(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 84 )
  {
    std::string::operator=(i, a3);
    std::string::operator=(i + 28, a3 + 28);
    result = std::string::operator=(i + 56, a3 + 56);
  }
  return result;
}
