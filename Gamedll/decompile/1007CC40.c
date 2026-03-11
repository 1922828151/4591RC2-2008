/*
 * func-name: sub_1007CC40
 * func-address: 0x1007cc40
 * callers: 0x100196dc
 * callees: none
 */

int __cdecl sub_1007CC40(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx
  char *v5; // edi
  const void *v6; // esi

  result = a3 + 48 * ((a2 - a1) / 48);
  for ( i = a1; i != a2; i += 48 )
  {
    v5 = &i[a3 - (_DWORD)a1];
    v6 = i;
    qmemcpy(v5, v6, 0x30u);
  }
  return result;
}
