/*
 * func-name: sub_101FE540
 * func-address: 0x101fe540
 * callers: 0x1000cf95
 * callees: none
 */

void __stdcall sub_101FE540(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 84 )
    std::string::~string((void *)(i + 4));
}
