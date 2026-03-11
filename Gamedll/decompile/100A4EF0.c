/*
 * func-name: sub_100A4EF0
 * func-address: 0x100a4ef0
 * callers: 0x1001666c
 * callees: none
 */

void __cdecl sub_100A4EF0(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 64 )
  {
    std::string::~string(i + 28);
    std::string::~string(i);
  }
}
