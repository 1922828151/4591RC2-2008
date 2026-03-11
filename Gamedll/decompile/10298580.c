/*
 * func-name: sub_10298580
 * func-address: 0x10298580
 * callers: 0x10002eff
 * callees: none
 */

void __cdecl sub_10298580(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 76 )
  {
    std::wstring::~wstring(i + 28);
    std::wstring::~wstring(i);
  }
}
