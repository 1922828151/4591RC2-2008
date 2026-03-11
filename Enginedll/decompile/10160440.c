/*
 * func-name: sub_10160440
 * func-address: 0x10160440
 * callers: 0x10168040
 * callees: 0x10076ef0, 0x1015f400, 0x101a251c, 0x101a252e
 */

bool __cdecl sub_10160440(_DWORD *a1, void **a2)
{
  int v3; // ebp
  bool result; // al
  int v5; // ebx
  unsigned int v7; // edi
  void (__cdecl *v8)(); // ebp
  int v9; // ecx
  _DWORD **v10; // ebx
  int v11; // eax
  int v12; // ecx
  _DWORD **v13; // ebx
  int v14; // ecx
  int v15; // ebx
  int v16; // ecx
  int v17; // ebx
  void **v18; // edi
  unsigned int v19; // ebp
  int v20; // ebx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // ebx
  int v29; // ebp
  unsigned int v30; // ecx
  int j; // [esp+8h] [ebp-8h]
  int v32; // [esp+Ch] [ebp-4h]
  unsigned int i; // [esp+Ch] [ebp-4h]
  int v34; // [esp+14h] [ebp+4h]

  v3 = a1[1];
  if ( !v3 || (unsigned int)((a1[2] - v3) >> 2) <= 1 )
    return 0;
  v5 = -1;
  v34 = -1;
  v32 = -1;
  v7 = 0;
  if ( std::vector<Model *>::size(a1) )
  {
    do
    {
      if ( v3 && v7 < (a1[2] - v3) >> 2 )
      {
        v8 = invalid_parameter_noinfo;
      }
      else
      {
        v8 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v9 = a1[1];
      v10 = (_DWORD **)(v9 + 4 * v7);
      if ( !v9 || v7 >= (a1[2] - v9) >> 2 )
        v8();
      v11 = a1[1];
      if ( **v10 + *(_DWORD *)(*(_DWORD *)(v11 + 4 * v7) + 8) > v34 )
      {
        if ( !v11 || v7 >= (a1[2] - v11) >> 2 )
          v8();
        v12 = a1[1];
        v13 = (_DWORD **)(v12 + 4 * v7);
        if ( !v12 || v7 >= (a1[2] - v12) >> 2 )
          v8();
        v11 = a1[1];
        v34 = **v13 + *(_DWORD *)(*(_DWORD *)(v11 + 4 * v7) + 8);
      }
      if ( !v11 || v7 >= (a1[2] - v11) >> 2 )
        v8();
      v14 = a1[1];
      v15 = v14 + 4 * v7;
      if ( !v14 || v7 >= (a1[2] - v14) >> 2 )
        v8();
      v3 = a1[1];
      if ( *(_DWORD *)(*(_DWORD *)v15 + 4) + *(_DWORD *)(*(_DWORD *)(v3 + 4 * v7) + 12) > v32 )
      {
        if ( !v3 || v7 >= (a1[2] - v3) >> 2 )
          invalid_parameter_noinfo();
        v16 = a1[1];
        v17 = v16 + 4 * v7;
        if ( !v16 || v7 >= (a1[2] - v16) >> 2 )
          invalid_parameter_noinfo();
        v3 = a1[1];
        v32 = *(_DWORD *)(*(_DWORD *)v17 + 4) + *(_DWORD *)(*(_DWORD *)(v3 + 4 * v7) + 12);
      }
      ++v7;
    }
    while ( v7 < std::vector<Model *>::size(a1) );
    v5 = v32;
  }
  v18 = a2;
  result = sub_1015F400(a2, v34, v5);
  if ( result )
  {
    memset(a2[5], 0, 4 * v34 * v5);
    v19 = 0;
    for ( i = 0; v19 < std::vector<Model *>::size(a1); i = v19 )
    {
      v20 = 0;
      for ( j = 0; ; v20 = j )
      {
        v21 = a1[1];
        if ( !v21 || v19 >= (a1[2] - v21) >> 2 )
          invalid_parameter_noinfo();
        v22 = a1[1];
        if ( v20 >= *(_DWORD *)(*(_DWORD *)(v22 + 4 * v19) + 12) )
          break;
        if ( !v22 || v19 >= (a1[2] - v22) >> 2 )
          invalid_parameter_noinfo();
        v23 = a1[1];
        v24 = v23 + 4 * v19;
        if ( !v23 || v19 >= (a1[2] - v23) >> 2 )
          invalid_parameter_noinfo();
        v25 = a1[1];
        v26 = **(_DWORD **)(v25 + 4 * v19) + v34 * (v20 + *(_DWORD *)(*(_DWORD *)v24 + 4));
        if ( !v25 || v19 >= (a1[2] - v25) >> 2 )
          invalid_parameter_noinfo();
        v27 = a1[1];
        v28 = j * *(_DWORD *)(*(_DWORD *)(v27 + 4 * v19) + 8);
        if ( !v27 || v19 >= (a1[2] - v27) >> 2 )
          invalid_parameter_noinfo();
        v29 = a1[1];
        if ( !v29 || (v30 = i, i >= (a1[2] - v29) >> 2) )
        {
          invalid_parameter_noinfo();
          v30 = i;
        }
        memcpy(
          (char *)a2[5] + 4 * v26,
          (const void *)(*(_DWORD *)(*(_DWORD *)(a1[1] + 4 * v30) + 20) + 4 * v28),
          4 * *(_DWORD *)(*(_DWORD *)(v29 + 4 * v30) + 8));
        v18 = a2;
        v19 = i;
        ++j;
      }
      ++v19;
    }
    memcpy(v18[6], v18[5], 4 * (_DWORD)v18[2] * (_DWORD)v18[3]);
    return 1;
  }
  return result;
}
