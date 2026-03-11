/*
 * func-name: sub_100C7CE0
 * func-address: 0x100c7ce0
 * callers: 0x1000177b
 * callees: none
 */

int __cdecl sub_100C7CE0(char *a1, char *a2, int a3)
{
  int result; // eax
  char *i; // edx
  char *v5; // edi
  const void *v6; // esi

  result = a3 + 176 * ((a2 - a1) / 176);
  for ( i = a1; i != a2; i += 176 )
  {
    v5 = &i[a3 - (_DWORD)a1];
    v6 = i;
    qmemcpy(v5, v6, 0xB0u);
  }
  return result;
}
