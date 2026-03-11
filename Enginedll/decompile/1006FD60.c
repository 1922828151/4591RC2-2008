/*
 * func-name: sub_1006FD60
 * func-address: 0x1006fd60
 * callers: 0x10070f20, 0x100d3260
 * callees: none
 */

void __stdcall sub_1006FD60(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 44 )
    std::wstring::~wstring((void *)(i + 12));
}
