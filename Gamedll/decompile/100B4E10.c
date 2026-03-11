/*
 * func-name: sub_100B4E10
 * func-address: 0x100b4e10
 * callers: 0x1000843b
 * callees: none
 */

int __cdecl sub_100B4E10(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 96 * ((a2 - a1) / 96);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x60u) )
    i -= 96;
  return result;
}
