/*
 * func-name: sub_100088F0
 * func-address: 0x100088f0
 * callers: 0x100080d0, 0x10009290, 0x1000dbc0
 * callees: none
 */

_DWORD *__userpurge sub_100088F0@<eax>(int a1@<ebx>, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  _DWORD *v6; // ebp
  int v7; // edi
  char *v8; // eax
  char *v9; // ecx
  int v10; // edx

  v6 = a2;
  v7 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a6;
  if ( a4 != a6 )
  {
    v9 = *(char **)(a1 + 8);
    if ( a6 != v9 )
    {
      v10 = a4 - a6;
      do
      {
        *(_DWORD *)&v8[v10] = *(_DWORD *)v8;
        *(_DWORD *)&v8[v10 + 4] = *((_DWORD *)v8 + 1);
        v8 += 8;
      }
      while ( v8 != v9 );
      v6 = a2;
    }
    *(_DWORD *)(a1 + 8) = &a4[8 * ((v9 - a6) >> 3)];
    v7 = a3;
  }
  *v6 = v7;
  v6[1] = a4;
  return v6;
}
