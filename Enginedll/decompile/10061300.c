/*
 * func-name: sub_10061300
 * func-address: 0x10061300
 * callers: 0x1001dce0, 0x100204a0, 0x10025c40
 * callees: none
 */

int __cdecl sub_10061300(char *a1, char *a2, int a3)
{
  char *v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = a1;
  result = a3 + 16 * ((a2 - a1) >> 4);
  if ( a1 != a2 )
  {
    v5 = a3 - (_DWORD)a1;
    do
    {
      *(_DWORD *)&v3[v5] = *(_DWORD *)v3;
      *(_DWORD *)&v3[v5 + 4] = *((_DWORD *)v3 + 1);
      *(_DWORD *)&v3[v5 + 8] = *((_DWORD *)v3 + 2);
      *(_DWORD *)&v3[v5 + 12] = *((_DWORD *)v3 + 3);
      v3 += 16;
    }
    while ( v3 != a2 );
  }
  return result;
}
