/*
 * func-name: sub_100A2840
 * func-address: 0x100a2840
 * callers: 0x1000ab46
 * callees: none
 */

int __cdecl sub_100A2840(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx
  char *v5; // edi
  const void *v6; // esi

  result = a3 + 28 * ((a2 - a1) / 28);
  for ( i = a1; i != a2; i += 28 )
  {
    v5 = &i[a3 - (_DWORD)a1];
    v6 = i;
    qmemcpy(v5, v6, 0x1Cu);
  }
  return result;
}
