/*
 * func-name: sub_1001F170
 * func-address: 0x1001f170
 * callers: 0x10012e40, 0x10013360, 0x1001ef60
 * callees: 0x10022c90, 0x10022fe0
 */

void __cdecl sub_1001F170(char *Block)
{
  int v2; // eax
  void **v3; // ebx
  void *v4; // edi
  void *v5; // ebx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // ebx
  void (__cdecl *v10)(_DWORD); // eax
  void **Blocka; // [esp+14h] [ebp+4h]

  while ( 1 )
  {
    if ( *((_DWORD *)Block + 99) )
      goto LABEL_4;
    v2 = *((_DWORD *)Block + 100);
    if ( !v2 )
      break;
    *((_DWORD *)Block + 99) = v2;
    *((_DWORD *)Block + 100) = 0;
LABEL_4:
    v3 = (void **)*((_DWORD *)Block + 99);
    *((_DWORD *)Block + 99) = *v3;
    Blocka = v3;
    free(v3[6]);
    v4 = v3[8];
    if ( v4 )
    {
      do
      {
        v5 = (void *)*((_DWORD *)v4 + 1);
        free(*((void **)v4 + 4));
        free(v4);
        v4 = v5;
      }
      while ( v5 );
      v3 = Blocka;
    }
    free(v3);
  }
  v6 = *((_DWORD *)Block + 102);
  if ( v6 )
  {
    do
    {
      v7 = *(_DWORD *)(v6 + 4);
      free(*(void **)(v6 + 16));
      free((void *)v6);
      v6 = v7;
    }
    while ( v7 );
  }
  v8 = *((_DWORD *)Block + 101);
  if ( v8 )
  {
    do
    {
      v9 = *(_DWORD *)(v8 + 4);
      free(*(void **)(v8 + 16));
      free((void *)v8);
      v8 = v9;
    }
    while ( v9 );
  }
  sub_10022FE0();
  sub_10022FE0();
  sub_10022C90(Block + 292);
  free(*((void **)Block + 106));
  free(*((void **)Block + 119));
  free(*((void **)Block + 2));
  free(*((void **)Block + 8));
  free(*((void **)Block + 53));
  v10 = (void (__cdecl *)(_DWORD))*((_DWORD *)Block + 56);
  if ( v10 )
    v10(*((_DWORD *)Block + 54));
  free(Block);
}
