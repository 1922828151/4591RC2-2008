/*
 * func-name: sub_1012B300
 * func-address: 0x1012b300
 * callers: 0x1012b510
 * callees: none
 */

int __cdecl sub_1012B300(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 176 * ((a2 - a1) / 176);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0xB0u) )
    i -= 176;
  return result;
}
