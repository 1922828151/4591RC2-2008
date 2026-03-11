/*
 * func-name: sub_10159F60
 * func-address: 0x10159f60
 * callers: 0x1015a570
 * callees: none
 */

int __cdecl sub_10159F60(int a1, int a2, int a3)
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
