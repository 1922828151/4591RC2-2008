/*
 * func-name: sub_100E03E0
 * func-address: 0x100e03e0
 * callers: 0x100e0470
 * callees: none
 */

int __cdecl sub_100E03E0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 72 * ((a2 - a1) / 72);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x48u) )
    i -= 72;
  return result;
}
