/*
 * func-name: sub_102C5900
 * func-address: 0x102c5900
 * callers: 0x102c5c90, 0x102c5f50
 * callees: 0x102c3010, 0x102c4980, 0x102c5040, 0x102c5060, 0x102c5740, 0x102c58a0, 0x102c9d50
 */

int *__thiscall sub_102C5900(int this, int a2, _DWORD *Source, unsigned int a4, int *a5)
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
  _DWORD *v16; // eax
  _DWORD *v17; // eax
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
      sub_102C4980(v24, v25);
    if ( v7 )
      v11 = (*(_DWORD *)(this + 8) - v7) >> 2;
    else
      v11 = 0;
    if ( v8 >= a4 + v11 )
    {
      v21 = *(char **)(this + 8);
      v22 = 4 * a4;
      v26 = 4 * a4;
      if ( (v21 - (char *)Source) >> 2 >= a4 )
      {
        v23 = (int)&v21[-v22];
        *(_DWORD *)(this + 8) = sub_102C5740(&v21[-v22], (int)v21, v21);
        sub_102C5060(Source, v23, (int)v21);
        return sub_102C5040(Source, &Source[v26 / 4u], &a5);
      }
      else
      {
        sub_102C5740(Source, (int)v21, &Source[v22 / 4u]);
        sub_102C58A0(*(_DWORD **)(this + 8), a4 - ((*(_DWORD *)(this + 8) - (int)Source) >> 2), &a5);
        *(_DWORD *)(this + 8) += v26;
        return sub_102C5040(Source, (_DWORD *)(*(_DWORD *)(this + 8) - v26), &a5);
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
      v15 = (char *)sub_102C3010(v12);
      v16 = (_DWORD *)sub_102C5740(*(void **)(this + 4), (int)Source, v15);
      v17 = sub_102C58A0(v16, a4, &a5);
      sub_102C5740(Source, *(_DWORD *)(this + 8), v17);
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
