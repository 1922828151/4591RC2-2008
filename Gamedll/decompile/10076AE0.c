/*
 * func-name: sub_10076AE0
 * func-address: 0x10076ae0
 * callers: 0x10012571
 * callees: none
 */

void __stdcall sub_10076AE0(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 36 )
    std::wstring::~wstring((void *)(i + 4));
}
