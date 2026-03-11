/*
 * func-name: sub_1007B680
 * func-address: 0x1007b680
 * callers: 0x1007b760
 * callees: none
 */

int __cdecl sub_1007B680(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 92 * ((a2 - a1) / 92);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x5Cu) )
    i -= 92;
  return result;
}
