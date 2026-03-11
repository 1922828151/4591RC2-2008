/*
 * func-name: sub_100E0590
 * func-address: 0x100e0590
 * callers: 0x100e0750, 0x1011f860
 * callees: 0x1001a770, 0x1003b6b0, 0x100dd410, 0x100e0390, 0x100e0560, 0x10135a20, 0x101a2500
 */

int *__thiscall sub_100E0590(int this, int a2, char *Source, unsigned int a4, int *a5)
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
  float *v16; // eax
  float *v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  char *v21; // ebp
  int v22; // eax
  int v23; // ebx
  int v24; // [esp+14h] [ebp+Ch]

  result = a5;
  a5 = *(int **)a5;
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
      sub_1001A770();
    if ( v7 )
      v11 = (*(_DWORD *)(this + 8) - v7) >> 2;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v21 = *(char **)(this + 8);
      v22 = 4 * a4;
      v24 = 4 * a4;
      if ( (v21 - Source) >> 2 >= a4 )
      {
        v23 = (int)&v21[-v22];
        *(_DWORD *)(this + 8) = sub_1003B6B0(&v21[-v22], (int)v21, v21);
        sub_10135A20(Source, v23, (int)v21);
        return (int *)sub_100E0390((int)Source, (int)&Source[v24], (float *)&a5);
      }
      else
      {
        sub_1003B6B0(Source, (int)v21, &Source[v22]);
        sub_100E0560(*(float **)(this + 8), a4 - ((*(_DWORD *)(this + 8) - (int)Source) >> 2), (float *)&a5);
        *(_DWORD *)(this + 8) += v24;
        return (int *)sub_100E0390((int)Source, *(_DWORD *)(this + 8) - v24, (float *)&a5);
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
      v15 = (char *)sub_100DD410(v12);
      v16 = (float *)sub_1003B6B0(*(void **)(this + 4), (int)Source, v15);
      v17 = sub_100E0560(v16, a4, (float *)&a5);
      sub_1003B6B0(Source, *(_DWORD *)(this + 8), v17);
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
