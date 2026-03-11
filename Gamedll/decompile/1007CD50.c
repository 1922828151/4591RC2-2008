/*
 * func-name: sub_1007CD50
 * func-address: 0x1007cd50
 * callers: 0x1000377e
 * callees: none
 */

int __cdecl sub_1007CD50(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 48 * ((a2 - a1) / 48);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x30u) )
    i -= 48;
  return result;
}
