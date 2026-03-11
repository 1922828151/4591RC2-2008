/*
 * func-name: sub_101EBF70
 * func-address: 0x101ebf70
 * callers: 0x10017530
 * callees: none
 */

void __stdcall sub_101EBF70(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 28 )
    std::wstring::~wstring(i);
}
