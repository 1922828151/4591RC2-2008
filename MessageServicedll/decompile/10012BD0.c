/*
 * func-name: sub_10012BD0
 * func-address: 0x10012bd0
 * callers: 0x10012a40
 * callees: 0x10009af0, 0x10009cc0, 0x10016130, 0x10016520, 0x100294f2, 0x10029d92
 */

char *__thiscall sub_10012BD0(int this, int *a2, int a3, char *Source)
{
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  void *v12; // eax
  int v13; // eax
  int v14; // esi
  char *result; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // edi
  int v19[4]; // [esp+0h] [ebp-28h] BYREF
  void *v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  int *v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+24h] [ebp-4h]
  int v24; // [esp+30h] [ebp+8h]

  v22 = v19;
  v21 = *a2;
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
    sub_10009AF0(v19[0], v19[1]);
  if ( v5 )
    v8 = (*(_DWORD *)(this + 8) - v5) >> 2;
  else
    v8 = 0;
  if ( v6 >= v8 + 1 )
  {
    v16 = *(_DWORD *)(this + 8);
    if ( (v16 - (int)Source) >> 2 )
    {
      *(_DWORD *)(this + 8) = sub_10016520(*(void **)(this + 8), (void *)(v16 - 4));
      v18 = (v16 - 4 - (int)Source) >> 2;
      if ( v18 > 0 )
        memmove_s((void *const)(v16 - 4 * v18), 4 * v18, Source, 4 * v18);
      result = Source;
      do
      {
        *(_DWORD *)result = v21;
        result += 4;
      }
      while ( result != Source + 4 );
    }
    else
    {
      sub_10016520(Source + 4, Source);
      v23 = 2;
      sub_10016130();
      v23 = -1;
      *(_DWORD *)(this + 8) += 4;
      v17 = *(_DWORD *)(this + 8) - 4;
      for ( result = Source; result != (char *)v17; result += 4 )
        *(_DWORD *)result = v21;
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
    v20 = sub_10009CC0(v9);
    v23 = 0;
    sub_10016520(v20, *(void **)(this + 4));
    v12 = (void *)sub_10016130();
    sub_10016520(v12, Source);
    v23 = -1;
    v13 = *(_DWORD *)(this + 4);
    if ( v13 )
      v14 = (*(_DWORD *)(this + 8) - v13) >> 2;
    else
      v14 = 0;
    if ( v13 )
      operator delete(*(void **)(this + 4));
    result = (char *)v20;
    *(_DWORD *)(this + 12) = (char *)v20 + 4 * v24;
    *(_DWORD *)(this + 8) = &result[4 * v14 + 4];
    *(_DWORD *)(this + 4) = result;
  }
  return result;
}
