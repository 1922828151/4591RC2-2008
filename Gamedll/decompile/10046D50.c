/*
 * func-name: sub_10046D50
 * func-address: 0x10046d50
 * callers: 0x100034f4
 * callees: none
 */

int __cdecl sub_10046D50(char *a1, char *a2, int a3)
{
  char *v3; // ecx
  int result; // eax
  int v5; // edx

  v3 = a1;
  result = a3 + 12 * ((a2 - a1) / 12);
  if ( a1 != a2 )
  {
    v5 = a3 - (_DWORD)a1;
    do
    {
      *(_DWORD *)&v3[v5] = *(_DWORD *)v3;
      *(_DWORD *)&v3[v5 + 4] = *((_DWORD *)v3 + 1);
      *(_DWORD *)&v3[v5 + 8] = *((_DWORD *)v3 + 2);
      v3 += 12;
    }
    while ( v3 != a2 );
  }
  return result;
}
