/*
 * func-name: sub_100EC9A0
 * func-address: 0x100ec9a0
 * callers: 0x1012b4e0
 * callees: none
 */

int __cdecl sub_100EC9A0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx

  result = a3 - 56 * ((a2 - a1) / 56);
  for ( i = a2; i != a1; qmemcpy(&i[a3 - (_DWORD)a2], i, 0x38u) )
    i -= 56;
  return result;
}
