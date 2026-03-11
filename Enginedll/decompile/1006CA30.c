/*
 * func-name: sub_1006CA30
 * func-address: 0x1006ca30
 * callers: 0x100268d0, 0x100521e0, 0x10052250, 0x10052860, 0x1006f570, 0x100d1cc0, 0x101482d0
 * callees: none
 */

int __cdecl sub_1006CA30(char *a1, char *a2, int a3)
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
