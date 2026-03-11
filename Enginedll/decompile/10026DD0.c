/*
 * func-name: sub_10026DD0
 * func-address: 0x10026dd0
 * callers: 0x1002ee00
 * callees: none
 */

int __stdcall sub_10026DD0(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 52 )
    result = std::string::~string(i + 4);
  return result;
}
