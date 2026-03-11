/*
 * func-name: ?Mend@MeshOps@@UAE_NPAVMesh@@_NMM11@Z
 * func-address: 0x100eaad0
 * callers: none
 * callees: 0x1000d680, 0x100119b0, 0x1001f620, 0x10022210, 0x1002bf00, 0x10076ef0, 0x100e0750, 0x100e4400, 0x100ece10, 0x100ecea0, 0x100ed6f0, 0x100ee1b0, 0x100fb0a0, 0x100fb5d0, 0x100fd750, 0x101a24ac, 0x101a2500, 0x101a252e, 0x101a253a, 0x101a281a
 */

char __thiscall MeshOps::Mend(MeshOps *this, struct Mesh *a2, bool a3, float a4, float a5, bool a6, bool a7)
{
  int v8; // eax
  int (__thiscall *v9)(struct Mesh *, size_t *); // edx
  int v10; // edi
  unsigned __int8 (__thiscall *v11)(struct Mesh *); // edx
  int *v12; // eax
  int *v13; // esi
  int v14; // ecx
  double v15; // st7
  int v16; // eax
  void (__thiscall *v17)(struct Mesh *, _DWORD *, size_t); // eax
  int v18; // ebx
  int v19; // edi
  int *v20; // edx
  int v21; // edi
  unsigned int v22; // esi
  int v23; // eax
  _DWORD *v24; // ecx
  char *v25; // ecx
  int v26; // edi
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // edi
  int v30; // eax
  unsigned int v31; // esi
  _WORD *v32; // ebx
  _DWORD *v33; // ecx
  unsigned int v34; // eax
  char *v35; // esi
  bool v36; // cc
  char *v37; // ebx
  char *v38; // edi
  char *v39; // eax
  int v40; // ecx
  unsigned int i; // edi
  int v42; // ecx
  int v43; // edi
  void *v44; // eax
  char *v45; // esi
  char *v46; // ebx
  char *v47; // edi
  char *v48; // eax
  int v49; // ecx
  unsigned int v50; // edi
  unsigned int *j; // ebx
  unsigned int v52; // esi
  int v53; // edx
  void *v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // edx
  _DWORD *v57; // eax
  int v58; // edx
  unsigned int v59; // esi
  struct Mesh *v60; // edi
  unsigned int v61; // edi
  _DWORD *v62; // ebx
  unsigned int v63; // esi
  int v64; // ecx
  int v65; // ecx
  unsigned int k; // ebx
  _DWORD *v67; // ecx
  char *v68; // edx
  void *v69; // edi
  char *v70; // edx
  char *v71; // edi
  _DWORD v73[2]; // [esp+1Ch] [ebp-200h] BYREF
  int *v74; // [esp+24h] [ebp-1F8h]
  int v75; // [esp+28h] [ebp-1F4h]
  unsigned int v76; // [esp+38h] [ebp-1E4h]
  int v77; // [esp+3Ch] [ebp-1E0h] BYREF
  int v78; // [esp+40h] [ebp-1DCh] BYREF
  int v79; // [esp+44h] [ebp-1D8h]
  float v80; // [esp+48h] [ebp-1D4h] BYREF
  void *v81; // [esp+4Ch] [ebp-1D0h]
  void *v82; // [esp+50h] [ebp-1CCh]
  int v83; // [esp+54h] [ebp-1C8h]
  void *v84; // [esp+58h] [ebp-1C4h]
  unsigned int v85; // [esp+5Ch] [ebp-1C0h]
  int v86; // [esp+60h] [ebp-1BCh]
  int v87; // [esp+64h] [ebp-1B8h] BYREF
  void *v88; // [esp+68h] [ebp-1B4h]
  int v89; // [esp+6Ch] [ebp-1B0h]
  int v90; // [esp+70h] [ebp-1ACh]
  int v91; // [esp+74h] [ebp-1A8h] BYREF
  void *v92; // [esp+78h] [ebp-1A4h]
  int v93; // [esp+7Ch] [ebp-1A0h]
  int v94; // [esp+80h] [ebp-19Ch]
  size_t Size; // [esp+84h] [ebp-198h] BYREF
  void *v96; // [esp+88h] [ebp-194h]
  int v97; // [esp+8Ch] [ebp-190h] BYREF
  void *v98; // [esp+90h] [ebp-18Ch]
  int v99; // [esp+94h] [ebp-188h]
  int v100; // [esp+98h] [ebp-184h]
  int v101; // [esp+9Ch] [ebp-180h]
  float v102; // [esp+A0h] [ebp-17Ch] BYREF
  float v103; // [esp+A4h] [ebp-178h]
  float v104; // [esp+A8h] [ebp-174h]
  float v105; // [esp+ACh] [ebp-170h]
  float v106; // [esp+B0h] [ebp-16Ch]
  float v107; // [esp+B4h] [ebp-168h]
  float v108; // [esp+B8h] [ebp-164h]
  float v109; // [esp+BCh] [ebp-160h]
  float v110; // [esp+C0h] [ebp-15Ch]
  float v111; // [esp+C4h] [ebp-158h]
  float v112; // [esp+C8h] [ebp-154h]
  float v113; // [esp+CCh] [ebp-150h]
  float v114; // [esp+D0h] [ebp-14Ch]
  float v115; // [esp+D4h] [ebp-148h]
  int v116[2]; // [esp+D8h] [ebp-144h] BYREF
  int v117; // [esp+E0h] [ebp-13Ch] BYREF
  void *v118; // [esp+E4h] [ebp-138h]
  int v119; // [esp+E8h] [ebp-134h]
  int v120; // [esp+ECh] [ebp-130h]
  int v121; // [esp+F0h] [ebp-12Ch] BYREF
  int v122; // [esp+F4h] [ebp-128h] BYREF
  void *v123; // [esp+F8h] [ebp-124h]
  int v124; // [esp+FCh] [ebp-120h]
  int v125; // [esp+104h] [ebp-118h] BYREF
  _DWORD v126[14]; // [esp+10Ch] [ebp-110h] BYREF
  int v127[7]; // [esp+144h] [ebp-D8h] BYREF
  int v128; // [esp+160h] [ebp-BCh] BYREF
  void *v129; // [esp+164h] [ebp-B8h]
  void *v130; // [esp+168h] [ebp-B4h]
  int v131; // [esp+16Ch] [ebp-B0h]
  int v132; // [esp+170h] [ebp-ACh] BYREF
  void *v133; // [esp+174h] [ebp-A8h]
  void *Source; // [esp+178h] [ebp-A4h]
  int v135; // [esp+17Ch] [ebp-A0h]
  _BYTE v136[64]; // [esp+180h] [ebp-9Ch] BYREF
  int v137; // [esp+1C8h] [ebp-54h] BYREF
  int v138; // [esp+1D0h] [ebp-4Ch] BYREF
  _DWORD v139[14]; // [esp+1D8h] [ebp-44h] BYREF
  int v140; // [esp+218h] [ebp-4h]
  float v141; // [esp+22Ch] [ebp+10h]

  v84 = (void *)(*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 120))(a2);
  v8 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 116))(a2);
  v9 = *(int (__thiscall **)(struct Mesh *, size_t *))(*(_DWORD *)a2 + 128);
  v85 = 3 * v8;
  *(float *)&v78 = COERCE_FLOAT(v9(a2, &Size));
  v86 = (*(int (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 136))(a2, &v121);
  HIBYTE(v79) = v121 == 4;
  v10 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v11 = *(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 32);
  v140 = 0;
  if ( v11(a2) )
    (*(void (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 36))(a2, &v117);
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v15 = 0.0;
  LOBYTE(v140) = 3;
  if ( v84 )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)a2;
      v113 = v15;
      v17 = *(void (__thiscall **)(struct Mesh *, _DWORD *, size_t))(v16 + 148);
      v114 = v15;
      v115 = v15;
      v17(a2, v126, v78 + Size * v10);
      v108 = *(float *)&v126[12];
      v102 = *(float *)v126;
      v109 = *(float *)&v126[13];
      v105 = *(float *)&v126[3];
      v103 = *(float *)&v126[1];
      v104 = *(float *)&v126[2];
      v110 = *(float *)&v126[6];
      v106 = *(float *)&v126[4];
      v107 = *(float *)&v126[5];
      v111 = *(float *)&v126[7];
      v112 = *(float *)&v126[8];
      sub_100ED6F0((int)&v87, &v102);
      if ( ++v10 >= (unsigned int)v84 )
        break;
      v15 = 0.0;
    }
    v14 = v83;
    v13 = (int *)v82;
    v12 = (int *)v81;
  }
  v18 = 0;
  if ( v85 )
  {
    while ( 1 )
    {
      if ( HIBYTE(v79) )
      {
        v19 = *(_DWORD *)(v86 + 4 * v18);
        v77 = v19;
        if ( v12 && v13 - v12 < (unsigned int)((v14 - (int)v12) >> 2) )
        {
          *v13++ = v19;
          v82 = v13;
          goto LABEL_25;
        }
        if ( v12 > v13 )
          invalid_parameter_noinfo();
        v20 = v116;
      }
      else
      {
        v21 = *(unsigned __int16 *)(v86 + 2 * v18);
        v77 = v21;
        if ( v12 && v13 - v12 < (unsigned int)((v14 - (int)v12) >> 2) )
        {
          *v13++ = v21;
          v82 = v13;
          goto LABEL_25;
        }
        if ( v12 > v13 )
          invalid_parameter_noinfo();
        v20 = &v125;
      }
      sub_100ECEA0((int)v20, (int)&v80, v13, (int)&v77);
      v13 = (int *)v82;
LABEL_25:
      if ( ++v18 >= v85 )
        break;
      v14 = v83;
      v12 = (int *)v81;
    }
  }
  v141 = cos((a4 - 90.0) * 0.01745329300562541);
  sub_100FB5D0(v139);
  LOBYTE(v140) = 4;
  sub_100FD750((int)&v87, COERCE_FLOAT(&v80), COERCE_FLOAT(&v91), v141, v141, v141, a5, COERCE_FLOAT(a3), a7, a6);
  v22 = 0;
  if ( v88 )
    v23 = (v89 - (int)v88) / 56;
  else
    v23 = 0;
  v96 = operator new(Size * v23);
  v76 = 0;
  while ( v88 && v22 < (v89 - (int)v88) / 56 )
  {
    v24 = v92;
    if ( !v92 || v22 >= (v93 - (int)v92) >> 2 )
    {
      invalid_parameter_noinfo();
      v24 = v92;
    }
    memcpy((char *)v96 + Size * v22, (const void *)(v78 + Size * v24[v22]), Size);
    v25 = (char *)v88;
    v102 = 0.0;
    v103 = 0.0;
    v104 = 0.0;
    v105 = 0.0;
    v106 = 0.0;
    v107 = 0.0;
    v108 = 0.0;
    v109 = 0.0;
    v110 = 0.0;
    v111 = 0.0;
    v112 = 0.0;
    v113 = 0.0;
    v114 = 0.0;
    v115 = 0.0;
    if ( !v88 || (v26 = v89, v22 >= (v89 - (int)v88) / 56) )
    {
      invalid_parameter_noinfo();
      v26 = v89;
      v25 = (char *)v88;
    }
    v102 = *(float *)&v25[v76];
    v103 = *(float *)&v25[v76 + 4];
    v104 = *(float *)&v25[v76 + 8];
    if ( !v25 || v22 >= (v26 - (int)v25) / 56 )
    {
      invalid_parameter_noinfo();
      v26 = v89;
      v25 = (char *)v88;
    }
    v105 = *(float *)&v25[v76 + 12];
    v106 = *(float *)&v25[v76 + 16];
    v107 = *(float *)&v25[v76 + 20];
    if ( !v25 || v22 >= (v26 - (int)v25) / 56 )
    {
      invalid_parameter_noinfo();
      v26 = v89;
      v25 = (char *)v88;
    }
    v108 = *(float *)&v25[v76 + 32];
    v109 = *(float *)&v25[v76 + 36];
    v110 = *(float *)&v25[v76 + 40];
    if ( !v25 || v22 >= (v26 - (int)v25) / 56 )
    {
      invalid_parameter_noinfo();
      v26 = v89;
      v25 = (char *)v88;
    }
    v111 = *(float *)&v25[v76 + 44];
    v112 = *(float *)&v25[v76 + 48];
    v113 = *(float *)&v25[v76 + 52];
    if ( !v25 || v22 >= (v26 - (int)v25) / 56 )
    {
      invalid_parameter_noinfo();
      v26 = v89;
      v25 = (char *)v88;
    }
    v114 = *(float *)&v25[v76 + 24];
    if ( !v25 || v22 >= (v26 - (int)v25) / 56 )
    {
      invalid_parameter_noinfo();
      v25 = (char *)v88;
    }
    v27 = *(_DWORD *)a2;
    v115 = *(float *)&v25[v76 + 28];
    (*(void (__thiscall **)(struct Mesh *, char *, float *))(v27 + 144))(a2, (char *)v96 + Size * v22++, &v102);
    v76 += 56;
  }
  if ( v81 )
    v28 = ((_BYTE *)v82 - (_BYTE *)v81) >> 2;
  else
    v28 = 0;
  v29 = v28 < 0xFFFF ? 2 : 4;
  v77 = v29;
  if ( v81 )
    v30 = ((_BYTE *)v82 - (_BYTE *)v81) >> 2;
  else
    v30 = 0;
  v84 = operator new(v29 * v30);
  v31 = 0;
  v32 = v84;
  while ( 1 )
  {
    v33 = v81;
    if ( !v81 )
      break;
    v34 = ((_BYTE *)v82 - (_BYTE *)v81) >> 2;
    if ( v31 >= v34 )
      break;
    if ( v29 == 4 )
    {
      if ( v31 >= v34 )
      {
        invalid_parameter_noinfo();
        v33 = v81;
      }
      *((_DWORD *)v84 + v31) = v33[v31];
      ++v31;
      v32 += 2;
    }
    else
    {
      if ( v31 >= v34 )
      {
        invalid_parameter_noinfo();
        v33 = v81;
      }
      *v32 = v33[v31++];
      v32 = (_WORD *)((char *)v32 + v29);
    }
  }
  (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 140))(a2);
  (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 132))(a2);
  std::vector<AttributeRange>::vector<AttributeRange>(&v122, (int)a2 + 2476);
  v35 = (char *)*((_DWORD *)a2 + 621);
  v36 = *((_DWORD *)a2 + 620) <= (unsigned int)v35;
  LOBYTE(v140) = 5;
  if ( !v36 )
    invalid_parameter_noinfo();
  v37 = (char *)*((_DWORD *)a2 + 620);
  if ( (unsigned int)v37 > *((_DWORD *)a2 + 621) )
    invalid_parameter_noinfo();
  if ( v37 != v35 )
  {
    v38 = (char *)*((_DWORD *)a2 + 621);
    v39 = v35;
    if ( v35 != v38 )
    {
      v40 = v37 - v35;
      do
      {
        *(_DWORD *)&v39[v40] = *(_DWORD *)v39;
        *(_DWORD *)&v39[v40 + 4] = *((_DWORD *)v39 + 1);
        *(_DWORD *)&v39[v40 + 8] = *((_DWORD *)v39 + 2);
        *(_DWORD *)&v39[v40 + 12] = *((_DWORD *)v39 + 3);
        *(_DWORD *)&v39[v40 + 16] = *((_DWORD *)v39 + 4);
        v39 += 20;
      }
      while ( v39 != v38 );
    }
    *((_DWORD *)a2 + 621) = &v37[20 * ((v38 - v35) / 20)];
  }
  for ( i = 0; ; ++i )
  {
    v42 = *((_DWORD *)a2 + 616);
    if ( !v42 || i >= (*((_DWORD *)a2 + 617) - v42) >> 2 )
      break;
    Material::AddRef(*(Material **)(*((_DWORD *)a2 + 616) + 4 * i));
  }
  v116[0] = (int)v73;
  std::vector<Material *>::vector<Material *>(v73, (int)a2 + 2460);
  if ( v81 )
    v43 = ((_BYTE *)v82 - (_BYTE *)v81) >> 2;
  else
    v43 = 0;
  v44 = v88;
  if ( v88 )
    v44 = (void *)((v89 - (int)v88) / 56);
  (*(void (__thiscall **)(struct Mesh *, void *, void *, size_t, int, void *, int, _DWORD, _DWORD, int *, int))(*(_DWORD *)a2 + 72))(
    a2,
    v96,
    v84,
    Size,
    v77,
    v44,
    v43,
    v73[0],
    v73[1],
    v74,
    v75);
  v45 = (char *)*((_DWORD *)a2 + 621);
  if ( *((_DWORD *)a2 + 620) > (unsigned int)v45 )
    invalid_parameter_noinfo();
  v46 = (char *)*((_DWORD *)a2 + 620);
  if ( (unsigned int)v46 > *((_DWORD *)a2 + 621) )
    invalid_parameter_noinfo();
  if ( v46 != v45 )
  {
    v47 = (char *)*((_DWORD *)a2 + 621);
    v48 = v45;
    if ( v45 != v47 )
    {
      v49 = v46 - v45;
      do
      {
        *(_DWORD *)&v48[v49] = *(_DWORD *)v48;
        *(_DWORD *)&v48[v49 + 4] = *((_DWORD *)v48 + 1);
        *(_DWORD *)&v48[v49 + 8] = *((_DWORD *)v48 + 2);
        *(_DWORD *)&v48[v49 + 12] = *((_DWORD *)v48 + 3);
        *(_DWORD *)&v48[v49 + 16] = *((_DWORD *)v48 + 4);
        v48 += 20;
      }
      while ( v48 != v47 );
    }
    *((_DWORD *)a2 + 621) = &v46[20 * ((v47 - v45) / 20)];
  }
  v50 = 0;
  for ( j = (unsigned int *)((char *)v123 + 12); ; j += 5 )
  {
    v76 = (unsigned int)j;
    if ( !v123 )
      break;
    v52 = (v124 - (int)v123) / 20;
    if ( v50 >= v52 )
      break;
    v53 = *(j - 1);
    v54 = (void *)*(j - 2);
    v97 = *(j - 3);
    v55 = j[1];
    v99 = v53;
    v56 = *j;
    v98 = v54;
    v78 = v55 + v56 - 1;
    v57 = v92;
    if ( !v92 || (v58 = v93, v78 >= (unsigned int)((v93 - (int)v92) >> 2)) )
    {
      invalid_parameter_noinfo();
      v58 = v93;
      v57 = v92;
    }
    v77 = (int)&v57[v78];
    if ( v50 >= v52 )
    {
      invalid_parameter_noinfo();
      v58 = v93;
      v57 = v92;
    }
    v101 = *(_DWORD *)v77 - *j;
    if ( v50 >= v52 )
    {
      invalid_parameter_noinfo();
      v58 = v93;
      v57 = v92;
    }
    v59 = *j;
    if ( !v57 || v59 >= (v58 - (int)v57) >> 2 )
    {
      invalid_parameter_noinfo();
      v57 = v92;
    }
    v100 = v57[v59];
    std::vector<AttributeRange>::push_back((_DWORD *)a2 + 619, &v97);
    ++v50;
  }
  v60 = a2;
  (*(void (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)a2 + 104))(a2, 0);
  if ( (*(unsigned __int8 (__thiscall **)(struct Mesh *))(*(_DWORD *)v60 + 32))(v60) )
  {
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v61 = 0;
    LOBYTE(v140) = 6;
    v86 = 0;
    v85 = 0;
    while ( v118 && v61 < (v119 - (int)v118) / 124 )
    {
      v62 = (char *)v118 + v85;
      v77 = (int)v118 + v85;
      Mesh::SkinWeights::SkinWeights((Mesh::SkinWeights *)v127);
      LOBYTE(v140) = 7;
      std::string::operator=(v127, v62);
      qmemcpy(v136, v62 + 15, sizeof(v136));
      v63 = 0;
      v76 = 0;
      while ( 1 )
      {
        v64 = v62[8];
        if ( !v64 || v63 >= (v62[9] - v64) >> 2 )
          break;
        v65 = v62[12];
        v125 = *(_DWORD *)(v62[8] + 4 * v63);
        if ( !v65 || v63 >= (v62[13] - v65) >> 2 )
          invalid_parameter_noinfo();
        v78 = *(int *)(*(_DWORD *)(v77 + 48) + 4 * v76);
        for ( k = 0; k < std::vector<Model *>::size(&v91); ++k )
        {
          v67 = v92;
          if ( !v92 || k >= (v93 - (int)v92) >> 2 )
          {
            invalid_parameter_noinfo();
            v67 = v92;
          }
          if ( v67[k] == v125 )
          {
            v68 = (char *)v130;
            v116[0] = k;
            if ( v129 && ((_BYTE *)v130 - (_BYTE *)v129) >> 2 < (unsigned int)((v131 - (int)v129) >> 2) )
            {
              *(_DWORD *)v130 = k;
              v130 = v68 + 4;
            }
            else
            {
              v69 = v130;
              if ( v129 > v130 )
                invalid_parameter_noinfo();
              sub_100ECE10((int)&v137, (int)&v128, v69, (int)v116);
            }
            if ( v133 && ((_BYTE *)Source - (_BYTE *)v133) >> 2 < (unsigned int)((v135 - (int)v133) >> 2) )
            {
              v70 = (char *)Source + 4;
              *(float *)Source = *(float *)&v78;
              Source = v70;
            }
            else
            {
              v71 = (char *)Source;
              if ( v133 > Source )
                invalid_parameter_noinfo();
              sub_100E0750(&v132, &v138, &v132, v71, &v78);
            }
          }
        }
        v63 = ++v76;
        v62 = (_DWORD *)v77;
      }
      sub_100EE1B0((int)&v97, (struct Mesh::SkinWeights *)v127);
      LOBYTE(v140) = 6;
      if ( v133 )
        operator delete(v133);
      v133 = 0;
      Source = 0;
      v135 = 0;
      if ( v129 )
        operator delete(v129);
      v129 = 0;
      v130 = 0;
      v131 = 0;
      std::string::~string(v127);
      ++v86;
      v85 += 124;
      v61 = v86;
    }
    (*(void (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 40))(a2, &v97);
    LOBYTE(v140) = 5;
    if ( v98 )
    {
      v75 = v116[0];
      v74 = &v97;
      sub_100119B0((int)v98, v99);
      operator delete(v98);
    }
    v60 = a2;
    v98 = 0;
    v99 = 0;
    v100 = 0;
  }
  (*(void (__thiscall **)(struct Mesh *, int))(*(_DWORD *)v60 + 56))(v60, 1);
  operator delete[](v84);
  operator delete[](v96);
  if ( v123 )
    operator delete(v123);
  LOBYTE(v140) = 3;
  sub_100FB0A0(v139);
  if ( v92 )
    operator delete(v92);
  v92 = 0;
  v93 = 0;
  v94 = 0;
  if ( v81 )
    operator delete(v81);
  v81 = 0;
  v82 = 0;
  v83 = 0;
  if ( v88 )
    operator delete(v88);
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v140 = -1;
  if ( v118 )
  {
    v75 = v116[0];
    v74 = &v117;
    sub_100119B0((int)v118, v119);
    operator delete(v118);
  }
  return 1;
}
