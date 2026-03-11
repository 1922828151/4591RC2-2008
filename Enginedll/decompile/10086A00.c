/*
 * func-name: ?CombineSelectedOnly@Editor@@QAEXXZ
 * func-address: 0x10086a00
 * callers: 0x100ea5d0
 * callees: 0x10011750, 0x100117e0, 0x1002b5c0, 0x10059c90, 0x10077b70, 0x10078420, 0x1007e290, 0x10090770, 0x1009dd90, 0x1009ee50, 0x100e4400, 0x101189f0, 0x101372f0, 0x101780d4, 0x101786e0, 0x10178c20, 0x10179590, 0x1017eaef, 0x101a2500, 0x101a251c
 */

void __thiscall Editor::CombineSelectedOnly(Editor *this)
{
  Editor *v1; // ebp
  unsigned int i; // esi
  int v3; // ecx
  int v4; // eax
  unsigned int j; // ebx
  int v6; // ecx
  char *v7; // ebp
  _DWORD *v8; // ecx
  unsigned int v9; // ebp
  struct Mesh *v10; // eax
  int v11; // ecx
  char *v12; // eax
  char *v13; // edx
  char *v14; // edi
  unsigned int v15; // ebp
  ModelFrame **v16; // ecx
  struct Mesh *Mesh; // eax
  int v18; // ecx
  char *v19; // eax
  ModelFrame **v20; // ecx
  struct Mesh *v21; // eax
  int v22; // ecx
  char *v23; // esi
  int v24; // ebx
  unsigned int k; // edi
  ModelFrame *v26; // ebp
  struct Mesh *v27; // eax
  int v28; // ecx
  char *v29; // eax
  struct Mesh *v30; // eax
  int v31; // ecx
  char *v32; // esi
  _DWORD *v33; // ebp
  ModelFrame **v34; // ecx
  struct Mesh *v35; // eax
  int v36; // ecx
  char *v37; // esi
  ModelFrame **v38; // ecx
  struct Mesh *v39; // eax
  int v40; // ecx
  char *v41; // esi
  int *v42; // edi
  struct Mesh *v43; // esi
  unsigned int v44; // eax
  _DWORD *v45; // esi
  unsigned int v46; // edx
  int *v47; // eax
  char *v48; // ebp
  struct Mesh *v49; // eax
  int v50; // ecx
  char *v51; // eax
  int v52; // eax
  char *v53; // esi
  char *v54; // edx
  char *v55; // edi
  ModelFrame **v56; // ecx
  struct Mesh *v57; // eax
  int v58; // eax
  char *v59; // edi
  _DWORD *v60; // ecx
  int v61; // esi
  ModelFrame **v62; // eax
  struct Mesh *v63; // eax
  int v64; // eax
  int v65; // eax
  void *v66; // eax
  bool v67; // zf
  void *v68; // eax
  void *v69; // ebp
  int v70; // edi
  void *v71; // esi
  struct RenderDevice *v72; // eax
  int v73; // eax
  void (**v74)(void *, const char *, ...); // esi
  int v75; // eax
  ModelFrame *v76; // edi
  struct Mesh *v77; // esi
  struct Mesh *v78; // eax
  int v79; // ecx
  char *v80; // eax
  unsigned int v81; // edi
  unsigned int v82; // edi
  int m; // ebx
  int v84; // eax
  char *v85; // ecx
  int v86; // eax
  char *v87; // ebp
  ModelFrame *v88; // edi
  _DWORD *v89; // ecx
  Editor *v90; // ebx
  unsigned int n; // esi
  unsigned int v92; // ecx
  int v93; // ecx
  int v94; // eax
  int v95; // edx
  int v96; // ecx
  int v97; // ecx
  char *v98; // edi
  char *v99; // esi
  int v100; // eax
  char *v101; // ebx
  int v102; // eax
  char *v103; // ebp
  int v104; // esi
  unsigned int v105; // eax
  unsigned int v106; // edx
  int *v107; // eax
  char *v108; // esi
  int v109; // [esp+30h] [ebp-11Ch] BYREF
  ModelFrame *v110; // [esp+34h] [ebp-118h]
  int v111; // [esp+38h] [ebp-114h] BYREF
  int v112; // [esp+3Ch] [ebp-110h] BYREF
  void *v113; // [esp+40h] [ebp-10Ch]
  int v114; // [esp+44h] [ebp-108h]
  int v115; // [esp+48h] [ebp-104h]
  int v116; // [esp+4Ch] [ebp-100h] BYREF
  void *v117; // [esp+50h] [ebp-FCh]
  void *Source; // [esp+54h] [ebp-F8h]
  int v119; // [esp+58h] [ebp-F4h]
  unsigned int v120; // [esp+5Ch] [ebp-F0h]
  Editor *v121; // [esp+60h] [ebp-ECh]
  int v122; // [esp+64h] [ebp-E8h]
  int v123; // [esp+68h] [ebp-E4h]
  int v124; // [esp+6Ch] [ebp-E0h] BYREF
  void *v125; // [esp+70h] [ebp-DCh]
  int v126; // [esp+74h] [ebp-D8h]
  int v127; // [esp+78h] [ebp-D4h]
  int v128; // [esp+7Ch] [ebp-D0h] BYREF
  void *v129; // [esp+80h] [ebp-CCh]
  void *v130; // [esp+84h] [ebp-C8h]
  int v131; // [esp+88h] [ebp-C4h]
  unsigned int v132; // [esp+8Ch] [ebp-C0h]
  int v133; // [esp+90h] [ebp-BCh] BYREF
  int v134[2]; // [esp+94h] [ebp-B8h] BYREF
  int v135; // [esp+9Ch] [ebp-B0h] BYREF
  int v136; // [esp+A4h] [ebp-A8h] BYREF
  int v137; // [esp+ACh] [ebp-A0h] BYREF
  int v138; // [esp+B4h] [ebp-98h] BYREF
  float v139[16]; // [esp+BCh] [ebp-90h] BYREF
  _BYTE v140[68]; // [esp+FCh] [ebp-50h] BYREF
  int v141; // [esp+148h] [ebp-4h]

  v1 = this;
  v121 = this;
  v110 = 0;
  v122 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v141 = 2;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v123 = 0;
  v117 = 0;
  Source = 0;
  v119 = 0;
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)v1 + 562);
    v132 = i;
    if ( !v3 || i >= (*((_DWORD *)v1 + 563) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*((_DWORD *)v1 + 562) + 4 * i);
    if ( !v4 || !*(_DWORD *)(v4 + 716) )
    {
      if ( v117 )
        operator delete(v117);
      v117 = 0;
      Source = 0;
      v119 = 0;
      if ( v125 )
        operator delete(v125);
      v66 = v129;
      v125 = 0;
      v126 = 0;
      v127 = 0;
      v67 = v129 == 0;
      goto LABEL_180;
    }
    v113 = 0;
    v114 = 0;
    v115 = 0;
    LOBYTE(v141) = 3;
    ModelFrame::EnumerateMeshes(&v112);
    for ( j = 0; ; ++j )
    {
      v109 = j;
      if ( !v113 || j >= (v114 - (int)v113) >> 2 )
        break;
      if ( ModelFrame::GetMesh(*((ModelFrame **)v113 + j), 0) )
      {
        if ( v110 )
        {
          v15 = 0;
          v120 = 0;
          while ( 1 )
          {
            v16 = (ModelFrame **)v113;
            if ( !v113 || j >= (v114 - (int)v113) >> 2 )
            {
              invalid_parameter_noinfo();
              v16 = (ModelFrame **)v113;
            }
            Mesh = ModelFrame::GetMesh(v16[j], 0);
            v18 = *((_DWORD *)Mesh + 616);
            v19 = (char *)Mesh + 2460;
            if ( !v18 || v15 >= (*((_DWORD *)v19 + 2) - v18) >> 2 )
              break;
            v20 = (ModelFrame **)v113;
            if ( !v113 || j >= (v114 - (int)v113) >> 2 )
            {
              invalid_parameter_noinfo();
              v20 = (ModelFrame **)v113;
            }
            v21 = ModelFrame::GetMesh(v20[j], 0);
            v22 = *((_DWORD *)v21 + 616);
            v23 = (char *)v21 + 2460;
            if ( !v22 || v15 >= (*((_DWORD *)v21 + 617) - v22) >> 2 )
              invalid_parameter_noinfo();
            v24 = 4 * v120;
            Material::AddRef(*(Material **)(4 * v120 + *((_DWORD *)v23 + 1)));
            for ( k = 0; ; ++k )
            {
              v26 = v110;
              v27 = ModelFrame::GetMesh(v110, 0);
              v28 = *((_DWORD *)v27 + 616);
              v29 = (char *)v27 + 2460;
              if ( !v28 || k >= (*((_DWORD *)v29 + 2) - v28) >> 2 )
                goto LABEL_54;
              v30 = ModelFrame::GetMesh(v26, 0);
              v31 = *((_DWORD *)v30 + 616);
              v32 = (char *)v30 + 2460;
              if ( !v31 || k >= (*((_DWORD *)v30 + 617) - v31) >> 2 )
                invalid_parameter_noinfo();
              v33 = (_DWORD *)(*((_DWORD *)v32 + 1) + 4 * k);
              v34 = (ModelFrame **)v113;
              if ( !v113 || v109 >= (unsigned int)((v114 - (int)v113) >> 2) )
              {
                invalid_parameter_noinfo();
                v34 = (ModelFrame **)v113;
              }
              v35 = ModelFrame::GetMesh(v34[v109], 0);
              v36 = *((_DWORD *)v35 + 616);
              v37 = (char *)v35 + 2460;
              if ( !v36 || v120 >= (*((_DWORD *)v35 + 617) - v36) >> 2 )
                invalid_parameter_noinfo();
              if ( *v33 == *(_DWORD *)(v24 + *((_DWORD *)v37 + 1)) )
                break;
            }
            v111 = k;
            if ( k == -1 )
            {
              v26 = v110;
LABEL_54:
              v38 = (ModelFrame **)v113;
              if ( !v113 || v109 >= (unsigned int)((v114 - (int)v113) >> 2) )
              {
                invalid_parameter_noinfo();
                v38 = (ModelFrame **)v113;
              }
              v39 = ModelFrame::GetMesh(v38[v109], 0);
              v40 = *((_DWORD *)v39 + 616);
              v41 = (char *)v39 + 2460;
              if ( !v40 || v120 >= (*((_DWORD *)v39 + 617) - v40) >> 2 )
                invalid_parameter_noinfo();
              v42 = (int *)(v24 + *((_DWORD *)v41 + 1));
              v43 = ModelFrame::GetMesh(v26, 0);
              v44 = *((_DWORD *)v43 + 616);
              v45 = (_DWORD *)((char *)v43 + 2460);
              if ( v44 )
                v46 = (int)(v45[2] - v44) >> 2;
              else
                v46 = 0;
              if ( v44 && v46 < (int)(v45[3] - v44) >> 2 )
              {
                v47 = (int *)v45[2];
                *v47 = *v42;
                v45[2] = v47 + 1;
              }
              else
              {
                v48 = (char *)v45[2];
                if ( v44 > (unsigned int)v48 )
                  invalid_parameter_noinfo();
                std::vector<Material *>::insert(v45, &v138, v45, v48, v42);
                v26 = v110;
              }
              v49 = ModelFrame::GetMesh(v26, 0);
              v50 = *((_DWORD *)v49 + 616);
              v51 = (char *)v49 + 2460;
              if ( v50 )
                v52 = (*((_DWORD *)v51 + 2) - v50) >> 2;
              else
                v52 = 0;
              v53 = (char *)Source;
              v111 = v52 - 1;
              if ( v117 && ((_BYTE *)Source - (_BYTE *)v117) >> 2 < (unsigned int)((v119 - (int)v117) >> 2) )
              {
                v15 = ++v120;
                j = v109;
                *(_DWORD *)Source = v52 - 1;
                Source = v53 + 4;
                continue;
              }
              if ( v117 > Source )
                invalid_parameter_noinfo();
              sub_10059C90(&v116, &v136, &v116, v53, &v111);
              goto LABEL_84;
            }
            v54 = (char *)Source;
            if ( v117 && ((_BYTE *)Source - (_BYTE *)v117) >> 2 < (unsigned int)((v119 - (int)v117) >> 2) )
            {
              v15 = ++v120;
              j = v109;
              *(_DWORD *)Source = k;
              Source = v54 + 4;
              continue;
            }
            v55 = (char *)Source;
            if ( v117 > Source )
              invalid_parameter_noinfo();
            sub_10059C90(&v116, &v137, &v116, v55, &v111);
LABEL_84:
            v15 = ++v120;
            j = v109;
          }
        }
        else
        {
          v6 = *((_DWORD *)v1 + 562);
          v7 = (char *)v1 + 2244;
          if ( !v6 || i >= (*((_DWORD *)v7 + 2) - v6) >> 2 )
            invalid_parameter_noinfo();
          v122 = *(_DWORD *)(*((_DWORD *)v7 + 1) + 4 * i);
          v8 = v113;
          if ( !v113 || j >= (v114 - (int)v113) >> 2 )
          {
            invalid_parameter_noinfo();
            v8 = v113;
          }
          v110 = (ModelFrame *)v8[j];
          v9 = 0;
          while ( 1 )
          {
            v109 = v9;
            v10 = ModelFrame::GetMesh(v110, 0);
            v11 = *((_DWORD *)v10 + 616);
            v12 = (char *)v10 + 2460;
            if ( !v11 || v9 >= (*((_DWORD *)v12 + 2) - v11) >> 2 )
              break;
            v13 = (char *)Source;
            if ( v117 && ((_BYTE *)Source - (_BYTE *)v117) >> 2 < (unsigned int)((v119 - (int)v117) >> 2) )
            {
              *(_DWORD *)Source = v9;
              Source = v13 + 4;
              ++v9;
            }
            else
            {
              v14 = (char *)Source;
              if ( v117 > Source )
                invalid_parameter_noinfo();
              sub_10059C90(&v116, &v135, &v116, v14, &v109);
              ++v9;
            }
          }
        }
        v56 = (ModelFrame **)v113;
        if ( !v113 || j >= (v114 - (int)v113) >> 2 )
        {
          invalid_parameter_noinfo();
          v56 = (ModelFrame **)v113;
        }
        v57 = ModelFrame::GetMesh(v56[j], 0);
        v58 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v57 + 4))(v57);
        v59 = (char *)v130;
        v111 = v58;
        if ( v129 && ((_BYTE *)v130 - (_BYTE *)v129) >> 2 < (unsigned int)((v131 - (int)v129) >> 2) )
        {
          *(_DWORD *)v130 = v58;
          v130 = v59 + 4;
        }
        else
        {
          if ( v129 > v130 )
            invalid_parameter_noinfo();
          sub_10090770((int)v134, (int)&v128, v59, (int)&v111);
        }
        qmemcpy(v140, (char *)v110 + 164, 0x40u);
        sub_10178C20(v140);
        v60 = v113;
        if ( !v113 || j >= (v114 - (int)v113) >> 2 )
        {
          invalid_parameter_noinfo();
          v60 = v113;
        }
        v61 = v60[j] + 164;
        memset(v139, 0, sizeof(v139));
        sub_101786E0(1.0);
        v139[15] = 1.0;
        sub_10179590(v61, v140, v139);
        sub_1007E290(&v124, v139);
        v62 = (ModelFrame **)v113;
        if ( !v113 || j >= (v114 - (int)v113) >> 2 )
        {
          invalid_parameter_noinfo();
          v62 = (ModelFrame **)v113;
        }
        v63 = ModelFrame::GetMesh(v62[j], 0);
        v64 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v63 + 4))(v63);
        v65 = (*(int (__stdcall **)(int))(*(_DWORD *)v64 + 20))(v64);
        v123 += v65;
        v1 = v121;
        i = v132;
      }
    }
    LOBYTE(v141) = 2;
    if ( v113 )
      operator delete(v113);
    v113 = 0;
    v114 = 0;
    v115 = 0;
  }
  v68 = v125;
  if ( !v125 || !((v126 - (int)v125) >> 6) )
  {
    invalid_parameter_noinfo();
    v68 = v125;
  }
  v69 = v68;
  if ( !v129 )
  {
    v70 = 0;
LABEL_116:
    invalid_parameter_noinfo();
    goto LABEL_117;
  }
  v70 = ((_BYTE *)v130 - (_BYTE *)v129) >> 2;
  if ( !v70 )
    goto LABEL_116;
LABEL_117:
  v71 = v129;
  v72 = RenderDevice::Instance();
  v73 = D3DXConcatenateMeshes(v71, v70, (v123 >= 0xFFFF) | 0x220, v69, 0, 0, *((_DWORD *)v72 + 427), &v133);
  if ( v73 < 0 )
  {
    v74 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v75 = sub_1017EAEF(v73);
    (*v74)(
      dword_11249F38,
      " Error: %s, in: D3DXConcatenateMeshes(&meshes[0],meshes.size(),D3DXMESH_MANAGED|(totalVerts>=65535?D3DXMESH_32BIT:"
      "0), (D3DXMATRIX*)&matrices[0],NULL,NULL,RenderDevice::Instance()->dev,&pCombinedMesh)",
      v75);
  }
  v76 = v110;
  v77 = ModelFrame::GetMesh(v110, 0);
  v78 = ModelFrame::GetMesh(v76, 0);
  v79 = *((_DWORD *)v78 + 616);
  v80 = (char *)v78 + 2460;
  if ( v79 )
    v81 = (*((_DWORD *)v80 + 2) - v79) >> 2;
  else
    v81 = 0;
  (**(void (__thiscall ***)(struct Mesh *, int, int, _DWORD))v77)(v77, v133, 1, 0);
  std::vector<Material *>::resize((_DWORD *)v77 + 615, v81, 0);
  v82 = 0;
  for ( m = 0; ; m += 20 )
  {
    v84 = *((_DWORD *)v77 + 620);
    if ( !v84 || v82 >= (*((_DWORD *)v77 + 621) - v84) / 20 )
      break;
    v85 = (char *)v117;
    if ( !v117 || v82 >= ((_BYTE *)Source - (_BYTE *)v117) >> 2 )
    {
      invalid_parameter_noinfo();
      v85 = (char *)v117;
    }
    v86 = *((_DWORD *)v77 + 620);
    v87 = &v85[4 * v82];
    if ( !v86 || v82 >= (*((_DWORD *)v77 + 621) - v86) / 20 )
      invalid_parameter_noinfo();
    *(_DWORD *)(m + *((_DWORD *)v77 + 620)) = *(_DWORD *)v87;
    ++v82;
  }
  (*(void (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)v77 + 104))(v77, 0);
  (*(void (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)v77 + 56))(v77, 0);
  v88 = v110;
  v89 = (_DWORD *)*((_DWORD *)v110 + 113);
  if ( v89 )
  {
    sub_10077B70(v89);
    sub_10078420(*((_DWORD *)v88 + 113), (int)v88, (int)v77);
  }
  v90 = v121;
  for ( n = 0; ; ++n )
  {
    v92 = *((_DWORD *)v90 + 562);
    if ( !v92 || n >= (int)(*((_DWORD *)v90 + 563) - v92) >> 2 )
      break;
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v90 + 562) + 4 * n) + 441) = 0;
    v93 = *((_DWORD *)v90 + 562);
    if ( !v93 || n >= (*((_DWORD *)v90 + 563) - v93) >> 2 )
      invalid_parameter_noinfo();
    v94 = *((_DWORD *)v90 + 562);
    if ( *(_DWORD *)(v94 + 4 * n) != v122 )
    {
      if ( !v94 || n >= (*((_DWORD *)v90 + 563) - v94) >> 2 )
        invalid_parameter_noinfo();
      v95 = *((_DWORD *)v90 + 562);
      if ( *(_DWORD *)(v95 + 4 * n) )
      {
        if ( !v95 || n >= (*((_DWORD *)v90 + 563) - v95) >> 2 )
          invalid_parameter_noinfo();
        v96 = *(_DWORD *)(*((_DWORD *)v90 + 562) + 4 * n);
        if ( v96 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v96 + 80))(v96, 1);
        v97 = *((_DWORD *)v90 + 562);
        if ( !v97 || n >= (*((_DWORD *)v90 + 563) - v97) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)v90 + 562) + 4 * n) = 0;
      }
    }
  }
  v98 = (char *)*((_DWORD *)v90 + 563);
  if ( v92 > (unsigned int)v98 )
    invalid_parameter_noinfo();
  v99 = (char *)*((_DWORD *)v90 + 562);
  if ( (unsigned int)v99 > *((_DWORD *)v90 + 563) )
    invalid_parameter_noinfo();
  if ( v99 != v98 )
  {
    v100 = *((_DWORD *)v90 + 563);
    v101 = (char *)v90 + 2244;
    v102 = (v100 - (int)v98) >> 2;
    v103 = &v99[4 * v102];
    if ( v102 > 0 )
      memmove_s(v99, 4 * v102, v98, 4 * v102);
    *((_DWORD *)v101 + 2) = v103;
    v90 = v121;
  }
  v104 = v122;
  v67 = *(_BYTE *)(v122 + 442) == 0;
  v111 = v122;
  if ( !v67 )
  {
    if ( !*(_BYTE *)(v122 + 441) )
    {
      *((_BYTE *)v90 + 2060) = 1;
      v105 = *((_DWORD *)v90 + 562);
      if ( v105 )
        v106 = (int)(*((_DWORD *)v90 + 563) - v105) >> 2;
      else
        v106 = 0;
      if ( v105 && v106 < (int)(*((_DWORD *)v90 + 564) - v105) >> 2 )
      {
        v107 = (int *)*((_DWORD *)v90 + 563);
        *v107 = v104;
        *((_DWORD *)v90 + 563) = v107 + 1;
      }
      else
      {
        v108 = (char *)*((_DWORD *)v90 + 563);
        if ( v105 > (unsigned int)v108 )
          invalid_parameter_noinfo();
        std::vector<Actor *>::insert((_DWORD *)v90 + 561, v134, (_DWORD *)v90 + 561, v108, &v111);
        v104 = v122;
      }
    }
    *(_BYTE *)(v104 + 441) = 1;
  }
  World::RegenerateOcclusionTree(*((World **)v90 + 512));
  if ( v117 )
    operator delete(v117);
  v117 = 0;
  Source = 0;
  v119 = 0;
  if ( v125 )
    operator delete(v125);
  v66 = v129;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v67 = v129 == 0;
LABEL_180:
  if ( !v67 )
    operator delete(v66);
}
