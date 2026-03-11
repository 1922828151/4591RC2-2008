/*
 * func-name: sub_10059CA0
 * func-address: 0x10059ca0
 * callers: 0x1000bd02
 * callees: none
 */

void __stdcall sub_10059CA0(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 36 )
    std::string::~string((void *)(i + 4));
}
