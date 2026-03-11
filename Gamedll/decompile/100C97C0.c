/*
 * func-name: sub_100C97C0
 * func-address: 0x100c97c0
 * callers: 0x1000433b
 * callees: 0x10004a07, 0x10006bae, 0x1000c3f6, 0x100126e3, 0x1001715c, 0x10018741, 0x102c9d50
 */

char *__thiscall sub_100C97C0(int this, int a2, char *Source, unsigned int a4, int a5)
{
  char *result; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  _BYTE *v16; // ecx
  char *v17; // edi
  rsize_t v18; // eax
  void *v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ebp
  char *v24; // ebx
  int v25; // eax
  int v26; // ebp
  int v27; // [esp+0h] [ebp-Ch]
  int v28; // [esp+4h] [ebp-8h]
  int v29; // [esp+18h] [ebp+Ch]
  int v30; // [esp+18h] [ebp+Ch]

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
      sub_10006BAE(v27, v28);
    if ( v7 )
      v11 = (*(_DWORD *)(this + 8) - v7) >> 1;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v24 = *(char **)(this + 8);
      v25 = 2 * a4;
      v30 = 2 * a4;
      if ( (v24 - Source) >> 1 >= a4 )
      {
        v26 = (int)&v24[-v25];
        *(_DWORD *)(this + 8) = sub_10018741(&v24[-v25], (int)v24, v24);
        sub_1001715C(Source, v26, (int)v24);
        return (char *)sub_10004A07((int)Source, (int)&Source[v30], (int)&a5);
      }
      else
      {
        sub_10018741(Source, (int)v24, &Source[v25]);
        sub_1000C3F6(*(_DWORD *)(this + 8), a4 - ((*(_DWORD *)(this + 8) - (int)Source) >> 1), (int)&a5);
        *(_DWORD *)(this + 8) += v30;
        return (char *)sub_10004A07((int)Source, *(_DWORD *)(this + 8) - v30, (int)&a5);
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
      v15 = sub_100126E3(v12);
      v16 = *(_BYTE **)(this + 4);
      v17 = (char *)v15;
      v18 = 2 * ((Source - v16) >> 1);
      v29 = (int)&v17[v18];
      if ( (Source - v16) >> 1 )
        memmove_s(v17, v18, v16, v18);
      v19 = (void *)sub_1000C3F6(v29, a4, (int)&a5);
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
