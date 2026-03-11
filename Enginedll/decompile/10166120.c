/*
 * func-name: ?BuildMesh@SurfaceNode@@QAE_NAAVSurfaceNodeMessage@@@Z
 * func-address: 0x10166120
 * callers: 0x101673d0
 * callees: 0x1000ce20, 0x1000d680, 0x10012aa0, 0x1009e990, 0x1009ed40, 0x1009f170, 0x100e3ef0, 0x100e4400, 0x100eeba0, 0x101189f0, 0x101377c0, 0x1013fff0, 0x101a2500, 0x101a2534, 0x101a28ec
 */

char __thiscall SurfaceNode::BuildMesh(SurfaceNode *this, struct SurfaceNodeMessage *a2)
{
  int Actor; // eax
  _DWORD *v5; // ecx
  unsigned int i; // esi
  int v7; // ebx
  void *v8; // eax
  bool v9; // zf
  Material **v10; // eax
  struct RenderDevice *v11; // eax
  struct Mesh *v12; // esi
  float *v13; // edi
  int v14; // eax
  int v15; // esi
  double v16; // st7
  double v17; // st6
  float *v18; // ebx
  double v19; // st7
  float *v20; // ebx
  float v21; // ecx
  float v22; // edx
  float v23; // ebx
  double v24; // st7
  float *v25; // eax
  double v26; // st7
  double v27; // st6
  double v28; // st6
  float v29; // ecx
  float v30; // edx
  double v31; // st7
  float v32; // eax
  double v33; // st7
  double v34; // st7
  float v35; // edx
  float v36; // ecx
  double v37; // st7
  float v38; // eax
  double v39; // st7
  double v40; // st7
  float v41; // edx
  float v42; // ecx
  double v43; // st7
  double v44; // st7
  float v45; // ecx
  float v46; // eax
  double v47; // st7
  float v48; // edx
  double v49; // st7
  float v50; // ecx
  double v51; // st7
  float v52; // eax
  double v53; // st7
  float v54; // eax
  float v55; // edx
  double v56; // st7
  float v57; // ecx
  double v58; // st7
  float v59; // eax
  float v60; // edx
  double v61; // st7
  float v62; // edx
  float v63; // ecx
  double v64; // st7
  float v65; // eax
  double v66; // st7
  float v67; // edx
  double v68; // st7
  float v69; // ecx
  double v70; // st7
  float v71; // ecx
  float v72; // eax
  double v73; // st7
  float v74; // edx
  double v75; // st7
  float v76; // ecx
  float v77; // eax
  double v78; // st7
  float v79; // eax
  float v80; // edx
  double v81; // st7
  float v82; // ecx
  double v83; // st7
  float v84; // eax
  double v85; // st7
  float v86; // edx
  double v87; // st7
  float v88; // edx
  float v89; // ecx
  double v90; // st7
  float v91; // eax
  float v92; // edx
  float v93; // ecx
  _DWORD *v94; // eax
  int v95; // ecx
  ModelFrame *v96; // eax
  ModelFrame *v97; // eax
  ModelFrame *v98; // ecx
  _DWORD v99[2]; // [esp+4h] [ebp-21Ch] BYREF
  void *(__thiscall ***v100)(type_info *__hidden, char); // [esp+Ch] [ebp-214h]
  int v101; // [esp+10h] [ebp-210h]
  float v102; // [esp+24h] [ebp-1FCh]
  float v103; // [esp+28h] [ebp-1F8h]
  float v104; // [esp+2Ch] [ebp-1F4h]
  float v105; // [esp+30h] [ebp-1F0h]
  float v106; // [esp+34h] [ebp-1ECh]
  char v107; // [esp+3Bh] [ebp-1E5h]
  float v108; // [esp+3Ch] [ebp-1E4h]
  float v109; // [esp+40h] [ebp-1E0h]
  float v110; // [esp+44h] [ebp-1DCh]
  float v111; // [esp+48h] [ebp-1D8h]
  float v112; // [esp+4Ch] [ebp-1D4h]
  float v113; // [esp+50h] [ebp-1D0h]
  float v114; // [esp+54h] [ebp-1CCh]
  int v115; // [esp+58h] [ebp-1C8h] BYREF
  float *v116; // [esp+5Ch] [ebp-1C4h]
  int v117; // [esp+60h] [ebp-1C0h]
  ModelFrame *v118; // [esp+64h] [ebp-1BCh]
  int v119; // [esp+68h] [ebp-1B8h] BYREF
  void *v120; // [esp+6Ch] [ebp-1B4h]
  int v121; // [esp+70h] [ebp-1B0h]
  int v122; // [esp+74h] [ebp-1ACh]
  int v123; // [esp+78h] [ebp-1A8h] BYREF
  void *v124; // [esp+7Ch] [ebp-1A4h]
  int v125; // [esp+80h] [ebp-1A0h]
  int v126; // [esp+84h] [ebp-19Ch]
  float v127; // [esp+88h] [ebp-198h]
  float v128; // [esp+8Ch] [ebp-194h]
  float v129; // [esp+90h] [ebp-190h]
  float v130; // [esp+94h] [ebp-18Ch]
  float v131; // [esp+98h] [ebp-188h]
  float v132; // [esp+9Ch] [ebp-184h]
  float v133; // [esp+A0h] [ebp-180h]
  float v134; // [esp+A4h] [ebp-17Ch]
  float v135; // [esp+A8h] [ebp-178h]
  float v136; // [esp+ACh] [ebp-174h]
  float v137; // [esp+B0h] [ebp-170h]
  float v138; // [esp+B4h] [ebp-16Ch]
  float v139; // [esp+B8h] [ebp-168h]
  float v140; // [esp+BCh] [ebp-164h]
  float v141; // [esp+C0h] [ebp-160h]
  struct Mesh *v142; // [esp+C4h] [ebp-15Ch]
  float v143; // [esp+C8h] [ebp-158h]
  float v144; // [esp+CCh] [ebp-154h]
  float v145; // [esp+D0h] [ebp-150h]
  float v146; // [esp+D4h] [ebp-14Ch]
  float v147; // [esp+D8h] [ebp-148h]
  float v148; // [esp+DCh] [ebp-144h]
  float v149; // [esp+E0h] [ebp-140h]
  float v150; // [esp+E4h] [ebp-13Ch]
  float v151; // [esp+E8h] [ebp-138h]
  float v152; // [esp+ECh] [ebp-134h]
  float v153; // [esp+F0h] [ebp-130h]
  float v154; // [esp+F4h] [ebp-12Ch]
  float v155; // [esp+F8h] [ebp-128h]
  float v156; // [esp+FCh] [ebp-124h]
  float v157; // [esp+100h] [ebp-120h]
  float v158; // [esp+104h] [ebp-11Ch]
  float v159; // [esp+108h] [ebp-118h]
  float v160; // [esp+10Ch] [ebp-114h]
  float v161; // [esp+110h] [ebp-110h]
  float v162; // [esp+114h] [ebp-10Ch]
  float v163; // [esp+118h] [ebp-108h]
  float v164; // [esp+11Ch] [ebp-104h]
  float v165; // [esp+120h] [ebp-100h]
  float v166; // [esp+124h] [ebp-FCh]
  float v167; // [esp+128h] [ebp-F8h]
  double v168[2]; // [esp+12Ch] [ebp-F4h] BYREF
  void *v169; // [esp+140h] [ebp-E0h]
  int v170; // [esp+144h] [ebp-DCh]
  int v171; // [esp+148h] [ebp-D8h]
  void *v172; // [esp+150h] [ebp-D0h]
  int v173; // [esp+154h] [ebp-CCh]
  float v174; // [esp+158h] [ebp-C8h]
  void *v175; // [esp+160h] [ebp-C0h]
  float v176; // [esp+164h] [ebp-BCh]
  float v177; // [esp+168h] [ebp-B8h]
  float v178; // [esp+16Ch] [ebp-B4h]
  float v179; // [esp+170h] [ebp-B0h]
  float v180; // [esp+174h] [ebp-ACh]
  float v181; // [esp+178h] [ebp-A8h]
  float v182; // [esp+17Ch] [ebp-A4h]
  float v183; // [esp+180h] [ebp-A0h]
  float v184; // [esp+184h] [ebp-9Ch]
  float v185; // [esp+188h] [ebp-98h]
  float v186; // [esp+18Ch] [ebp-94h]
  float v187; // [esp+190h] [ebp-90h]
  float v188[4]; // [esp+194h] [ebp-8Ch] BYREF
  float v189; // [esp+1A4h] [ebp-7Ch]
  float v190; // [esp+1A8h] [ebp-78h]
  float v191[3]; // [esp+1ACh] [ebp-74h] BYREF
  float v192; // [esp+1B8h] [ebp-68h]
  float v193; // [esp+1BCh] [ebp-64h]
  float v194; // [esp+1C8h] [ebp-58h]
  float v195; // [esp+1CCh] [ebp-54h]
  float v196; // [esp+1D0h] [ebp-50h]
  float v197; // [esp+1D4h] [ebp-4Ch]
  float v198; // [esp+1DCh] [ebp-44h] BYREF
  int v199; // [esp+1E0h] [ebp-40h] BYREF
  float v200; // [esp+1E8h] [ebp-38h]
  float v201; // [esp+1F4h] [ebp-2Ch]
  float v202; // [esp+200h] [ebp-20h]
  float v203; // [esp+20Ch] [ebp-14h]
  int v204; // [esp+21Ch] [ebp-4h]

  v101 = 0;
  v100 = &Terrain `RTTI Type Descriptor';
  Actor = World::FindActor(*((_DWORD **)this + 178), (int)this + 1172);
  v117 = _RTDynamicCast(Actor, 0, &Actor `RTTI Type Descriptor', &Terrain `RTTI Type Descriptor', 0);
  if ( !v117 )
    return 0;
  v107 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v5 = *(_DWORD **)(*((_DWORD *)this + 179) + 308);
  v204 = 0;
  if ( v5 )
  {
    v107 = 1;
    ModelFrame::GetMaterials(v5, &v119);
    for ( i = 0; v120 && i < (v121 - (int)v120) >> 2; ++i )
      Material::AddRef(*((Material **)v120 + i));
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 179) + 16))(*((_DWORD *)this + 179));
  v118 = (ModelFrame *)*((_DWORD *)a2 + 2);
  v7 = (int)v118;
  if ( v118 )
  {
    v124 = 0;
    v125 = 0;
    v126 = 0;
    LOBYTE(v204) = 1;
    if ( v107 )
    {
      std::vector<Material *>::operator=((int)&v123, (int)&v119);
    }
    else
    {
      v115 = *(_DWORD *)MaterialManager::Instance();
      std::vector<Material *>::push_back(&v123, &v115);
      v10 = (Material **)MaterialManager::Instance();
      Material::AddRef(*v10);
    }
    v11 = RenderDevice::Instance();
    v12 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v11 + 8))(v11);
    v102 = COERCE_FLOAT(v99);
    v142 = v12;
    std::vector<Material *>::vector<Material *>(v99, (int)&v123);
    (*(void (__thiscall **)(struct Mesh *, int, int, int, int, _DWORD, _DWORD, void *(__thiscall ***)(type_info *__hidden, char), int))(*(_DWORD *)v12 + 76))(
      v12,
      56,
      4,
      8 * v7,
      12 * v7,
      v99[0],
      v99[1],
      v100,
      v101);
    v13 = (float *)**((_DWORD **)a2 + 1);
    v14 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)v12 + 128))(v12, &v199);
    v116 = (float *)v14;
    if ( v7 )
    {
      v15 = v14 + 48;
      v144 = 1.0;
      v115 = v7;
      v133 = 1.0;
      v158 = 0.0;
      v138 = 0.0;
      v128 = 0.0;
      v165 = 0.0;
      v16 = 0.0;
      v163 = 1.0;
      v167 = 1.0;
      while ( 1 )
      {
        if ( v13 == *((float **)a2 + 1) )
        {
          invalid_parameter_noinfo();
          v16 = 0.0;
        }
        v9 = v13 == *((float **)a2 + 1);
        v108 = v13[3] + 0.0;
        v105 = v13[4] + 5000.0;
        v106 = v13[5] + 0.0;
        v191[0] = v108;
        v191[1] = v105;
        v191[2] = v106;
        if ( v9 )
        {
          invalid_parameter_noinfo();
          v16 = 0.0;
        }
        v108 = v13[3] - 0.0;
        v105 = v13[4] - 5000.0;
        v17 = v13[5] - 0.0;
        v169 = 0;
        v170 = 0;
        v171 = 0;
        v106 = v17;
        v188[0] = v108;
        v188[1] = v105;
        v188[2] = v106;
        v172 = 0;
        v173 = 0;
        v174 = 0.0;
        v182 = v16;
        v183 = v16;
        v175 = 0;
        v184 = v16;
        v176 = 0.0;
        v185 = v16;
        v177 = 0.0;
        v186 = v16;
        v181 = NAN;
        v187 = v16;
        v180 = 0.0;
        v178 = 0.0;
        v179 = 0.0;
        LOBYTE(v168[0]) = 0;
        v106 = v16;
        v109 = v16;
        v110 = 1.0;
        v111 = v16;
        LOBYTE(v204) = 4;
        if ( World::CollisionCheckRay(0, (int)v191, (int)v188, 12, v168, 1, 0) )
        {
          v18 = (float *)v172;
          if ( !v172 || !((v173 - (int)v172) / 12) )
          {
            invalid_parameter_noinfo();
            v18 = (float *)v172;
          }
          v19 = v18[1];
          v20 = (float *)v169;
          v106 = v19;
          if ( !v169 || !((v170 - (int)v169) / 12) )
          {
            invalid_parameter_noinfo();
            v20 = (float *)v169;
          }
          v21 = *v20;
          v22 = v20[1];
          v23 = v20[2];
          v109 = v21;
          v110 = v22;
        }
        else
        {
          v23 = v111;
        }
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v9 = v13 == *((float **)a2 + 1);
        v108 = 1.0 / (double)*(int *)(v117 + 1724) * (double)*((unsigned int *)v13 + 7);
        if ( v9 )
          invalid_parameter_noinfo();
        v24 = 1.0 / (double)*(int *)(v117 + 1724);
        LODWORD(v102) = *((_DWORD *)v13 + 7) + 1;
        v9 = v13 == *((float **)a2 + 1);
        v113 = v24 * (double)LODWORD(v102);
        if ( v9 )
          invalid_parameter_noinfo();
        v9 = v13 == *((float **)a2 + 1);
        v112 = v13[6] * 0.5;
        v114 = v106 - v112;
        v202 = v114;
        if ( v9 )
          invalid_parameter_noinfo();
        v25 = v116;
        v26 = v112;
        v105 = v13[3] + v112;
        v103 = v13[4] + v202;
        v104 = v13[5] + 0.0;
        v105 = v105 - *((float *)this + 214);
        v103 = v103 - *((float *)this + 215);
        v104 = v104 - *((float *)this + 216);
        v148 = v105;
        v27 = v103;
        *v116 = v105;
        v149 = v27;
        v28 = v104;
        v25[1] = v149;
        v29 = v110;
        v150 = v28;
        v143 = v113;
        v25[2] = v150;
        v30 = v143;
        v105 = -v26;
        *(float *)(v15 - 36) = v109;
        v31 = v105;
        v32 = v144;
        *(float *)(v15 - 32) = v29;
        v192 = v31;
        v33 = v114;
        *(float *)(v15 - 28) = v23;
        v193 = v33;
        *(float *)v15 = v30;
        *(float *)(v15 + 4) = v32;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v104 = v192 + v13[3];
        v103 = v13[4] + v193;
        v102 = v13[5] + 0.0;
        v104 = v104 - *((float *)this + 214);
        v103 = v103 - *((float *)this + 215);
        v102 = v102 - *((float *)this + 216);
        v159 = v104;
        v34 = v103;
        *(float *)(v15 + 8) = v104;
        v35 = v109;
        v160 = v34;
        v161 = v102;
        v36 = v102;
        v37 = v108;
        *(float *)(v15 + 12) = v160;
        v38 = v110;
        v132 = v37;
        v39 = v112;
        *(float *)(v15 + 20) = v35;
        v40 = v39 + v106;
        v41 = v133;
        *(float *)(v15 + 16) = v36;
        v42 = v132;
        *(float *)(v15 + 24) = v38;
        v106 = v40;
        v43 = v106;
        *(float *)(v15 + 28) = v23;
        v200 = v43;
        *(float *)(v15 + 56) = v42;
        *(float *)(v15 + 60) = v41;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v102 = v112 + v13[3];
        v104 = v13[4] + v200;
        v103 = v13[5] + 0.0;
        v102 = v102 - *((float *)this + 214);
        v104 = v104 - *((float *)this + 215);
        v103 = v103 - *((float *)this + 216);
        v154 = v102;
        v44 = v104;
        *(float *)(v15 + 64) = v102;
        v45 = v109;
        v155 = v44;
        v156 = v103;
        v46 = v103;
        v47 = v113;
        *(float *)(v15 + 68) = v155;
        v48 = v110;
        v157 = v47;
        v49 = v105;
        *(float *)(v15 + 76) = v45;
        v50 = v158;
        v196 = v49;
        v51 = v106;
        *(float *)(v15 + 72) = v46;
        v52 = v157;
        v197 = v51;
        *(float *)(v15 + 80) = v48;
        *(float *)(v15 + 84) = v23;
        *(float *)(v15 + 112) = v52;
        *(float *)(v15 + 116) = v50;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v102 = v13[3] + v196;
        v104 = v13[4] + v197;
        v103 = v13[5] + 0.0;
        v102 = v102 - *((float *)this + 214);
        v104 = v104 - *((float *)this + 215);
        v103 = v103 - *((float *)this + 216);
        v139 = v102;
        v53 = v104;
        *(float *)(v15 + 120) = v102;
        v54 = v109;
        v140 = v53;
        v141 = v103;
        v55 = v103;
        v56 = v108;
        *(float *)(v15 + 124) = v140;
        v57 = v110;
        v137 = v56;
        v58 = v114;
        *(float *)(v15 + 132) = v54;
        v59 = v138;
        v201 = v58;
        *(float *)(v15 + 128) = v55;
        v60 = v137;
        *(float *)(v15 + 136) = v57;
        *(float *)(v15 + 140) = v23;
        *(float *)(v15 + 168) = v60;
        *(float *)(v15 + 172) = v59;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v102 = v13[3] + 0.0;
        v104 = v13[4] + v201;
        v103 = v13[5] + v112;
        v102 = v102 - *((float *)this + 214);
        v104 = v104 - *((float *)this + 215);
        v103 = v103 - *((float *)this + 216);
        v145 = v102;
        v61 = v104;
        *(float *)(v15 + 176) = v102;
        v62 = v109;
        v146 = v61;
        v147 = v103;
        v63 = v103;
        v64 = v113;
        *(float *)(v15 + 180) = v146;
        v65 = v110;
        v162 = v64;
        v66 = v114;
        *(float *)(v15 + 188) = v62;
        v67 = v163;
        v194 = v66;
        v68 = v105;
        *(float *)(v15 + 184) = v63;
        v69 = v162;
        v195 = v68;
        *(float *)(v15 + 192) = v65;
        *(float *)(v15 + 196) = v23;
        *(float *)(v15 + 224) = v69;
        *(float *)(v15 + 228) = v67;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v102 = v13[3] + 0.0;
        v104 = v13[4] + v194;
        v103 = v13[5] + v195;
        v102 = v102 - *((float *)this + 214);
        v104 = v104 - *((float *)this + 215);
        v103 = v103 - *((float *)this + 216);
        v151 = v102;
        v70 = v104;
        *(float *)(v15 + 232) = v102;
        v71 = v109;
        v152 = v70;
        v153 = v103;
        v72 = v103;
        v73 = v108;
        *(float *)(v15 + 236) = v152;
        v74 = v110;
        v166 = v73;
        v75 = v106;
        *(float *)(v15 + 244) = v71;
        v76 = v167;
        v203 = v75;
        *(float *)(v15 + 240) = v72;
        v77 = v166;
        *(float *)(v15 + 248) = v74;
        *(float *)(v15 + 252) = v23;
        *(float *)(v15 + 280) = v77;
        *(float *)(v15 + 284) = v76;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v102 = v13[3] + 0.0;
        v104 = v13[4] + v203;
        v103 = v13[5] + v112;
        v102 = v102 - *((float *)this + 214);
        v104 = v104 - *((float *)this + 215);
        v103 = v103 - *((float *)this + 216);
        v129 = v102;
        v78 = v104;
        *(float *)(v15 + 288) = v102;
        v79 = v109;
        v130 = v78;
        v131 = v103;
        v80 = v103;
        v81 = v113;
        *(float *)(v15 + 292) = v130;
        v82 = v110;
        v127 = v81;
        v83 = v106;
        *(float *)(v15 + 300) = v79;
        v84 = v128;
        v189 = v83;
        v85 = v105;
        *(float *)(v15 + 296) = v80;
        v86 = v127;
        v190 = v85;
        *(float *)(v15 + 304) = v82;
        *(float *)(v15 + 308) = v23;
        *(float *)(v15 + 336) = v86;
        *(float *)(v15 + 340) = v84;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v102 = v13[3] + 0.0;
        v104 = v13[4] + v189;
        v103 = v13[5] + v190;
        v102 = v102 - *((float *)this + 214);
        v104 = v104 - *((float *)this + 215);
        v103 = v103 - *((float *)this + 216);
        v134 = v102;
        v87 = v104;
        *(float *)(v15 + 344) = v102;
        v88 = v109;
        v135 = v87;
        v136 = v103;
        v89 = v103;
        v90 = v108;
        *(float *)(v15 + 348) = v135;
        v91 = v110;
        v164 = v90;
        *(float *)(v15 + 356) = v88;
        v92 = v165;
        *(float *)(v15 + 352) = v89;
        v93 = v164;
        *(float *)(v15 + 360) = v91;
        *(float *)(v15 + 364) = v23;
        *(float *)(v15 + 392) = v93;
        *(float *)(v15 + 396) = v92;
        if ( v13 == *((float **)a2 + 1) )
          invalid_parameter_noinfo();
        v116 += 112;
        v13 = *(float **)v13;
        v15 += 448;
        LOBYTE(v204) = 1;
        if ( v175 )
          operator delete(v175);
        v175 = 0;
        v176 = 0.0;
        v177 = 0.0;
        if ( v172 )
          operator delete(v172);
        v172 = 0;
        v173 = 0;
        v174 = 0.0;
        if ( v169 )
          operator delete(v169);
        if ( !--v115 )
          break;
        v16 = 0.0;
      }
      v12 = v142;
      v7 = (int)v118;
    }
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v12 + 132))(v12);
    v94 = (_DWORD *)(*(int (__thiscall **)(struct Mesh *, float *))(*(_DWORD *)v12 + 136))(v12, &v198);
    if ( v7 )
    {
      v95 = 2;
      do
      {
        *v94 = v95 - 2;
        v94[2] = v95 - 1;
        v94[3] = v95 - 1;
        v94[5] = v95 + 1;
        v94[6] = v95 + 2;
        v94[7] = v95 + 4;
        v94[10] = v95 + 4;
        v94[1] = v95;
        v94[4] = v95;
        v94[8] = v95 + 3;
        v94[9] = v95 + 3;
        v94[11] = v95 + 5;
        v94 += 12;
        v95 += 8;
        --v7;
      }
      while ( v7 );
    }
    (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)v12 + 140))(v12);
    (*(void (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)v12 + 104))(v12, 0);
    v96 = (ModelFrame *)operator new(0x1C8u);
    v118 = v96;
    LOBYTE(v204) = 5;
    if ( v96 )
      v97 = ModelFrame::ModelFrame(v96, *((struct StaticModel **)this + 179));
    else
      v97 = 0;
    *(_DWORD *)(*((_DWORD *)this + 179) + 308) = v97;
    v98 = *(ModelFrame **)(*((_DWORD *)this + 179) + 308);
    LOBYTE(v204) = 1;
    ModelFrame::SetMesh(v98, v12, 1);
    StaticModel::UpdateWorldBBox(*((StaticModel **)this + 179));
    (*(void (__thiscall **)(_DWORD, char *, char *))(**((_DWORD **)this + 179) + 28))(
      *((_DWORD *)this + 179),
      (char *)this + 868,
      (char *)this + 856);
    if ( v124 )
      operator delete(v124);
    v8 = v120;
    v124 = 0;
    v125 = 0;
    v126 = 0;
    v9 = v120 == 0;
  }
  else
  {
    v8 = v120;
    v9 = v120 == 0;
  }
  if ( !v9 )
    operator delete(v8);
  return 1;
}
