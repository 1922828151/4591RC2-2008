/*
 * func-name: sub_10078560
 * func-address: 0x10078560
 * callers: 0x10020450, 0x10023a00, 0x10025b10, 0x10077b70
 * callees: none
 */

int __cdecl sub_10078560(char *a1, char *a2, int a3)
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
