/*
 * func-name: sub_101F33F0
 * func-address: 0x101f33f0
 * callers: 0x10008fc1
 * callees: none
 */

void __cdecl sub_101F33F0(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 60 )
  {
    std::string::~string((void *)(i + 32));
    std::string::~string((void *)(i + 4));
  }
}
