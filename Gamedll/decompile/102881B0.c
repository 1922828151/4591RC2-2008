/*
 * func-name: sub_102881B0
 * func-address: 0x102881b0
 * callers: 0x1000f998
 * callees: none
 */

int __cdecl sub_102881B0(char *a1, char *a2, int a3)
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
