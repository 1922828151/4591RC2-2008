/*
 * func-name: sub_100556E0
 * func-address: 0x100556e0
 * callers: 0x10006127
 * callees: none
 */

void __cdecl sub_100556E0(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 56 )
  {
    std::string::~string(i + 28);
    std::string::~string(i);
  }
}
