/*
 * func-name: sub_1002BEA0
 * func-address: 0x1002bea0
 * callers: 0x1000b014
 * callees: none
 */

void __stdcall sub_1002BEA0(char *a1, char *a2)
{
  char *i; // esi

  for ( i = a1; i != a2; i += 28 )
    std::string::~string(i);
}
