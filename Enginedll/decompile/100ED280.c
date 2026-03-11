/*
 * func-name: sub_100ED280
 * func-address: 0x100ed280
 * callers: 0x100ed7c0
 * callees: 0x100ecd30
 */

int __cdecl sub_100ED280(char *a1, char *a2, int a3)
{
  char *i; // esi

  for ( i = a2; i != a1; sub_100ECD30(&i[a3 - (_DWORD)a2], i) )
    i -= 80;
  return a3 - 80 * ((a2 - a1) / 80);
}
