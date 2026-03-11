/*
 * func-name: sub_10051FA0
 * func-address: 0x10051fa0
 * callers: 0x10008f8f
 * callees: none
 */

void __cdecl sub_10051FA0(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 56 )
  {
    std::string::~string(i + 28);
    std::string::~string(i);
  }
}
