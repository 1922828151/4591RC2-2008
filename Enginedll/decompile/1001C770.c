/*
 * func-name: sub_1001C770
 * func-address: 0x1001c770
 * callers: 0x1001ddb0, 0x100207d0, 0x10026b60
 * callees: none
 */

int __cdecl sub_1001C770(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx
  char *v5; // edi
  const void *v6; // esi

  result = a3 + 72 * ((a2 - a1) / 72);
  for ( i = a1; i != a2; i += 72 )
  {
    v5 = &i[a3 - (_DWORD)a1];
    v6 = i;
    qmemcpy(v5, v6, 0x48u);
  }
  return result;
}
