/*
 * func-name: sub_102C78E0
 * func-address: 0x102c78e0
 * callers: none
 * callees: none
 */

int __cdecl sub_102C78E0(char *Str, char *SubStr)
{
  int v2; // esi
  char *i; // eax

  v2 = 0;
  for ( i = strstr(Str, SubStr); i; i = strstr(i + 1, SubStr) )
    ++v2;
  return v2;
}
