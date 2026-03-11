/*
 * func-name: sub_1009A650
 * func-address: 0x1009a650
 * callers: 0x1009a680
 * callees: none
 */

void __stdcall sub_1009A650(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 28 )
    std::wstring::~wstring(i);
}
