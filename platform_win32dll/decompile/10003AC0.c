/*
 * func-name: sub_10003AC0
 * func-address: 0x10003ac0
 * callers: 0x10003c00
 * callees: none
 */

int __stdcall sub_10003AC0(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 28 )
    result = std::string::~string(i);
  return result;
}
