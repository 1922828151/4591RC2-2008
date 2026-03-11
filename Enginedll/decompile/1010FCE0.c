/*
 * func-name: sub_1010FCE0
 * func-address: 0x1010fce0
 * callers: 0x10110580, 0x101105a0, 0x10110780, 0x101121f0, 0x10115c90
 * callees: none
 */

int __cdecl sub_1010FCE0(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 64 )
  {
    std::string::~string(i + 28);
    result = std::string::~string(i);
  }
  return result;
}
