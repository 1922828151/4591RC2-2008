/*
 * func-name: sub_101DA5C0
 * func-address: 0x101da5c0
 * callers: 0x1001503c
 * callees: none
 */

void __cdecl sub_101DA5C0(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 84 )
  {
    std::string::~string((void *)(i + 40));
    std::string::~string((void *)(i + 12));
  }
}
