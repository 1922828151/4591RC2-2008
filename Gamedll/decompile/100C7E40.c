/*
 * func-name: sub_100C7E40
 * func-address: 0x100c7e40
 * callers: 0x10001b3b
 * callees: none
 */

int __cdecl sub_100C7E40(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 28 * ((a2 - a1) / 28);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x1Cu) )
    i -= 28;
  return result;
}
