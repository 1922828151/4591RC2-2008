/*
 * func-name: sub_10055890
 * func-address: 0x10055890
 * callers: 0x10011a72
 * callees: 0x10016b58
 */

void __cdecl sub_10055890(char *a1, char *a2)
{
  char *i; // esi
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+4h] [ebp-14h]

  for ( i = a1; i != a2; i += 148 )
  {
    sub_10016B58(v3, v4);
    std::string::~string(i);
  }
}
