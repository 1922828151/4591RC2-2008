/*
 * func-name: sub_100851C0
 * func-address: 0x100851c0
 * callers: 0x1000a9f7
 * callees: none
 */

int __cdecl sub_100851C0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx
  char *v5; // edi
  const void *v6; // esi

  result = a3 + 96 * ((a2 - a1) / 96);
  for ( i = a1; i != a2; i += 96 )
  {
    v5 = &i[a3 - (_DWORD)a1];
    v6 = i;
    qmemcpy(v5, v6, 0x60u);
  }
  return result;
}
