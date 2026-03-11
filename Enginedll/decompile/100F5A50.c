/*
 * func-name: sub_100F5A50
 * func-address: 0x100f5a50
 * callers: 0x100f5d90
 * callees: none
 */

int __cdecl sub_100F5A50(char *a1, char *a2, int a3)
{
  char *v3; // ecx
  int result; // eax
  int v5; // edx
  int v6; // edi

  v3 = a2;
  result = a3 - 16 * ((a2 - a1) >> 4);
  if ( a1 != a2 )
  {
    v5 = a3 - (_DWORD)a2;
    do
    {
      v6 = *((_DWORD *)v3 - 4);
      v3 -= 16;
      *(_DWORD *)&v3[v5] = v6;
      *(_DWORD *)&v3[v5 + 4] = *((_DWORD *)v3 + 1);
      *(_DWORD *)&v3[v5 + 8] = *((_DWORD *)v3 + 2);
      *(_DWORD *)&v3[v5 + 12] = *((_DWORD *)v3 + 3);
    }
    while ( v3 != a1 );
  }
  return result;
}
