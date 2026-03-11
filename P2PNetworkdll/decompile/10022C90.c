/*
 * func-name: sub_10022C90
 * func-address: 0x10022c90
 * callers: 0x1001f170
 * callees: 0x10022f60, 0x10022fe0
 */

int __cdecl sub_10022C90(int a1)
{
  int *v1; // esi
  int *v2; // edi
  int v3; // eax

  v1 = *(int **)(a1 + 16);
  v2 = &v1[*(_DWORD *)(a1 + 20)];
  while ( v1 != v2 )
  {
    while ( 1 )
    {
      v3 = *v1++;
      if ( v3 )
        break;
      if ( v1 == v2 )
        goto LABEL_5;
    }
    if ( *(_DWORD *)(v3 + 16) )
      free(*(void **)(v3 + 20));
  }
LABEL_5:
  sub_10022F60();
  sub_10022F60();
  sub_10022F60();
  sub_10022F60();
  return sub_10022FE0();
}
