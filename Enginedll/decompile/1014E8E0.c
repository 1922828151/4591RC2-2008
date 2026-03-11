/*
 * func-name: sub_1014E8E0
 * func-address: 0x1014e8e0
 * callers: 0x1014a540, 0x1014c730, 0x1014ee70, 0x1014f0d0, 0x1014f2b0
 * callees: none
 */

int __cdecl sub_1014E8E0(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 68 )
  {
    std::string::~string(i + 40);
    result = std::string::~string(i);
  }
  return result;
}
