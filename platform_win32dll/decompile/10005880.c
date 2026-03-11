/*
 * func-name: sub_10005880
 * func-address: 0x10005880
 * callers: none
 * callees: none
 */

int __cdecl sub_10005880(char *Str, char *SubStr)
{
  int v2; // esi
  char *i; // eax

  v2 = 0;
  for ( i = strstr(Str, SubStr); i; i = strstr(i + 1, SubStr) )
    ++v2;
  return v2;
}
