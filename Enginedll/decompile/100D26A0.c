/*
 * func-name: sub_100D26A0
 * func-address: 0x100d26a0
 * callers: 0x100d3e00, 0x100d3f80, 0x101586f0, 0x101589f0
 * callees: none
 */

void __stdcall sub_100D26A0(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 36 )
    std::wstring::~wstring((void *)(i + 4));
}
