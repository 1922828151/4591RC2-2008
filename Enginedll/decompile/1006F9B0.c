/*
 * func-name: sub_1006F9B0
 * func-address: 0x1006f9b0
 * callers: 0x10070bb0, 0x100d2120
 * callees: none
 */

void __stdcall sub_1006F9B0(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 40 )
    std::wstring::~wstring((void *)(i + 12));
}
