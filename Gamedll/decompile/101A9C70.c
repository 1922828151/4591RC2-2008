/*
 * func-name: sub_101A9C70
 * func-address: 0x101a9c70
 * callers: 0x1001965a
 * callees: 0x100014ba, 0x100089b3, 0x100148c6, 0x10016eaa, 0x10017b6b, 0x10018b74, 0x102c9d50
 */

int *__thiscall sub_101A9C70(int this, int a2, char *Source, unsigned int a4, int *a5)
{
  int *result; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // edi
  char *v15; // ebp
  int v16; // eax
  void *v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  char *v21; // ebp
  int v22; // eax
  int v23; // ebx
  int v24; // [esp+0h] [ebp-Ch]
  int v25; // [esp+4h] [ebp-8h]
  int v26; // [esp+18h] [ebp+Ch]

  result = a5;
  a5 = (int *)*a5;
  v7 = *(_DWORD *)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 12) - v7) >> 2;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v7 )
      v10 = (*(_DWORD *)(this + 8) - v7) >> 2;
    else
      v10 = 0;
    if ( 0x3FFFFFFF - v10 < a4 )
      sub_100014BA(v24, v25);
    if ( v7 )
      v11 = (*(_DWORD *)(this + 8) - v7) >> 2;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v21 = *(char **)(this + 8);
      v22 = 4 * a4;
      v26 = 4 * a4;
      if ( (v21 - Source) >> 2 >= a4 )
      {
        v23 = (int)&v21[-v22];
        *(_DWORD *)(this + 8) = sub_100089B3(&v21[-v22], (int)v21, v21);
        sub_10017B6B(Source, v23, (int)v21);
        return (int *)sub_100148C6((int)Source, (int)&Source[v26], (int)&a5);
      }
      else
      {
        sub_100089B3(Source, (int)v21, &Source[v22]);
        sub_10018B74(*(_DWORD *)(this + 8), a4 - ((*(_DWORD *)(this + 8) - (int)Source) >> 2), (int)&a5);
        *(_DWORD *)(this + 8) += v26;
        return (int *)sub_100148C6((int)Source, *(_DWORD *)(this + 8) - v26, (int)&a5);
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v8 >> 1) >= v8 )
        v12 = (v8 >> 1) + v8;
      else
        v12 = 0;
      if ( v7 )
        v13 = (*(_DWORD *)(this + 8) - v7) >> 2;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
      {
        if ( v7 )
          v14 = (*(_DWORD *)(this + 8) - v7) >> 2;
        else
          v14 = 0;
        v12 = a4 + v14;
      }
      v15 = (char *)sub_10016EAA(v12);
      v16 = sub_100089B3(*(void **)(this + 4), (int)Source, v15);
      v17 = (void *)sub_10018B74(v16, a4, (int)&a5);
      sub_100089B3(Source, *(_DWORD *)(this + 8), v17);
      v18 = *(_DWORD *)(this + 4);
      if ( v18 )
        v19 = (*(_DWORD *)(this + 8) - v18) >> 2;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
        operator delete(*(void **)(this + 4));
      result = (int *)&v15[4 * v20];
      *(_DWORD *)(this + 4) = v15;
      *(_DWORD *)(this + 12) = &v15[4 * v12];
      *(_DWORD *)(this + 8) = result;
    }
  }
  return result;
}
