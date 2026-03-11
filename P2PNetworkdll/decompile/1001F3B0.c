/*
 * func-name: sub_1001F3B0
 * func-address: 0x1001f3b0
 * callers: 0x1001f2a0
 * callees: 0x100234ec, 0x10023bb2
 */

char *__usercall sub_1001F3B0@<eax>(int a1@<eax>, int a2@<esi>)
{
  _BYTE *v2; // ecx
  int v4; // eax
  _BYTE *v5; // edx
  size_t v6; // eax
  signed int v7; // ebx
  void *v8; // edi
  int v9; // eax
  char *result; // eax
  signed int v11; // edi
  char *v12; // ebx
  const void *v13; // eax
  char *v14; // eax

  v2 = *(_BYTE **)(a2 + 20);
  v4 = *(_DWORD *)(a2 + 16);
  if ( a1 > (int)&v2[-v4] )
  {
    v5 = *(_BYTE **)(a2 + 12);
    v6 = v4 - (_DWORD)v5;
    v7 = v6 + a1;
    v8 = *(void **)(a2 + 8);
    if ( v7 <= v2 - (_BYTE *)v8 )
    {
      memmove(v8, v5, v6);
      v9 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 16) += v9 - *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v9;
      return *(char **)(a2 + 16);
    }
    v11 = v2 - v5;
    if ( v2 == v5 )
      v11 = 1024;
    do
      v11 *= 2;
    while ( v11 < v7 );
    result = (char *)malloc(v11);
    v12 = result;
    if ( !result )
    {
      *(_DWORD *)(a2 + 240) = 1;
      return result;
    }
    v13 = *(const void **)(a2 + 12);
    *(_DWORD *)(a2 + 20) = &v12[v11];
    if ( v13 )
    {
      memcpy(v12, v13, *(_DWORD *)(a2 + 16) - (_DWORD)v13);
      free(*(void **)(a2 + 8));
    }
    v14 = &v12[-*(_DWORD *)(a2 + 12)];
    *(_DWORD *)(a2 + 8) = v12;
    *(_DWORD *)(a2 + 16) += v14;
    *(_DWORD *)(a2 + 12) = v12;
  }
  return *(char **)(a2 + 16);
}
