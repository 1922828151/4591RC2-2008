/*
 * func-name: sub_101E02C0
 * func-address: 0x101e02c0
 * callers: 0x10019f97
 * callees: none
 */

int __cdecl sub_101E02C0(char *a1, char *a2, int a3)
{
  char *v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = a1;
  result = a3 + 8 * ((a2 - a1) >> 3);
  if ( a1 != a2 )
  {
    v5 = a3 - (_DWORD)a1;
    do
    {
      *(_DWORD *)&v3[v5] = *(_DWORD *)v3;
      *(_DWORD *)&v3[v5 + 4] = *((_DWORD *)v3 + 1);
      v3 += 8;
    }
    while ( v3 != a2 );
  }
  return result;
}
