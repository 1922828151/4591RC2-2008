/*
 * func-name: sub_100F5AA0
 * func-address: 0x100f5aa0
 * callers: 0x100f5dc0
 * callees: none
 */

int __cdecl sub_100F5AA0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 68 * ((a2 - a1) / 68);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x44u) )
    i -= 68;
  return result;
}
