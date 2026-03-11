/*
 * func-name: sub_10020A70
 * func-address: 0x10020a70
 * callers: 0x10026fd0, 0x10026ff0, 0x10027320, 0x1002f310, 0x100e4420, 0x100e5360, 0x100e5d70, 0x100e8310
 * callees: none
 */

int __cdecl sub_10020A70(int a1, int a2)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 96 )
  {
    std::string::~string(i + 52);
    result = std::string::~string(i + 24);
  }
  return result;
}
