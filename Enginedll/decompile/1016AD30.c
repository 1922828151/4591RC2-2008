/*
 * func-name: sub_1016AD30
 * func-address: 0x1016ad30
 * callers: 0x1016b400
 * callees: 0x10061730, 0x100ceed0, 0x100d03c0, 0x1016a270, 0x1016a2f0, 0x1016a600, 0x101a2500
 */

char *__thiscall sub_1016AD30(int this, int a2, _WORD *Source, unsigned int a4, int a5)
{
  char *result; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // ebx
  char *v15; // eax
  _BYTE *v16; // ecx
  char *v17; // edi
  rsize_t v18; // eax
  _WORD *v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ebp
  char *v24; // ebx
  int v25; // eax
  int v26; // ebp
  char *v27; // [esp+18h] [ebp+Ch]
  int v28; // [esp+18h] [ebp+Ch]

  result = (char *)a5;
  a5 = *(unsigned __int16 *)a5;
  v7 = *(_DWORD *)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 12) - v7) >> 1;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v7 )
      v10 = (*(_DWORD *)(this + 8) - v7) >> 1;
    else
      v10 = 0;
    if ( 0x7FFFFFFF - v10 < a4 )
      sub_1016A270();
    if ( v7 )
      v11 = (*(_DWORD *)(this + 8) - v7) >> 1;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v24 = *(char **)(this + 8);
      v25 = 2 * a4;
      v28 = 2 * a4;
      if ( (v24 - (char *)Source) >> 1 >= a4 )
      {
        v26 = (int)&v24[-v25];
        *(_DWORD *)(this + 8) = sub_100D03C0(&v24[-v25], (int)v24, v24);
        sub_100CEED0(Source, v26, (int)v24);
        return (char *)sub_10061730(Source, &Source[v28 / 2u], &a5);
      }
      else
      {
        sub_100D03C0(Source, (int)v24, &Source[v25 / 2u]);
        sub_1016A600(*(_WORD **)(this + 8), a4 - ((*(_DWORD *)(this + 8) - (int)Source) >> 1), &a5);
        *(_DWORD *)(this + 8) += v28;
        return (char *)sub_10061730(Source, (_WORD *)(*(_DWORD *)(this + 8) - v28), &a5);
      }
    }
    else
    {
      if ( 0x7FFFFFFF - (v8 >> 1) >= v8 )
        v12 = (v8 >> 1) + v8;
      else
        v12 = 0;
      if ( v7 )
        v13 = (*(_DWORD *)(this + 8) - v7) >> 1;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
      {
        if ( v7 )
          v14 = (*(_DWORD *)(this + 8) - v7) >> 1;
        else
          v14 = 0;
        v12 = a4 + v14;
      }
      v15 = (char *)sub_1016A2F0(v12);
      v16 = *(_BYTE **)(this + 4);
      v17 = v15;
      v18 = 2 * (((char *)Source - v16) >> 1);
      v27 = &v17[v18];
      if ( ((char *)Source - v16) >> 1 )
        memmove_s(v17, v18, v16, v18);
      v19 = sub_1016A600(v27, a4, &a5);
      v20 = (*(_DWORD *)(this + 8) - (int)Source) >> 1;
      if ( v20 )
        memmove_s(v19, 2 * v20, Source, 2 * v20);
      v21 = *(_DWORD *)(this + 4);
      if ( v21 )
        v22 = (*(_DWORD *)(this + 8) - v21) >> 1;
      else
        v22 = 0;
      v23 = v22 + a4;
      if ( v21 )
        operator delete(*(void **)(this + 4));
      result = &v17[2 * v23];
      *(_DWORD *)(this + 4) = v17;
      *(_DWORD *)(this + 12) = &v17[2 * v12];
      *(_DWORD *)(this + 8) = result;
    }
  }
  return result;
}
