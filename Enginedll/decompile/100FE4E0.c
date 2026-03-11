/*
 * func-name: sub_100FE4E0
 * func-address: 0x100fe4e0
 * callers: 0x100febf0
 * callees: none
 */

int __cdecl sub_100FE4E0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 60 * ((a2 - a1) / 60);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x3Cu) )
    i -= 60;
  return result;
}
