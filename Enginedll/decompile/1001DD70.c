/*
 * func-name: sub_1001DD70
 * func-address: 0x1001dd70
 * callers: 0x10026a30, 0x1006f440
 * callees: none
 */

int __cdecl sub_1001DD70(char *a1, char *a2, int a3)
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
