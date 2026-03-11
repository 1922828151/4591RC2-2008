/*
 * func-name: ?RebuildTriangle@TerrainNode@@QAE_NABV?$vector@GV?$allocator@G@std@@@std@@0@Z
 * func-address: 0x10160e00
 * callers: none
 * callees: 0x1009dd90, 0x1015f2a0
 */

char __thiscall TerrainNode::RebuildTriangle(TerrainNode *this, int a2, int a3)
{
  int v4; // eax
  struct Mesh *Mesh; // edi
  ModelFrame *v7; // ecx
  struct Mesh *v8; // eax
  ModelFrame *v9; // ecx
  struct Mesh *v10; // ebx
  bool v12; // cc
  _WORD *v13; // edi
  _WORD *v14; // esi
  _WORD *i; // eax
  _WORD *v16; // ebp
  _WORD *v17; // edi
  _WORD *v18; // esi
  _WORD *j; // eax
  _WORD *v20; // ebp
  _WORD *v21; // edi
  _WORD *v22; // esi
  _WORD *k; // eax
  int v24; // eax
  _WORD *v26; // edi
  _WORD *v27; // esi
  _WORD *m; // eax
  _WORD *v29; // ebp
  _WORD *v30; // edi
  _WORD *v31; // esi
  _WORD *n; // eax
  _WORD *v33; // ebp
  _WORD *v34; // edi
  _WORD *v35; // esi
  _WORD *ii; // eax
  struct Mesh *v37; // [esp+8h] [ebp-14h] BYREF
  struct Mesh *v38; // [esp+Ch] [ebp-10h] BYREF
  struct Mesh *v39; // [esp+10h] [ebp-Ch] BYREF
  _WORD *v40; // [esp+14h] [ebp-8h]
  int v41; // [esp+18h] [ebp-4h] BYREF
  _WORD *v42; // [esp+20h] [ebp+4h]
  _WORD *v43; // [esp+20h] [ebp+4h]
  int v44; // [esp+24h] [ebp+8h]

  v4 = *((_DWORD *)this + 179);
  if ( !v4 )
    return 0;
  Mesh = ModelFrame::GetMesh(*(ModelFrame **)(v4 + 308), 0);
  v7 = *(ModelFrame **)(*((_DWORD *)this + 179) + 308);
  v39 = Mesh;
  v8 = ModelFrame::GetMesh(v7, 1u);
  v9 = *(ModelFrame **)(*((_DWORD *)this + 179) + 308);
  v10 = v8;
  v37 = v8;
  v38 = ModelFrame::GetMesh(v9, 2u);
  TerrainNode::FillIndex(this, &v39, &v37, &v38);
  if ( Mesh )
  {
    v42 = (_WORD *)(*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)Mesh + 136))(Mesh, &v41);
    v38 = (struct Mesh *)8064;
    do
    {
      v12 = *(_DWORD *)(a2 + 4) <= *(_DWORD *)(a2 + 8);
      v40 = *(_WORD **)(a2 + 8);
      if ( !v12 )
        invalid_parameter_noinfo();
      v13 = *(_WORD **)(a2 + 8);
      if ( *(_DWORD *)(a2 + 4) > (unsigned int)v13 )
        invalid_parameter_noinfo();
      v14 = *(_WORD **)(a2 + 4);
      if ( (unsigned int)v14 > *(_DWORD *)(a2 + 8) )
        invalid_parameter_noinfo();
      for ( i = v14; i != v13; ++i )
      {
        if ( *i == *v42 )
          break;
      }
      if ( i != v40 )
      {
        v16 = *(_WORD **)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) > (unsigned int)v16 )
          invalid_parameter_noinfo();
        v17 = *(_WORD **)(a2 + 8);
        if ( *(_DWORD *)(a2 + 4) > (unsigned int)v17 )
          invalid_parameter_noinfo();
        v18 = *(_WORD **)(a2 + 4);
        if ( (unsigned int)v18 > *(_DWORD *)(a2 + 8) )
          invalid_parameter_noinfo();
        for ( j = v18; j != v17; ++j )
        {
          if ( *j == v42[1] )
            break;
        }
        if ( j != v16 )
        {
          v20 = *(_WORD **)(a2 + 8);
          if ( *(_DWORD *)(a2 + 4) > (unsigned int)v20 )
            invalid_parameter_noinfo();
          v21 = *(_WORD **)(a2 + 8);
          if ( *(_DWORD *)(a2 + 4) > (unsigned int)v21 )
            invalid_parameter_noinfo();
          v22 = *(_WORD **)(a2 + 4);
          if ( (unsigned int)v22 > *(_DWORD *)(a2 + 8) )
            invalid_parameter_noinfo();
          for ( k = v22; k != v21; ++k )
          {
            if ( *k == v42[2] )
              break;
          }
          if ( k != v20 )
          {
            *(_DWORD *)v42 = 0;
            v42[2] = 0;
          }
        }
      }
      v42 += 3;
      v38 = (struct Mesh *)((char *)v38 - 1);
    }
    while ( v38 );
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v39 + 140))(v39);
    v10 = v37;
  }
  if ( v10 )
  {
    v24 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)v10 + 136))(v10, &v41);
    v43 = (_WORD *)v24;
    v44 = 2560;
    do
    {
      v12 = *(_DWORD *)(a3 + 4) <= *(_DWORD *)(a3 + 8);
      v40 = *(_WORD **)(a3 + 8);
      if ( !v12 )
        invalid_parameter_noinfo();
      v26 = *(_WORD **)(a3 + 8);
      if ( *(_DWORD *)(a3 + 4) > (unsigned int)v26 )
        invalid_parameter_noinfo();
      v27 = *(_WORD **)(a3 + 4);
      if ( (unsigned int)v27 > *(_DWORD *)(a3 + 8) )
        invalid_parameter_noinfo();
      for ( m = v27; m != v26; ++m )
      {
        if ( *m == *v43 )
          break;
      }
      if ( m != v40 )
      {
        v29 = *(_WORD **)(a3 + 8);
        if ( *(_DWORD *)(a3 + 4) > (unsigned int)v29 )
          invalid_parameter_noinfo();
        v30 = *(_WORD **)(a3 + 8);
        if ( *(_DWORD *)(a3 + 4) > (unsigned int)v30 )
          invalid_parameter_noinfo();
        v31 = *(_WORD **)(a3 + 4);
        if ( (unsigned int)v31 > *(_DWORD *)(a3 + 8) )
          invalid_parameter_noinfo();
        for ( n = v31; n != v30; ++n )
        {
          if ( *n == v43[1] )
            break;
        }
        if ( n != v29 )
        {
          v33 = *(_WORD **)(a3 + 8);
          if ( *(_DWORD *)(a3 + 4) > (unsigned int)v33 )
            invalid_parameter_noinfo();
          v34 = *(_WORD **)(a3 + 8);
          if ( *(_DWORD *)(a3 + 4) > (unsigned int)v34 )
            invalid_parameter_noinfo();
          v35 = *(_WORD **)(a3 + 4);
          if ( (unsigned int)v35 > *(_DWORD *)(a3 + 8) )
            invalid_parameter_noinfo();
          for ( ii = v35; ii != v34; ++ii )
          {
            if ( *ii == v43[2] )
              break;
          }
          if ( ii != v33 )
          {
            *(_DWORD *)v43 = 0;
            v43[2] = 0;
          }
        }
      }
      v43 += 3;
      --v44;
    }
    while ( v44 );
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v37 + 140))(v37);
  }
  return 1;
}
