/*
 * func-name: ?PopUndoRedo@Editor@@QAE_NPAV?$list@UUndo@Editor@@V?$allocator@UUndo@Editor@@@std@@@std@@0@Z
 * func-address: 0x1008e470
 * callers: 0x1008f330, 0x1008f350
 * callees: 0x1000c2b0, 0x1000ce20, 0x1000d4b0, 0x1000d550, 0x1000f2e0, 0x10011750, 0x100117e0, 0x10012a30, 0x10012cd0, 0x10025b10, 0x10052ae0, 0x1007e290, 0x1007ec80, 0x1007fd50, 0x1007ffa0, 0x10082690, 0x1009dd90, 0x1009ee50, 0x100e4400, 0x100e6830, 0x101381e0, 0x1015d190, 0x1015edf0, 0x10162160, 0x101a2500
 */

char __thiscall Editor::PopUndoRedo(Editor *this, int a2, _DWORD *a3)
{
  int v3; // eax
  Editor *v4; // ebx
  int v6; // eax
  int v7; // ebp
  int v8; // ebp
  unsigned int i; // edi
  int v10; // ecx
  int v11; // esi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // ecx
  int v17; // ecx
  int v18; // esi
  bool v19; // zf
  unsigned int j; // esi
  int v21; // ecx
  unsigned int k; // esi
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // esi
  int v27; // ecx
  int v28; // ecx
  void (__cdecl *v29)(); // ebx
  int v30; // ecx
  unsigned int v31; // eax
  _DWORD *v32; // esi
  float v33; // edi
  _DWORD *v34; // edi
  _DWORD *v35; // eax
  int v36; // ecx
  unsigned int v37; // edx
  int v38; // ecx
  int v39; // esi
  _DWORD *v40; // eax
  int v41; // ecx
  int v42; // esi
  int v43; // ecx
  float *v44; // eax
  int v45; // ecx
  int v46; // ecx
  const void *v47; // esi
  int v48; // ecx
  int v49; // esi
  _DWORD *v50; // ecx
  _DWORD *v51; // edi
  unsigned int v52; // edx
  int v53; // ecx
  int v54; // ebx
  int v55; // ecx
  int v56; // ebx
  unsigned int v57; // eax
  unsigned int v58; // edx
  int *v59; // eax
  char *v60; // ebx
  unsigned int m; // esi
  int v62; // ecx
  int v63; // ecx
  unsigned int n; // esi
  int v65; // ecx
  int v66; // ecx
  unsigned int ii; // esi
  int v68; // ecx
  int v69; // ecx
  unsigned int jj; // esi
  int v71; // ecx
  int v72; // ecx
  unsigned int kk; // esi
  int v74; // ecx
  int v75; // ecx
  int v76; // eax
  Editor *mm; // ebx
  struct Mesh *Mesh; // eax
  struct Mesh *v79; // esi
  int v80; // ecx
  unsigned int v81; // eax
  unsigned int v82; // edi
  int *v83; // ebx
  char *v84; // edi
  int v85; // ecx
  unsigned int v86; // edi
  int v87; // eax
  int v88; // ecx
  int *v89; // ebx
  unsigned int v90; // edi
  int v91; // ecx
  unsigned int nn; // esi
  int v93; // ecx
  int v94; // eax
  int v95; // edx
  Editor *i1; // ebx
  struct Mesh *v97; // eax
  struct Mesh *v98; // esi
  int v99; // ecx
  unsigned int v100; // eax
  unsigned int v101; // edi
  int *v102; // ebx
  char *v103; // edi
  int v104; // eax
  int v105; // eax
  int v106; // ecx
  int *v107; // ebx
  unsigned int v108; // edi
  int v109; // eax
  int v110; // esi
  _DWORD *v111; // edi
  int v112; // eax
  _DWORD **v113; // esi
  int v114; // [esp+8h] [ebp-54h] BYREF
  int v115; // [esp+Ch] [ebp-50h] BYREF
  float v116; // [esp+10h] [ebp-4Ch]
  Editor *v117; // [esp+14h] [ebp-48h]
  int v118; // [esp+18h] [ebp-44h] BYREF
  float v119; // [esp+1Ch] [ebp-40h]
  int v120; // [esp+20h] [ebp-3Ch] BYREF
  void *v121; // [esp+24h] [ebp-38h]
  void *Source; // [esp+28h] [ebp-34h]
  int v123; // [esp+2Ch] [ebp-30h]
  int v124; // [esp+30h] [ebp-2Ch] BYREF
  void *v125; // [esp+34h] [ebp-28h]
  unsigned int v126; // [esp+38h] [ebp-24h]
  int v127; // [esp+3Ch] [ebp-20h]
  int v128; // [esp+40h] [ebp-1Ch] BYREF
  void *v129; // [esp+44h] [ebp-18h]
  int v130; // [esp+58h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 8);
  v4 = this;
  v117 = this;
  if ( !v3 )
    return 0;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(v6 + 4);
  if ( v7 == v6 )
    invalid_parameter_noinfo();
  if ( v7 == *(_DWORD *)(a2 + 4) )
    invalid_parameter_noinfo();
  v8 = v7 + 8;
  if ( *(_DWORD *)v8 == 1 )
  {
    if ( *(_BYTE *)(v8 + 4) )
    {
      Editor::UnSelectAll(v4);
      for ( i = 0; ; ++i )
      {
        v10 = *(_DWORD *)(v8 + 28);
        if ( !v10 || i >= (*(_DWORD *)(v8 + 32) - v10) >> 2 )
          break;
        v11 = 4 * i;
        v12 = *(_DWORD *)(4 * i + *(_DWORD *)(v8 + 28));
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 28))(v12, *((_DWORD *)v4 + 512));
        v13 = *(_DWORD *)(v8 + 28);
        if ( !v13 || i >= (*(_DWORD *)(v8 + 32) - v13) >> 2 )
          invalid_parameter_noinfo();
        std::vector<Actor *>::push_back((_DWORD *)(*((_DWORD *)v4 + 512) + 3220), (int *)(v11 + *(_DWORD *)(v8 + 28)));
        v14 = *(_DWORD *)(v8 + 28);
        if ( !v14 || i >= (*(_DWORD *)(v8 + 32) - v14) >> 2 )
          invalid_parameter_noinfo();
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + *(_DWORD *)(v8 + 28)) + 40))(*(_DWORD *)(v11 + *(_DWORD *)(v8 + 28))) )
        {
          v15 = *(_DWORD *)(v8 + 28);
          if ( !v15 || i >= (*(_DWORD *)(v8 + 32) - v15) >> 2 )
            invalid_parameter_noinfo();
          v16 = (_DWORD *)(*((_DWORD *)v4 + 512) + 3236);
          v115 = *(int *)(v11 + *(_DWORD *)(v8 + 28));
          sub_10052AE0(v16, &v115);
        }
        v17 = *(_DWORD *)(v8 + 28);
        if ( !v17 || i >= (*(_DWORD *)(v8 + 32) - v17) >> 2 )
          invalid_parameter_noinfo();
        v18 = *(int *)(v11 + *(_DWORD *)(v8 + 28));
        v19 = *(_BYTE *)(v18 + 442) == 0;
        v115 = v18;
        if ( !v19 )
        {
          if ( !*(_BYTE *)(v18 + 441) )
          {
            *((_BYTE *)v4 + 2060) = 1;
            std::vector<Actor *>::push_back((_DWORD *)v4 + 561, &v115);
          }
          *(_BYTE *)(v18 + 441) = 1;
        }
      }
    }
    else
    {
      Editor::UnSelectAll(v4);
      for ( j = 0; ; ++j )
      {
        v21 = *(_DWORD *)(v8 + 28);
        if ( !v21 || j >= (*(_DWORD *)(v8 + 32) - v21) >> 2 )
          break;
        World::RemoveActor(*((World **)v4 + 512), *(struct Actor **)(*(_DWORD *)(v8 + 28) + 4 * j));
      }
    }
  }
  if ( *(_DWORD *)v8 == 8 )
  {
    Editor::UnSelectAll(v4);
    sub_1007FD50((_DWORD *)(v8 + 60));
  }
  if ( *(_DWORD *)v8 == 9 )
  {
    Editor::UnSelectAll(v4);
    sub_1007FFA0((_DWORD *)(v8 + 84));
    for ( k = 0; ; ++k )
    {
      v23 = *(_DWORD *)(v8 + 28);
      if ( !v23 || k >= (*(_DWORD *)(v8 + 32) - v23) >> 2 )
        break;
      *(float *)&v118 = 0.0;
      v119 = 0.0;
      *(float *)&v115 = 0.0;
      v116 = 0.0;
      if ( k >= (*(_DWORD *)(v8 + 32) - v23) >> 2 )
        invalid_parameter_noinfo();
      TerrainNode::UpdateVertex(
        *(_DWORD *)(*(_DWORD *)(v8 + 28) + 4 * k),
        1,
        0,
        1,
        0,
        1,
        1,
        v115,
        LODWORD(v116),
        v118,
        LODWORD(v119));
      v24 = *(_DWORD *)(v8 + 28);
      if ( !v24 || k >= (*(_DWORD *)(v8 + 32) - v24) >> 2 )
        invalid_parameter_noinfo();
      TerrainNode::UpdateIndex(*(TerrainNode **)(*(_DWORD *)(v8 + 28) + 4 * k));
      v25 = *(_DWORD *)(v8 + 28);
      if ( !v25 || k >= (*(_DWORD *)(v8 + 32) - v25) >> 2 )
        invalid_parameter_noinfo();
      TerrainNode::Compile(*(TerrainNode **)(*(_DWORD *)(v8 + 28) + 4 * k), 1, 1);
    }
  }
  if ( !*(_DWORD *)v8 )
  {
    Editor::UnSelectAll(v4);
    v125 = 0;
    v126 = 0;
    v127 = 0;
    v130 = 0;
    v26 = 0;
    *(float *)&v115 = 0.0;
    while ( 1 )
    {
      v27 = *(_DWORD *)(v8 + 28);
      v114 = v26;
      if ( !v27 || v26 >= (*(_DWORD *)(v8 + 32) - v27) >> 2 )
        break;
      if ( Editor::IsActor(v4, *(struct Actor **)(4 * v26 + *(_DWORD *)(v8 + 28))) )
      {
        v28 = *(_DWORD *)(v8 + 28);
        if ( v28 && v26 < (*(_DWORD *)(v8 + 32) - v28) >> 2 )
        {
          v29 = invalid_parameter_noinfo;
        }
        else
        {
          v29 = invalid_parameter_noinfo;
          invalid_parameter_noinfo();
        }
        sub_1007E290(&v124, (void *)(*(_DWORD *)(*(_DWORD *)(v8 + 28) + 4 * v26) + 868));
        v30 = *(_DWORD *)(v8 + 28);
        if ( !v30 || v26 >= (*(_DWORD *)(v8 + 32) - v30) >> 2 )
          v29();
        v31 = v126;
        v32 = (_DWORD *)(4 * v26 + *(_DWORD *)(v8 + 28));
        v33 = *(float *)&v126;
        if ( (unsigned int)v125 > v126 )
        {
          v29();
          v31 = v126;
        }
        v119 = v33;
        if ( LODWORD(v33) - 64 > v31 || LODWORD(v33) - 64 < (unsigned int)v125 )
          invalid_parameter_noinfo();
        v34 = (_DWORD *)(LODWORD(v33) - 64);
        if ( (unsigned int)v34 >= v126 )
          invalid_parameter_noinfo();
        v35 = (_DWORD *)(*v32 + 856);
        v34[12] = *v35;
        v34[13] = v35[1];
        v34[14] = v35[2];
        v36 = *(_DWORD *)(v8 + 12);
        if ( !v36 || (v37 = v114, v114 >= (unsigned int)((*(_DWORD *)(v8 + 16) - v36) >> 6)) )
        {
          invalid_parameter_noinfo();
          v37 = v114;
        }
        v38 = *(_DWORD *)(v8 + 28);
        v39 = v115 + *(_DWORD *)(v8 + 12);
        if ( !v38 || v37 >= (*(_DWORD *)(v8 + 32) - v38) >> 2 )
        {
          invalid_parameter_noinfo();
          v37 = v114;
        }
        v40 = *(_DWORD **)(*(_DWORD *)(v8 + 28) + 4 * v37);
        *(float *)&v120 = 0.0;
        v41 = v39 + 48;
        *(float *)&v121 = 0.0;
        v42 = *(_DWORD *)(v39 + 48);
        *(float *)&Source = 0.0;
        v40 += 214;
        *v40 = v42;
        v40[1] = *(_DWORD *)(v41 + 4);
        v40[2] = *(_DWORD *)(v41 + 8);
        v43 = *(_DWORD *)(v8 + 12);
        if ( !v43 || v37 >= (*(_DWORD *)(v8 + 16) - v43) >> 6 )
        {
          invalid_parameter_noinfo();
          v37 = v114;
        }
        v44 = (float *)(v115 + *(_DWORD *)(v8 + 12) + 48);
        *v44 = *(float *)&v120;
        v44[1] = *(float *)&v121;
        v44[2] = *(float *)&Source;
        v45 = *(_DWORD *)(v8 + 12);
        if ( !v45 || v37 >= (*(_DWORD *)(v8 + 16) - v45) >> 6 )
        {
          invalid_parameter_noinfo();
          v37 = v114;
        }
        v46 = *(_DWORD *)(v8 + 28);
        v47 = (const void *)(v115 + *(_DWORD *)(v8 + 12));
        if ( !v46 || v37 >= (*(_DWORD *)(v8 + 32) - v46) >> 2 )
        {
          invalid_parameter_noinfo();
          v37 = v114;
        }
        qmemcpy((void *)(*(_DWORD *)(*(_DWORD *)(v8 + 28) + 4 * v37) + 868), v47, 0x40u);
        v48 = *(_DWORD *)(v8 + 28);
        if ( !v48 || v37 >= (*(_DWORD *)(v8 + 32) - v48) >> 2 )
        {
          invalid_parameter_noinfo();
          v37 = v114;
        }
        v49 = *(int *)(4 * v37 + *(_DWORD *)(v8 + 28));
        v19 = *(_BYTE *)(v49 + 442) == 0;
        v118 = v49;
        if ( !v19 )
        {
          if ( !*(_BYTE *)(v49 + 441) )
          {
            v50 = (_DWORD *)((char *)v117 + 2244);
            *((_BYTE *)v117 + 2060) = 1;
            std::vector<Actor *>::push_back(v50, &v118);
          }
          *(_BYTE *)(v49 + 441) = 1;
        }
      }
      v115 += 64;
      v4 = v117;
      v26 = v114 + 1;
    }
    sub_10025B10(v8 + 8, (int)&v124);
    v130 = -1;
    if ( v125 )
      operator delete(v125);
  }
  if ( *(_DWORD *)v8 == 2 )
  {
    v51 = (_DWORD *)((char *)v4 + 2244);
    std::vector<Actor *>::vector<Actor *>(&v128, (int)v4 + 2244);
    v130 = 1;
    Editor::UnSelectAll(v4);
    v52 = 0;
    *(float *)&v115 = 0.0;
    while ( 1 )
    {
      v53 = *(_DWORD *)(v8 + 28);
      if ( !v53 || v52 >= (*(_DWORD *)(v8 + 32) - v53) >> 2 )
        break;
      v54 = 4 * v115;
      if ( Editor::IsActor(v117, *(struct Actor **)(*(_DWORD *)(v8 + 28) + 4 * v115)) )
      {
        v55 = *(_DWORD *)(v8 + 28);
        if ( !v55 || v115 >= (unsigned int)((*(_DWORD *)(v8 + 32) - v55) >> 2) )
          invalid_parameter_noinfo();
        v56 = *(_DWORD *)(v54 + *(_DWORD *)(v8 + 28));
        v19 = *(_BYTE *)(v56 + 442) == 0;
        v114 = v56;
        if ( !v19 )
        {
          if ( !*(_BYTE *)(v56 + 441) )
          {
            *((_BYTE *)v117 + 2060) = 1;
            v57 = v51[1];
            if ( v57 )
              v58 = (int)(v51[2] - v57) >> 2;
            else
              v58 = 0;
            if ( v57 && v58 < (int)(v51[3] - v57) >> 2 )
            {
              v59 = (int *)v51[2];
              *v59 = v56;
              v51[2] = v59 + 1;
            }
            else
            {
              v60 = (char *)v51[2];
              if ( v57 > (unsigned int)v60 )
                invalid_parameter_noinfo();
              std::vector<Actor *>::insert(v51, &v118, v51, v60, &v114);
              v56 = v114;
            }
          }
          *(_BYTE *)(v56 + 441) = 1;
        }
      }
      ++v115;
      v4 = v117;
      v52 = v115;
    }
    std::vector<Actor *>::operator=(v8 + 24, (int)&v128);
    v130 = -1;
    if ( v129 )
      operator delete(v129);
  }
  if ( *(_DWORD *)v8 == 3 )
  {
    Editor::UnSelectAll(v4);
    *(_DWORD *)v8 = 4;
    for ( m = 0; ; ++m )
    {
      v62 = *(_DWORD *)(v8 + 28);
      if ( !v62 || m >= (*(_DWORD *)(v8 + 32) - v62) >> 2 )
        break;
      if ( Editor::IsActor(v4, *(struct Actor **)(*(_DWORD *)(v8 + 28) + 4 * m)) )
      {
        v63 = *(_DWORD *)(v8 + 28);
        if ( !v63 || m >= (*(_DWORD *)(v8 + 32) - v63) >> 2 )
          invalid_parameter_noinfo();
        *(_BYTE *)(*(_DWORD *)(4 * m + *(_DWORD *)(v8 + 28)) + 816) = 0;
      }
    }
  }
  else if ( *(_DWORD *)v8 == 4 )
  {
    Editor::UnSelectAll(v4);
    *(_DWORD *)v8 = 3;
    for ( n = 0; ; ++n )
    {
      v65 = *(_DWORD *)(v8 + 28);
      if ( !v65 || n >= (*(_DWORD *)(v8 + 32) - v65) >> 2 )
        break;
      if ( Editor::IsActor(v4, *(struct Actor **)(*(_DWORD *)(v8 + 28) + 4 * n)) )
      {
        v66 = *(_DWORD *)(v8 + 28);
        if ( !v66 || n >= (*(_DWORD *)(v8 + 32) - v66) >> 2 )
          invalid_parameter_noinfo();
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 28) + 4 * n) + 816) = 1;
      }
    }
  }
  if ( *(_DWORD *)v8 == 5 )
  {
    Editor::UnSelectAll(v4);
    *(_DWORD *)v8 = 6;
    for ( ii = 0; ; ++ii )
    {
      v68 = *(_DWORD *)(v8 + 28);
      if ( !v68 || ii >= (*(_DWORD *)(v8 + 32) - v68) >> 2 )
        break;
      if ( Editor::IsActor(v4, *(struct Actor **)(*(_DWORD *)(v8 + 28) + 4 * ii)) )
      {
        v69 = *(_DWORD *)(v8 + 28);
        if ( !v69 || ii >= (*(_DWORD *)(v8 + 32) - v69) >> 2 )
          invalid_parameter_noinfo();
        *(_BYTE *)(*(_DWORD *)(4 * ii + *(_DWORD *)(v8 + 28)) + 817) = 0;
      }
    }
  }
  else if ( *(_DWORD *)v8 == 6 )
  {
    Editor::UnSelectAll(v4);
    *(_DWORD *)v8 = 5;
    for ( jj = 0; ; ++jj )
    {
      v71 = *(_DWORD *)(v8 + 28);
      if ( !v71 || jj >= (*(_DWORD *)(v8 + 32) - v71) >> 2 )
        break;
      if ( Editor::IsActor(v4, *(struct Actor **)(*(_DWORD *)(v8 + 28) + 4 * jj)) )
      {
        v72 = *(_DWORD *)(v8 + 28);
        if ( !v72 || jj >= (*(_DWORD *)(v8 + 32) - v72) >> 2 )
          invalid_parameter_noinfo();
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v8 + 28) + 4 * jj) + 817) = 1;
      }
    }
  }
  if ( *(_DWORD *)v8 == 7 )
  {
    if ( *(_BYTE *)(v8 + 4) )
    {
      Editor::UnSelectAll(v4);
      v125 = 0;
      v126 = 0;
      v127 = 0;
      v130 = 2;
      for ( kk = 0; ; ++kk )
      {
        v74 = *(_DWORD *)(v8 + 28);
        if ( !v74 || kk >= (*(_DWORD *)(v8 + 32) - v74) >> 2 )
          break;
        v75 = *(_DWORD *)(v8 + 28);
        if ( *(_DWORD *)(*(_DWORD *)(v75 + 4 * kk) + 716) )
        {
          if ( !v75 || kk >= (*(_DWORD *)(v8 + 32) - v75) >> 2 )
            invalid_parameter_noinfo();
          v76 = *(_DWORD *)(v8 + 28);
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v76 + 4 * kk) + 716) + 308) )
          {
            if ( !v76 || kk >= (*(_DWORD *)(v8 + 32) - v76) >> 2 )
              invalid_parameter_noinfo();
            ModelFrame::EnumerateMeshes(&v124);
          }
        }
      }
      *(float *)&v121 = 0.0;
      *(float *)&Source = 0.0;
      v123 = 0;
      LOBYTE(v130) = 3;
      for ( mm = 0; ; mm = (Editor *)((char *)mm + 1) )
      {
        v117 = mm;
        if ( !v125 || (unsigned int)mm >= (int)(v126 - (_DWORD)v125) >> 2 )
          break;
        Mesh = ModelFrame::GetMesh(*((ModelFrame **)v125 + (_DWORD)mm), 0);
        v79 = Mesh;
        v80 = *((_DWORD *)Mesh + 616);
        if ( v80 )
          v81 = (*((_DWORD *)Mesh + 617) - v80) >> 2;
        else
          v81 = 0;
        v82 = *(_DWORD *)(v8 + 56);
        if ( v82 < v81 )
        {
          if ( !v80 || v82 >= (*((_DWORD *)v79 + 617) - v80) >> 2 )
            invalid_parameter_noinfo();
          v83 = (int *)(*((_DWORD *)v79 + 616) + 4 * v82);
          v84 = (char *)Source;
          if ( *(float *)&v121 == 0.0
            || ((_BYTE *)Source - (_BYTE *)v121) >> 2 >= (unsigned int)((v123 - (int)v121) >> 2) )
          {
            if ( v121 > Source )
              invalid_parameter_noinfo();
            std::vector<Material *>::insert(&v120, &v115, &v120, v84, v83);
          }
          else
          {
            *(_DWORD *)Source = *v83;
            Source = v84 + 4;
          }
          v85 = *((_DWORD *)v79 + 616);
          v86 = *(_DWORD *)(v8 + 56);
          if ( !v85 || v86 >= (*((_DWORD *)v79 + 617) - v85) >> 2 )
            invalid_parameter_noinfo();
          Material::Release(*(Material **)(*((_DWORD *)v79 + 616) + 4 * v86));
          v87 = *(_DWORD *)(v8 + 44);
          if ( !v87 || !((*(_DWORD *)(v8 + 48) - v87) >> 2) )
            invalid_parameter_noinfo();
          v88 = *((_DWORD *)v79 + 616);
          v89 = *(int **)(v8 + 44);
          v90 = *(_DWORD *)(v8 + 56);
          if ( !v88 || v90 >= (*((_DWORD *)v79 + 617) - v88) >> 2 )
            invalid_parameter_noinfo();
          v91 = *v89;
          mm = v117;
          *(_DWORD *)(*((_DWORD *)v79 + 616) + 4 * v90) = v91;
        }
      }
      std::vector<Material *>::operator=(v8 + 40, (int)&v120);
      if ( *(float *)&v121 != 0.0 )
        operator delete(v121);
      *(float *)&v121 = 0.0;
      *(float *)&Source = 0.0;
      v123 = 0;
      v130 = -1;
      if ( v125 )
        operator delete(v125);
    }
    else
    {
      Editor::UnSelectAll(v4);
      v125 = 0;
      v126 = 0;
      v127 = 0;
      v130 = 4;
      for ( nn = 0; ; ++nn )
      {
        v93 = *(_DWORD *)(v8 + 28);
        if ( !v93 || nn >= (*(_DWORD *)(v8 + 32) - v93) >> 2 )
          break;
        v94 = *(_DWORD *)(v8 + 28);
        if ( *(_DWORD *)(*(_DWORD *)(v94 + 4 * nn) + 716) )
        {
          if ( !v94 || nn >= (*(_DWORD *)(v8 + 32) - v94) >> 2 )
            invalid_parameter_noinfo();
          v95 = *(_DWORD *)(v8 + 28);
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v95 + 4 * nn) + 716) + 308) )
          {
            if ( !v95 || nn >= (*(_DWORD *)(v8 + 32) - v95) >> 2 )
              invalid_parameter_noinfo();
            ModelFrame::EnumerateMeshes(&v124);
          }
        }
      }
      *(float *)&v121 = 0.0;
      *(float *)&Source = 0.0;
      v123 = 0;
      LOBYTE(v130) = 5;
      for ( i1 = 0; ; i1 = (Editor *)((char *)i1 + 1) )
      {
        v117 = i1;
        if ( !v125 || (unsigned int)i1 >= (int)(v126 - (_DWORD)v125) >> 2 )
          break;
        v97 = ModelFrame::GetMesh(*((ModelFrame **)v125 + (_DWORD)i1), 0);
        v98 = v97;
        v99 = *((_DWORD *)v97 + 616);
        if ( v99 )
          v100 = (*((_DWORD *)v97 + 617) - v99) >> 2;
        else
          v100 = 0;
        v101 = *(_DWORD *)(v8 + 56);
        if ( v101 < v100 )
        {
          if ( !v99 || v101 >= (*((_DWORD *)v98 + 617) - v99) >> 2 )
            invalid_parameter_noinfo();
          v102 = (int *)(*((_DWORD *)v98 + 616) + 4 * v101);
          v103 = (char *)Source;
          if ( *(float *)&v121 == 0.0
            || ((_BYTE *)Source - (_BYTE *)v121) >> 2 >= (unsigned int)((v123 - (int)v121) >> 2) )
          {
            if ( v121 > Source )
              invalid_parameter_noinfo();
            std::vector<Material *>::insert(&v120, &v115, &v120, v103, v102);
          }
          else
          {
            *(_DWORD *)Source = *v102;
            Source = v103 + 4;
          }
          v104 = *(_DWORD *)(v8 + 44);
          if ( !v104 || !((*(_DWORD *)(v8 + 48) - v104) >> 2) )
            invalid_parameter_noinfo();
          Material::AddRef(**(Material ***)(v8 + 44));
          v105 = *(_DWORD *)(v8 + 44);
          if ( !v105 || !((*(_DWORD *)(v8 + 48) - v105) >> 2) )
            invalid_parameter_noinfo();
          v106 = *((_DWORD *)v98 + 616);
          v107 = *(int **)(v8 + 44);
          v108 = *(_DWORD *)(v8 + 56);
          if ( !v106 || v108 >= (*((_DWORD *)v98 + 617) - v106) >> 2 )
            invalid_parameter_noinfo();
          v109 = *v107;
          i1 = v117;
          *(_DWORD *)(*((_DWORD *)v98 + 616) + 4 * v108) = v109;
        }
      }
      std::vector<Material *>::operator=(v8 + 40, (int)&v120);
      if ( *(float *)&v121 != 0.0 )
        operator delete(v121);
      *(float *)&v121 = 0.0;
      *(float *)&Source = 0.0;
      v123 = 0;
      v130 = -1;
      if ( v125 )
        operator delete(v125);
      v125 = 0;
      v126 = 0;
      v127 = 0;
    }
  }
  *(_BYTE *)(v8 + 4) = *(_BYTE *)(v8 + 4) == 0;
  v110 = a3[1];
  v111 = sub_10012CD0(v110, *(CREControl **)(v110 + 4), v8);
  sub_1000C2B0(a3, 1u);
  *(_DWORD *)(v110 + 4) = v111;
  *(_DWORD *)v111[1] = v111;
  v112 = *(_DWORD *)(a2 + 4);
  v113 = *(_DWORD ***)(v112 + 4);
  if ( v113 == (_DWORD **)v112 )
    invalid_parameter_noinfo();
  if ( v113 != *(_DWORD ***)(a2 + 4) || (invalid_parameter_noinfo(), v113 != *(_DWORD ***)(a2 + 4)) )
  {
    *v113[1] = *v113;
    (*v113)[1] = v113[1];
    sub_1000F2E0((int)(v113 + 2));
    operator delete(v113);
    --*(_DWORD *)(a2 + 8);
  }
  return 1;
}
