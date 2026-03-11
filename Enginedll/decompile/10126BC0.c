/*
 * func-name: sub_10126BC0
 * func-address: 0x10126bc0
 * callers: 0x10125020, 0x10126d50, 0x10127420
 * callees: none
 */

int __cdecl sub_10126BC0(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 60 )
  {
    std::string::~string(i + 28);
    result = std::string::~string(i);
  }
  return result;
}
