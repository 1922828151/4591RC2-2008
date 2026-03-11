/*
 * func-name: sub_1023E1C0
 * func-address: 0x1023e1c0
 * callers: 0x10001e51
 * callees: none
 */

int __cdecl sub_1023E1C0(int a1, int a2, int a3)
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
