/*
 * func-name: sub_10007A10
 * func-address: 0x10007a10
 * callers: 0x10007570
 * callees: 0x10007540, 0x10007600, 0x10007ed0, 0x10008350, 0x10018cf2, 0x10019586
 */

char *__thiscall sub_10007A10(int this, _DWORD *a2, int a3, char *Source)
{
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // esi
  char *result; // eax
  int v17; // esi
  int v18; // ecx
  int v19; // edi
  void *v20[4]; // [esp+0h] [ebp-28h] BYREF
  void *v21; // [esp+10h] [ebp-18h]
  _DWORD v22[2]; // [esp+14h] [ebp-14h] BYREF
  int v23; // [esp+24h] [ebp-4h]
  int v24; // [esp+30h] [ebp+8h]

  v22[1] = v20;
  v22[0] = *a2;
  v5 = *(_DWORD *)(this + 4);
  if ( v5 )
    v6 = (*(_DWORD *)(this + 12) - v5) >> 2;
  else
    v6 = 0;
  if ( v5 )
    v7 = (*(_DWORD *)(this + 8) - v5) >> 2;
  else
    v7 = 0;
  if ( v7 == 0x3FFFFFFF )
    v5 = sub_10007ED0(v20[0], v20[1]);
  if ( v5 )
    v8 = (*(_DWORD *)(this + 8) - v5) >> 2;
  else
    v8 = 0;
  if ( v6 >= v8 + 1 )
  {
    v17 = *(_DWORD *)(this + 8);
    if ( (v17 - (int)Source) >> 2 )
    {
      *(_DWORD *)(this + 8) = sub_10008350(*(void **)(this + 8), (void *)(v17 - 4));
      v19 = (v17 - 4 - (int)Source) >> 2;
      if ( v19 > 0 )
        memmove_s((void *const)(v17 - 4 * v19), 4 * v19, Source, 4 * v19);
      result = Source;
      do
      {
        *(_DWORD *)result = v22[0];
        result += 4;
      }
      while ( result != Source + 4 );
    }
    else
    {
      sub_10008350(Source + 4, Source);
      v23 = 2;
      sub_10007540(v22, *(_DWORD **)(this + 8), 1 - ((*(_DWORD *)(this + 8) - (int)Source) >> 2));
      v23 = -1;
      *(_DWORD *)(this + 8) += 4;
      v18 = *(_DWORD *)(this + 8) - 4;
      for ( result = Source; result != (char *)v18; result += 4 )
        *(_DWORD *)result = v22[0];
    }
  }
  else
  {
    if ( 0x3FFFFFFF - (v6 >> 1) >= v6 )
    {
      v9 = (v6 >> 1) + v6;
      v24 = v9;
    }
    else
    {
      v24 = 0;
      v9 = 0;
    }
    if ( v5 )
      v10 = (*(_DWORD *)(this + 8) - v5) >> 2;
    else
      v10 = 0;
    if ( v9 < v10 + 1 )
    {
      if ( v5 )
        v11 = (*(_DWORD *)(this + 8) - v5) >> 2;
      else
        v11 = 0;
      v9 = v11 + 1;
      v24 = v9;
    }
    v21 = sub_10007600(v9);
    v23 = 0;
    v12 = (_DWORD *)sub_10008350(v21, *(void **)(this + 4));
    v13 = sub_10007540(v22, v12, 1);
    sub_10008350(v13, Source);
    v23 = -1;
    v14 = *(_DWORD *)(this + 4);
    if ( v14 )
      v15 = (*(_DWORD *)(this + 8) - v14) >> 2;
    else
      v15 = 0;
    if ( v14 )
      operator delete(*(void **)(this + 4));
    result = (char *)v21;
    *(_DWORD *)(this + 12) = (char *)v21 + 4 * v24;
    *(_DWORD *)(this + 8) = &result[4 * v15 + 4];
    *(_DWORD *)(this + 4) = result;
  }
  return result;
}
