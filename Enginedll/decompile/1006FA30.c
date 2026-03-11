/*
 * func-name: sub_1006FA30
 * func-address: 0x1006fa30
 * callers: 0x10070d30, 0x100d97d0
 * callees: none
 */

void __stdcall sub_1006FA30(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 36 )
    std::wstring::~wstring(i);
}
