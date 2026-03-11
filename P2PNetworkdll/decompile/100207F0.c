/*
 * func-name: sub_100207F0
 * func-address: 0x100207f0
 * callers: 0x10020130
 * callees: 0x100234ec, 0x10023bb2
 */

int __cdecl sub_100207F0(int a1, _DWORD *a2, int a3, _BYTE *Src, _DWORD *a5)
{
  signed int v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  void *v8; // eax
  void *v9; // eax
  char v11; // al
  void (__cdecl *v12)(_DWORD, _DWORD, _BYTE *); // eax
  void *v13; // [esp-Ch] [ebp-1Ch]

  v5 = 0;
  if ( *Src )
  {
    do
      ++v5;
    while ( Src[v5] );
  }
  v6 = a1;
  if ( *(_BYTE *)(a1 + 488) )
    ++v5;
  v7 = *(_DWORD **)(a1 + 408);
  if ( !v7 )
  {
    v7 = malloc(0x1Cu);
    if ( v7 )
    {
      v9 = malloc(v5 + 24);
      v7[4] = v9;
      if ( v9 )
      {
        v7[6] = v5 + 24;
        v6 = a1;
        goto LABEL_15;
      }
      free(v7);
    }
    return 0;
  }
  if ( v5 > v7[6] )
  {
    v8 = realloc((void *)v7[4], v5 + 24);
    v7[4] = v8;
    if ( v8 )
    {
      v7[6] = v5 + 24;
      v6 = a1;
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  *(_DWORD *)(v6 + 408) = v7[1];
LABEL_15:
  v13 = (void *)v7[4];
  v7[5] = v5;
  memcpy(v13, Src, v5);
  v11 = *(_BYTE *)(v6 + 488);
  if ( v11 )
    *(_BYTE *)(v7[4] + v5 - 1) = v11;
  *v7 = a2;
  v7[3] = a3;
  v7[2] = a2[1];
  if ( *Src || a2 != (_DWORD *)(v6 + 384) )
    a2[1] = v7;
  else
    a2[1] = 0;
  v7[1] = *a5;
  *a5 = v7;
  v12 = *(void (__cdecl **)(_DWORD, _DWORD, _BYTE *))(v6 + 96);
  if ( v12 )
    v12(*(_DWORD *)(v6 + 4), *a2, a2[1] != 0 ? Src : 0);
  return 1;
}
