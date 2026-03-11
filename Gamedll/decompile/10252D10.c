/*
 * func-name: sub_10252D10
 * func-address: 0x10252d10
 * callers: 0x1000d350
 * callees: none
 */

void __stdcall sub_10252D10(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 56 )
    std::wstring::~wstring((void *)(i + 4));
}
