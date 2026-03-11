/*
 * func-name: sub_10055800
 * func-address: 0x10055800
 * callers: 0x1000b82a
 * callees: none
 */

void __cdecl sub_10055800(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 56 )
  {
    std::string::~string(i + 28);
    std::string::~string(i);
  }
}
