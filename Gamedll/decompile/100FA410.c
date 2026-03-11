/*
 * func-name: sub_100FA410
 * func-address: 0x100fa410
 * callers: 0x100047ff
 * callees: none
 */

void __stdcall sub_100FA410(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 36 )
    std::string::~string((void *)(i + 4));
}
