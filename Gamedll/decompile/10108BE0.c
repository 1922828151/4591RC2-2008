/*
 * func-name: sub_10108BE0
 * func-address: 0x10108be0
 * callers: 0x10004c9b
 * callees: none
 */

int __cdecl sub_10108BE0(int a1, int a2, int a3)
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
