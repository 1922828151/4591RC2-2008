/*
 * func-name: sub_10026FA0
 * func-address: 0x10026fa0
 * callers: 0x100124c0, 0x1002f070, 0x10126d70
 * callees: none
 */

int __stdcall sub_10026FA0(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 32 )
    result = std::string::~string(i + 4);
  return result;
}
