/*
 * func-name: sub_10062E00
 * func-address: 0x10062e00
 * callers: 0x10062f70
 * callees: 0x1000d9a0, 0x101a2500
 */

void __thiscall sub_10062E00(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // ecx
  unsigned int v3; // ebp
  int v4; // ecx
  int v5; // esi
  char *v6; // edi
  char *v7; // ebx
  int v8; // eax
  char *v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // ebp
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ebp
  _DWORD *v15; // ecx
  int v16; // ebx
  unsigned int v17; // esi
  _DWORD *v18; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  unsigned int v21; // [esp+1Ch] [ebp-4h]

  v1 = this;
  v2 = this[1];
  v3 = 0;
  v18 = v1;
  if ( v2 )
    v20 = (v1[2] - v2) >> 4;
  else
    v20 = 0;
  v21 = 0;
  if ( v20 > 0 )
  {
    v19 = 0;
    do
    {
      v4 = v1[1];
      if ( !v4 || v3 >= (v1[2] - v4) >> 4 )
        invalid_parameter_noinfo();
      v5 = v19 + v1[1];
      v6 = *(char **)(v5 + 8);
      if ( *(_DWORD *)(v5 + 4) > (unsigned int)v6 )
        invalid_parameter_noinfo();
      v7 = *(char **)(v5 + 4);
      if ( (unsigned int)v7 > *(_DWORD *)(v5 + 8) )
        invalid_parameter_noinfo();
      if ( v7 != v6 )
      {
        v8 = (*(_DWORD *)(v5 + 8) - (int)v6) >> 2;
        v9 = &v7[4 * v8];
        if ( v8 > 0 )
          memmove_s(v7, 4 * v8, v6, 4 * v8);
        *(_DWORD *)(v5 + 8) = v9;
        v3 = v21;
      }
      v19 += 16;
      v1 = v18;
      v21 = ++v3;
    }
    while ( (int)v3 < v20 );
  }
  v10 = v1[2];
  if ( v1[1] > v10 )
    invalid_parameter_noinfo();
  v11 = v1[1];
  if ( v11 > v1[2] )
    invalid_parameter_noinfo();
  if ( v11 == v10 )
  {
    v1[4] = 0;
    v1[5] = 0;
  }
  else
  {
    v12 = v1[2];
    v13 = v11 + 16 * ((int)(v12 - v10) >> 4);
    if ( v10 != v12 )
    {
      v14 = v11 - v10;
      do
      {
        sub_1000D9A0(v10 + v14, v10);
        v10 += 16;
      }
      while ( v10 != v12 );
    }
    v15 = v18;
    v16 = v18[2];
    if ( v13 == v16 )
    {
      v18[2] = v13;
      v18[4] = 0;
      v18[5] = 0;
    }
    else
    {
      v17 = v13 + 4;
      do
      {
        if ( *(_DWORD *)v17 )
        {
          operator delete(*(void **)v17);
          v15 = v18;
        }
        *(_DWORD *)v17 = 0;
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)(v17 + 8) = 0;
        v17 += 16;
      }
      while ( v17 - 4 != v16 );
      v15[2] = v13;
      v15[4] = 0;
      v15[5] = 0;
    }
  }
}
