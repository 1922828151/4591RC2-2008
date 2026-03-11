/*
 * func-name: sub_1017A9D0
 * func-address: 0x1017a9d0
 * callers: none
 * callees: none
 */

int __cdecl sub_1017A9D0(char *Str, char *SubStr)
{
  int v2; // esi
  char *i; // eax

  v2 = 0;
  for ( i = strstr(Str, SubStr); i; i = strstr(i + 1, SubStr) )
    ++v2;
  return v2;
}
