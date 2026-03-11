/*
 * func-name: sub_1009D380
 * func-address: 0x1009d380
 * callers: 0x1000b9fb
 * callees: none
 */

int __cdecl sub_1009D380(char *a1, char *a2, int a3)
{
  char *v3; // edx
  int result; // eax
  char *v5; // edi
  const void *v6; // esi

  v3 = a1;
  result = a3 + ((a2 - a1) >> 6 << 6);
  while ( v3 != a2 )
  {
    v5 = &v3[a3 - (_DWORD)a1];
    v6 = v3;
    v3 += 64;
    qmemcpy(v5, v6, 0x40u);
  }
  return result;
}
