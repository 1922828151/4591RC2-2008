/*
 * func-name: sub_1010AE00
 * func-address: 0x1010ae00
 * callers: 0x100069c9
 * callees: none
 */

void __cdecl sub_1010AE00(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 56 )
  {
    std::string::~string(i + 28);
    std::string::~string(i);
  }
}
