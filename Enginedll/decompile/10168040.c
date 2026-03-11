/*
 * func-name: ?Combin@Terrain@@SA_NAAV?$vector@PAVTerrain@@V?$allocator@PAVTerrain@@@std@@@std@@@Z
 * func-address: 0x10168040
 * callers: 0x10084cf0
 * callees: 0x10011750, 0x10076ef0, 0x100977a0, 0x101381e0, 0x1015edf0, 0x10160440, 0x10162f00, 0x10167810, 0x1016b160, 0x1016b800, 0x101a2500, 0x101a2534
 */

char __cdecl Terrain::Combin(unsigned int a1)
{
  _DWORD *v1; // esi
  int v2; // ecx
  Terrain *v4; // edi
  int v5; // eax
  Terrain *v6; // edi
  Terrain **v7; // ebp
  bool v8; // cc
  Terrain **v9; // ebx
  Terrain **i; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // ebp
  char *v16; // ebx
  _DWORD *v17; // ebp
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // ecx
  int v22; // ebp
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // ebx
  float v37; // ebp
  _DWORD **v38; // ebp
  int v39; // ecx
  int v40; // ebx
  unsigned int v41; // eax
  float v42; // ebp
  unsigned int v43; // ebp
  int v44; // edx
  unsigned int v45; // ebx
  unsigned int j; // ebp
  unsigned int v47; // ebx
  int v48; // ecx
  int v49; // ecx
  int v50; // eax
  int v51; // edx
  int v52; // eax
  int v53; // ecx
  int v54; // edi
  int v55; // ecx
  int v56; // edi
  int v57; // ecx
  int v58; // ecx
  int v59; // edi
  int v60; // ecx
  int v61; // edi
  int v62; // ecx
  int v63; // ebx
  int v64; // edi
  int v65; // ecx
  int v66; // edi
  unsigned int k; // ebp
  int v68; // ecx
  unsigned int m; // ebp
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  unsigned int n; // esi
  int v74; // ecx
  int v75; // ecx
  int *v76; // ebx
  int v77; // ecx
  int v78; // eax
  int v79; // ecx
  int v80; // ebx
  double v81; // st7
  int v82; // ecx
  int v83; // [esp+4h] [ebp-38h] BYREF
  Terrain *v84; // [esp+8h] [ebp-34h]
  int v85; // [esp+Ch] [ebp-30h]
  float v86; // [esp+10h] [ebp-2Ch]
  int v87; // [esp+14h] [ebp-28h] BYREF
  float v88; // [esp+18h] [ebp-24h]
  float v89; // [esp+1Ch] [ebp-20h]
  int v90; // [esp+20h] [ebp-1Ch] BYREF
  void *v91; // [esp+24h] [ebp-18h]
  unsigned int v92; // [esp+28h] [ebp-14h]
  int v93; // [esp+2Ch] [ebp-10h]
  int v94; // [esp+38h] [ebp-4h]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 && (unsigned int)((*(_DWORD *)(a1 + 8) - v2) >> 2) > 1 )
  {
    v4 = (Terrain *)operator new(0x6C4u);
    a1 = (unsigned int)v4;
    v94 = 0;
    if ( v4 )
    {
      v5 = v1[1];
      if ( !v5 || !((v1[2] - v5) >> 2) )
        invalid_parameter_noinfo();
      v6 = Terrain::Terrain(v4, *(struct World **)(*(_DWORD *)v1[1] + 712));
      v84 = v6;
    }
    else
    {
      v6 = 0;
      v84 = 0;
    }
    v7 = *(Terrain ***)(*((_DWORD *)v6 + 178) + 3228);
    v8 = *(_DWORD *)(*((_DWORD *)v6 + 178) + 3224) <= (unsigned int)v7;
    v94 = -1;
    if ( !v8 )
      invalid_parameter_noinfo();
    v9 = *(Terrain ***)(*((_DWORD *)v6 + 178) + 3224);
    if ( (unsigned int)v9 > *(_DWORD *)(*((_DWORD *)v6 + 178) + 3228) )
      invalid_parameter_noinfo();
    for ( i = v9; i != v7; ++i )
    {
      if ( *i == v6 )
        break;
    }
    v11 = *((_DWORD *)v6 + 178);
    v12 = *(_DWORD *)(v11 + 3228);
    v13 = v11 + 3220;
    v14 = (v12 - (int)(i + 1)) >> 2;
    if ( v14 > 0 )
      memmove_s(i, 4 * v14, i + 1, 4 * v14);
    *(_DWORD *)(v13 + 8) -= 4;
    v15 = *((_DWORD *)v6 + 178);
    v16 = *(char **)(v15 + 3224);
    v17 = (_DWORD *)(v15 + 3220);
    v8 = (unsigned int)v16 <= v17[2];
    a1 = (unsigned int)v6;
    if ( !v8 )
      invalid_parameter_noinfo();
    std::vector<Actor *>::insert((_DWORD *)(*((_DWORD *)v6 + 178) + 3220), &v87, v17, v16, (int *)&a1);
    std::string::operator=((char *)v6 + 444, "TerrainCB");
    *(float *)&v87 = 0.0;
    *((_BYTE *)v6 + 440) = 1;
    v88 = 0.0;
    v89 = 0.0;
    *((float *)v6 + 214) = *(float *)&v87;
    *((_DWORD *)v6 + 326) = 0x7FFFFFFF;
    *((_DWORD *)v6 + 327) = 0x7FFFFFFF;
    *((float *)v6 + 215) = 0.0;
    *((float *)v6 + 216) = 0.0;
    *((_DWORD *)v6 + 324) = -1;
    *((_DWORD *)v6 + 325) = -1;
    v18 = v1[1];
    if ( !v18 || !((v1[2] - v18) >> 2) )
      invalid_parameter_noinfo();
    *((float *)v6 + 361) = *(float *)(*(_DWORD *)v1[1] + 1444);
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 1;
    a1 = 0;
    if ( std::vector<Model *>::size(v1) )
    {
      do
      {
        v19 = v1[1];
        v20 = a1;
        if ( !v19 || a1 >= (v1[2] - v19) >> 2 )
          invalid_parameter_noinfo();
        v21 = v1[1];
        v22 = 4 * v20;
        if ( *(_DWORD *)(*(_DWORD *)(v21 + 4 * v20) + 1304) < *((_DWORD *)v6 + 326) )
        {
          if ( !v21 || v20 >= (v1[2] - v21) >> 2 )
            invalid_parameter_noinfo();
          *((_DWORD *)v6 + 326) = *(_DWORD *)(*(_DWORD *)(v1[1] + 4 * v20) + 1304);
        }
        v23 = v1[1];
        if ( !v23 || v20 >= (v1[2] - v23) >> 2 )
          invalid_parameter_noinfo();
        v24 = v1[1];
        if ( *(_DWORD *)(*(_DWORD *)(v24 + 4 * v20) + 1308) < *((_DWORD *)v6 + 327) )
        {
          if ( !v24 || v20 >= (v1[2] - v24) >> 2 )
            invalid_parameter_noinfo();
          *((_DWORD *)v6 + 327) = *(_DWORD *)(*(_DWORD *)(v1[1] + 4 * v20) + 1308);
        }
        v25 = v1[1];
        if ( !v25 || v20 >= (v1[2] - v25) >> 2 )
          invalid_parameter_noinfo();
        v26 = v1[1];
        v83 = v26 + v22;
        if ( !v26 || v20 >= (v1[2] - v26) >> 2 )
          invalid_parameter_noinfo();
        v27 = v1[1];
        if ( *(_DWORD *)(*(_DWORD *)v83 + 1304) + *(_DWORD *)(*(_DWORD *)(v27 + 4 * v20) + 1296) > *((_DWORD *)v6 + 324) )
        {
          if ( !v27 || v20 >= (v1[2] - v27) >> 2 )
            invalid_parameter_noinfo();
          v83 = v1[1];
          v28 = v83;
          if ( !v83 || v20 >= (v1[2] - v83) >> 2 )
          {
            invalid_parameter_noinfo();
            v28 = v83;
          }
          *((_DWORD *)v6 + 324) = *(_DWORD *)(*(_DWORD *)(v28 + 4 * v20) + 1304)
                                + *(_DWORD *)(*(_DWORD *)(v1[1] + 4 * v20) + 1296);
        }
        v29 = v1[1];
        if ( !v29 || v20 >= (v1[2] - v29) >> 2 )
          invalid_parameter_noinfo();
        v30 = v1[1];
        v83 = v30 + v22;
        if ( !v30 || v20 >= (v1[2] - v30) >> 2 )
          invalid_parameter_noinfo();
        v31 = v1[1];
        if ( *(_DWORD *)(*(_DWORD *)v83 + 1308) + *(_DWORD *)(*(_DWORD *)(v31 + 4 * v20) + 1300) > *((_DWORD *)v6 + 325) )
        {
          if ( !v31 || v20 >= (v1[2] - v31) >> 2 )
            invalid_parameter_noinfo();
          v83 = v1[1];
          v32 = v83;
          if ( !v83 || v20 >= (v1[2] - v83) >> 2 )
          {
            invalid_parameter_noinfo();
            v32 = v83;
          }
          *((_DWORD *)v6 + 325) = *(_DWORD *)(*(_DWORD *)(v32 + 4 * v20) + 1308)
                                + *(_DWORD *)(*(_DWORD *)(v1[1] + 4 * v20) + 1300);
        }
        v33 = v1[1];
        if ( !v33 || v20 >= (v1[2] - v33) >> 2 )
          invalid_parameter_noinfo();
        v83 = *(_DWORD *)(v1[1] + 4 * v20) + 1352;
        sub_1016B800((int)&v90, (int)&v83);
        v34 = v1[1];
        if ( !v34 || v20 >= (v1[2] - v34) >> 2 )
          invalid_parameter_noinfo();
        v35 = v92;
        v36 = v22 + v1[1];
        v37 = *(float *)&v92;
        if ( (unsigned int)v91 > v92 )
        {
          invalid_parameter_noinfo();
          v35 = v92;
        }
        *(float *)&v87 = COERCE_FLOAT(&v90);
        v88 = v37;
        if ( LODWORD(v37) - 4 > v35 || LODWORD(v37) - 4 < (unsigned int)v91 )
          invalid_parameter_noinfo();
        v38 = (_DWORD **)(LODWORD(v37) - 4);
        if ( (unsigned int)v38 >= *(_DWORD *)(v87 + 8) )
          invalid_parameter_noinfo();
        **v38 = *(_DWORD *)(*(_DWORD *)v36 + 1304) << 6;
        v39 = v1[1];
        if ( !v39 || a1 >= (v1[2] - v39) >> 2 )
          invalid_parameter_noinfo();
        v40 = 4 * a1 + v1[1];
        v41 = v92;
        v42 = *(float *)&v92;
        if ( (unsigned int)v91 > v92 )
        {
          invalid_parameter_noinfo();
          v41 = v92;
        }
        *(float *)&v85 = COERCE_FLOAT(&v90);
        v86 = v42;
        if ( LODWORD(v42) - 4 > v41 || LODWORD(v42) - 4 < (unsigned int)v91 )
          invalid_parameter_noinfo();
        v43 = LODWORD(v42) - 4;
        if ( v43 >= *(_DWORD *)(v85 + 8) )
          invalid_parameter_noinfo();
        v44 = *(_DWORD *)(*(_DWORD *)v40 + 1308) << 6;
        v45 = a1 + 1;
        *(_DWORD *)(*(_DWORD *)v43 + 4) = v44;
        a1 = v45;
      }
      while ( v45 < std::vector<Model *>::size(v1) );
    }
    if ( sub_10160440(&v90, (void **)v6 + 338) )
    {
      for ( j = 0; j < std::vector<Model *>::size(v1); ++j )
      {
        v47 = 0;
        a1 = 0;
        while ( 1 )
        {
          v48 = v1[1];
          if ( !v48 || j >= (v1[2] - v48) >> 2 )
            invalid_parameter_noinfo();
          v49 = v1[1];
          v50 = *(_DWORD *)(v49 + 4 * j);
          v51 = *(_DWORD *)(v50 + 1196);
          v52 = v50 + 1192;
          if ( !v51 || v47 >= (*(_DWORD *)(v52 + 8) - v51) >> 2 )
            break;
          if ( !v49 || j >= (v1[2] - v49) >> 2 )
            invalid_parameter_noinfo();
          v53 = v1[1];
          v83 = v53 + 4 * j;
          if ( !v53 || j >= (v1[2] - v53) >> 2 )
            invalid_parameter_noinfo();
          v54 = *(_DWORD *)(v1[1] + 4 * j);
          v55 = *(_DWORD *)(v54 + 1196);
          v56 = v54 + 1192;
          if ( !v55 || v47 >= (*(_DWORD *)(v56 + 8) - v55) >> 2 )
            invalid_parameter_noinfo();
          v57 = v1[1];
          v85 = 4 * v47 + *(_DWORD *)(v56 + 4);
          if ( !v57 || j >= (v1[2] - v57) >> 2 )
            invalid_parameter_noinfo();
          v58 = v1[1];
          v87 = v58 + 4 * j;
          if ( !v58 || j >= (v1[2] - v58) >> 2 )
            invalid_parameter_noinfo();
          v59 = *(_DWORD *)(v1[1] + 4 * j);
          v60 = *(_DWORD *)(v59 + 1196);
          v61 = v59 + 1192;
          if ( !v60 || v47 >= (*(_DWORD *)(v61 + 8) - v60) >> 2 )
            invalid_parameter_noinfo();
          v62 = v1[1];
          v63 = 4 * a1 + *(_DWORD *)(v61 + 4);
          if ( !v62 || j >= (v1[2] - v62) >> 2 )
            invalid_parameter_noinfo();
          v64 = *(_DWORD *)(v1[1] + 4 * j);
          v65 = *(_DWORD *)(v64 + 1196);
          v66 = v64 + 1192;
          if ( !v65 || a1 >= (*(_DWORD *)(v66 + 8) - v65) >> 2 )
            invalid_parameter_noinfo();
          Terrain::RegistNode(
            v84,
            *(struct TerrainNode **)(*(_DWORD *)(v66 + 4) + 4 * a1++),
            *(_DWORD *)(*(_DWORD *)v63 + 1172) + *(_DWORD *)(*(_DWORD *)v87 + 1304),
            *(_DWORD *)(*(_DWORD *)v85 + 1176) + *(_DWORD *)(*(_DWORD *)v83 + 1308),
            1);
          v47 = a1;
          v6 = v84;
        }
      }
      for ( k = 0; k < std::vector<Model *>::size(v1); ++k )
      {
        v68 = v1[1];
        if ( !v68 || k >= (v1[2] - v68) >> 2 )
          invalid_parameter_noinfo();
        World::RemoveActor(*((World **)v6 + 178), *(struct Actor **)(v1[1] + 4 * k));
      }
      for ( m = 0; m < std::vector<Model *>::size(v1); ++m )
      {
        v70 = v1[1];
        if ( !v70 || m >= (v1[2] - v70) >> 2 )
          invalid_parameter_noinfo();
        v71 = v1[1];
        if ( *(_DWORD *)(v71 + 4 * m) )
        {
          if ( !v71 || m >= (v1[2] - v71) >> 2 )
            invalid_parameter_noinfo();
          v72 = *(_DWORD *)(v1[1] + 4 * m);
          if ( v72 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v72 + 80))(v72, 1);
        }
      }
      sub_1016B160((int)v1, 0, 0);
      for ( n = 0; ; ++n )
      {
        v74 = *((_DWORD *)v6 + 299);
        if ( !v74 || n >= (*((_DWORD *)v6 + 300) - v74) >> 2 )
          break;
        v75 = *((_DWORD *)v6 + 299);
        v76 = (int *)(4 * n + v75);
        if ( !v75 || n >= (*((_DWORD *)v6 + 300) - v75) >> 2 )
          invalid_parameter_noinfo();
        v77 = *((_DWORD *)v6 + 299);
        v78 = *v76;
        *(float *)&v85 = (double)*(int *)(*(_DWORD *)(v77 + 4 * n) + 1172) / (double)*((int *)v6 + 324);
        v86 = (double)*(int *)(v78 + 1176) / (double)*((int *)v6 + 325);
        if ( !v77 || n >= (*((_DWORD *)v6 + 300) - v77) >> 2 )
          invalid_parameter_noinfo();
        v79 = *((_DWORD *)v6 + 299);
        v80 = 4 * n + v79;
        if ( !v79 || n >= (*((_DWORD *)v6 + 300) - v79) >> 2 )
          invalid_parameter_noinfo();
        a1 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v6 + 299) + 4 * n) + 1172) + 1;
        v81 = (double)(int)a1 / (double)*((int *)v6 + 324);
        a1 = *(_DWORD *)(*(_DWORD *)v80 + 1176) + 1;
        v82 = *((_DWORD *)v6 + 299);
        *(float *)&v87 = v81;
        v88 = (double)(int)a1 / (double)*((int *)v6 + 325);
        if ( !v82 || n >= (*((_DWORD *)v6 + 300) - v82) >> 2 )
          invalid_parameter_noinfo();
        TerrainNode::UpdateVertex(
          *(_DWORD **)(*((_DWORD *)v6 + 299) + 4 * n),
          1,
          1,
          0,
          1,
          COERCE_FLOAT(1),
          COERCE_FLOAT(1),
          v85,
          v86,
          *(float *)&v87,
          v88);
      }
      if ( v91 )
        operator delete(v91);
      return 1;
    }
    else
    {
      SeriousWarning((char *)&byte_101CDFB4);
      if ( v91 )
        operator delete(v91);
      return 0;
    }
  }
  else
  {
    SeriousWarning((char *)&byte_101CDF90);
    return 0;
  }
}
