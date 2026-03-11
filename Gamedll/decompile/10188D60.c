/*
 * func-name: sub_10188D60
 * func-address: 0x10188d60
 * callers: 0x100095b6
 * callees: none
 */

void __cdecl sub_10188D60(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 56 )
  {
    std::string::~string(i + 28);
    std::string::~string(i);
  }
}
