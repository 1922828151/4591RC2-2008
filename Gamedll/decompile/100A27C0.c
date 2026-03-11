/*
 * func-name: sub_100A27C0
 * func-address: 0x100a27c0
 * callers: 0x10001d3e
 * callees: none
 */

int __cdecl sub_100A27C0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx
  char *v5; // edi
  const void *v6; // esi

  result = a3 + 56 * ((a2 - a1) / 56);
  for ( i = a1; i != a2; i += 56 )
  {
    v5 = &i[a3 - (_DWORD)a1];
    v6 = i;
    qmemcpy(v5, v6, 0x38u);
  }
  return result;
}
