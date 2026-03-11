/*
 * func-name: sub_10055050
 * func-address: 0x10055050
 * callers: 0x1000eb6f
 * callees: none
 */

void __cdecl sub_10055050(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 64 )
  {
    std::string::~string(i + 36);
    std::string::~string(i);
  }
}
