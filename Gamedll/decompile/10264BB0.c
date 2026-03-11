/*
 * func-name: sub_10264BB0
 * func-address: 0x10264bb0
 * callers: 0x10008a49
 * callees: none
 */

void __stdcall sub_10264BB0(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 44 )
    std::wstring::~wstring(i);
}
