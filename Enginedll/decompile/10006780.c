/*
 * func-name: sub_10006780
 * func-address: 0x10006780
 * callers: 0x100085f0
 * callees: 0x10001ca0, 0x10002b60, 0x10002c50, 0x10005d50, 0x100092d0, 0x10009330, 0x10009450, 0x1000a170, 0x1000cc00, 0x1000e9c0, 0x10011140, 0x100111d0, 0x10011510, 0x100116a0, 0x10011a10, 0x10011e50, 0x10012400, 0x10012c20, 0x100977a0, 0x1009db20, 0x100ee2e0, 0x100f2ca0, 0x10136290, 0x10136530, 0x10174960, 0x101786e0, 0x10179840, 0x101a24ac, 0x101a2500, 0x101a251c, 0x101a252e, 0x101a2534, 0x101a253a
 */

char __thiscall sub_10006780(ILoad *this, FILE *Stream, int *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const char *v7; // eax
  unsigned int v9; // ebp
  void *v10; // edi
  int v11; // esi
  size_t v12; // esi
  Texture *v13; // eax
  Texture *v14; // esi
  void *v15; // eax
  char *v16; // esi
  char *v17; // esi
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  unsigned int v21; // edi
  char *v22; // ebp
  unsigned int v23; // ebx
  int v24; // esi
  int v25; // eax
  int v26; // eax
  void (__cdecl *v27)(); // edi
  void *v28; // esi
  void *v29; // ecx
  int v30; // esi
  int v31; // eax
  int v32; // edi
  _DWORD *v33; // ebp
  size_t v34; // edi
  char *v35; // ebp
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  int v40; // eax
  int v41; // esi
  char *v42; // edx
  size_t *v43; // ebp
  int v44; // eax
  int v45; // esi
  const void **v46; // edi
  unsigned int v47; // esi
  int v48; // ebx
  char *v49; // edi
  char *v50; // ebx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int j; // esi
  void *v55; // eax
  void *v56; // eax
  FILE *v57; // ebp
  int *v58; // ebx
  int v59; // edi
  int v60; // esi
  int v61; // edi
  int v62; // ebp
  int v63; // eax
  int v64; // esi
  int v65; // edi
  int v66; // esi
  int v67; // edi
  int v68; // ebp
  int v69; // eax
  int v70; // esi
  char v71; // al
  Model *v72; // ebp
  int v73; // ecx
  Model *v74; // eax
  int v75; // eax
  ILoad *v76; // edi
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // ecx
  ILoad *v82; // eax
  int *v83; // edi
  Model *v84; // eax
  struct ModelFrame **v85; // esi
  int v86; // ebx
  int v87; // esi
  int v88; // esi
  int v89; // ecx
  struct EditorVar *v90; // eax
  int v91; // ecx
  struct EditorVar *v92; // eax
  int v93; // ecx
  unsigned int v94; // edi
  int k; // ebp
  int v96; // edx
  int v97; // eax
  int v98; // esi
  int v99; // ecx
  int v100; // eax
  int v101; // esi
  int v102; // eax
  struct EditorVar *v103; // eax
  int v104; // ecx
  ILoad *v105; // edx
  int v106; // eax
  char v107; // [esp-40h] [ebp-294h] BYREF
  int v108; // [esp-3Ch] [ebp-290h]
  int v109; // [esp-38h] [ebp-28Ch]
  int v110; // [esp-34h] [ebp-288h]
  int v111; // [esp-30h] [ebp-284h]
  int v112; // [esp-2Ch] [ebp-280h]
  int v113; // [esp-28h] [ebp-27Ch]
  int v114; // [esp-24h] [ebp-278h]
  int v115[20]; // [esp-20h] [ebp-274h] BYREF
  float i; // [esp+30h] [ebp-224h] BYREF
  bool v117; // [esp+37h] [ebp-21Dh] BYREF
  void *Src; // [esp+38h] [ebp-21Ch] BYREF
  int v119; // [esp+3Ch] [ebp-218h] BYREF
  void *v120; // [esp+40h] [ebp-214h]
  int v121; // [esp+44h] [ebp-210h]
  int v122; // [esp+48h] [ebp-20Ch]
  int *v123; // [esp+4Ch] [ebp-208h]
  char v124; // [esp+52h] [ebp-202h] BYREF
  char v125; // [esp+53h] [ebp-201h] BYREF
  size_t Size; // [esp+54h] [ebp-200h] BYREF
  int v127; // [esp+58h] [ebp-1FCh] BYREF
  ILoad *v128; // [esp+5Ch] [ebp-1F8h]
  int Buffer; // [esp+60h] [ebp-1F4h] BYREF
  int v130; // [esp+64h] [ebp-1F0h] BYREF
  int v131; // [esp+68h] [ebp-1ECh] BYREF
  void *v132; // [esp+6Ch] [ebp-1E8h]
  int v133; // [esp+70h] [ebp-1E4h]
  int v134; // [esp+74h] [ebp-1E0h]
  int v135[7]; // [esp+78h] [ebp-1DCh] BYREF
  int v136; // [esp+94h] [ebp-1C0h] BYREF
  int v137[7]; // [esp+98h] [ebp-1BCh] BYREF
  _BYTE v138[28]; // [esp+B4h] [ebp-1A0h] BYREF
  _BYTE v139[28]; // [esp+D0h] [ebp-184h] BYREF
  void *v140; // [esp+ECh] [ebp-168h]
  char v141; // [esp+F0h] [ebp-164h]
  char v142; // [esp+F1h] [ebp-163h]
  _DWORD v143[4]; // [esp+F4h] [ebp-160h] BYREF
  _BYTE v144[28]; // [esp+104h] [ebp-150h] BYREF
  int v145[7]; // [esp+120h] [ebp-134h] BYREF
  int v146[7]; // [esp+13Ch] [ebp-118h] BYREF
  _BYTE v147[28]; // [esp+158h] [ebp-FCh] BYREF
  _BYTE v148[28]; // [esp+174h] [ebp-E0h] BYREF
  _BYTE v149[28]; // [esp+190h] [ebp-C4h] BYREF
  _BYTE v150[28]; // [esp+1ACh] [ebp-A8h] BYREF
  char v151[28]; // [esp+1C8h] [ebp-8Ch] BYREF
  int v152[4]; // [esp+1E4h] [ebp-70h] BYREF
  int v153[4]; // [esp+1F4h] [ebp-60h] BYREF
  char v154[4]; // [esp+204h] [ebp-50h] BYREF
  _DWORD v155[16]; // [esp+208h] [ebp-4Ch] BYREF
  int v156; // [esp+250h] [ebp-4h]

  v115[15] = (int)Stream;
  v115[14] = (int)v146;
  v128 = this;
  *a3 = 0;
  sub_10001CA0(v115[14], (FILE *)v115[15]);
  Buffer = 0;
  v156 = 0;
  fread(&Buffer, 4u, 1u, Stream);
  memset(v155, 0, sizeof(v155));
  sub_101786E0(1.0);
  *(float *)&v155[15] = 1.0;
  fread(v155, 0x40u, 1u, Stream);
  i = (double)*((int *)this + 13) / (double)*((int *)this + 12) * 60.0;
  if ( i > 60.0 )
    i = 60.0;
  v4 = *((_DWORD *)this + 23);
  if ( v4 && *(_DWORD *)(v4 + 3792) )
  {
    Src = &v115[9];
    std::operator+<char>(&v115[9], "Loading Scene Actor: ", v146);
    (*(void (__cdecl **)(float))(*((_DWORD *)this + 23) + 3792))(COERCE_FLOAT(LODWORD(i)));
  }
  ++*((_DWORD *)this + 13);
  v117 = Serializer::s_UseSkinning;
  Serializer::s_UseSkinning = 1;
  fread(v143, 0x10u, 1u, Stream);
  sub_10001CA0((int)v145, Stream);
  v115[15] = *((_DWORD *)this + 23);
  i = COERCE_FLOAT(&v115[8]);
  LOBYTE(v156) = 1;
  std::string::string(&v115[8], v145);
  v5 = Factory::create(v115[8], v115[9], v115[10], v115[11], v115[12], v115[13], v115[14], v115[15]);
  *a3 = v5;
  if ( !v5 )
  {
    v6 = std::operator+<char>(v135, "Can't create actor: ", v145);
    LOBYTE(v156) = 2;
    v7 = (const char *)std::string::c_str(v6);
    SeriousWarning(v7);
    LOBYTE(v156) = 1;
    std::string::~string(v135);
LABEL_8:
    LOBYTE(v156) = 0;
    std::string::~string(v145);
    v156 = -1;
    std::string::~string(v146);
    return 0;
  }
  v9 = 0;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  LOBYTE(v156) = 4;
  v130 = 0;
  fread(&v130, 4u, 1u, Stream);
  v10 = operator new(0x400u);
  Src = v10;
  memset(v10, 0, 0x400u);
  v11 = v130;
  i = COERCE_FLOAT(&v107);
  EditorVar::EditorVar((EditorVar *)&v107);
  std::vector<EditorVar>::resize(
    (int)&v119,
    v11,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115[0],
    v115[1],
    v115[2],
    v115[3],
    v115[4],
    v115[5],
    v115[6],
    v115[7],
    v115[8],
    v115[9],
    v115[10],
    v115[11],
    v115[12],
    v115[13],
    v115[14],
    v115[15]);
  sub_10012400((int)&v131, v130, 0);
  if ( v130 > 0 )
  {
    i = 0.0;
    do
    {
      std::string::string(v137);
      LOBYTE(v156) = 5;
      std::string::string(v138);
      LOBYTE(v156) = 6;
      std::string::string(v139);
      v141 = 1;
      v142 = 0;
      LOBYTE(v156) = 7;
      sub_10002C50(&v136, &Src, Stream, &Size, (int)v137);
      v12 = Size;
      if ( v136 == 13 )
      {
        v140 = Src;
        Src = v10;
      }
      else if ( v136 == 9 )
      {
        v13 = (Texture *)operator new(0x9Cu);
        v123 = (int *)v13;
        LOBYTE(v156) = 8;
        if ( v13 )
          v14 = Texture::Texture(v13);
        else
          v14 = 0;
        v10 = Src;
        LOBYTE(v156) = 7;
        std::string::operator=((char *)v14 + 100, (char *)Src + 100);
        v140 = v14;
      }
      else
      {
        v15 = operator new(Size);
        v10 = Src;
        v140 = v15;
        memcpy(v15, Src, v12);
      }
      v16 = (char *)v120;
      if ( !v120 || v9 >= (v121 - (int)v120) / 96 )
      {
        invalid_parameter_noinfo();
        v16 = (char *)v120;
      }
      v17 = &v16[LODWORD(i)];
      v115[15] = (int)v137;
      *(_DWORD *)v17 = v136;
      std::string::operator=(v17 + 4, v115[15]);
      std::string::operator=(v17 + 32, v138);
      std::string::operator=(v17 + 60, v139);
      *((_DWORD *)v17 + 22) = v140;
      v17[92] = v141;
      v17[93] = v142;
      v18 = v132;
      if ( !v132 || v9 >= (v133 - (int)v132) >> 2 )
      {
        invalid_parameter_noinfo();
        v18 = v132;
      }
      v18[v9] = Size;
      LOBYTE(v156) = 10;
      std::string::~string(v139);
      LOBYTE(v156) = 9;
      std::string::~string(v138);
      LOBYTE(v156) = 4;
      std::string::~string(v137);
      LODWORD(i) += 96;
      ++v9;
    }
    while ( (int)v9 < v130 );
  }
  operator delete[](v10);
  if ( *a3 )
  {
    std::string::operator=(*a3 + 444, v146);
    qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(&v136), 0x40u);
    v19 = (_DWORD *)*a3;
    v19[214] = v155[12];
    v19[215] = v155[13];
    v19[216] = v155[14];
    *(_BYTE *)(*a3 + 440) = 1;
    v20 = (_DWORD *)*a3;
    v20[64] = v143[0];
    v20 += 64;
    v20[1] = v143[1];
    v20[2] = v143[2];
    v20[3] = v143[3];
    v21 = v121;
    v22 = (char *)v120;
    Size = 0;
    Src = 0;
    while ( v22 && Size < (int)(v21 - (_DWORD)v22) / 96 )
    {
      v23 = 0;
      for ( i = 0.0; ; LODWORD(i) += 96 )
      {
        v24 = *a3;
        v25 = *(_DWORD *)(*a3 + 428);
        if ( !v25 || v23 >= (*(_DWORD *)(v24 + 432) - v25) / 96 )
          break;
        v26 = *(_DWORD *)(v24 + 428);
        if ( v26 && v23 < (*(_DWORD *)(v24 + 432) - v26) / 96 )
        {
          v27 = invalid_parameter_noinfo;
        }
        else
        {
          v27 = invalid_parameter_noinfo;
          invalid_parameter_noinfo();
        }
        std::string::string(v144, LODWORD(i) + *(_DWORD *)(v24 + 428) + 4);
        v28 = v120;
        LOBYTE(v156) = 11;
        if ( !v120 || Size >= (v121 - (int)v120) / 96 )
        {
          v27();
          v28 = v120;
        }
        if ( (unsigned __int8)std::operator==<char>((char *)Src + (_DWORD)v28 + 4, v144) )
        {
          v29 = v120;
          if ( !v120 || (v30 = v121, Size >= (v121 - (int)v120) / 96) )
          {
            v27();
            v30 = v121;
            v29 = v120;
          }
          v31 = *(_DWORD *)(*a3 + 428);
          v32 = *a3 + 424;
          v33 = (char *)Src + (_DWORD)v29;
          if ( !v31 || v23 >= (*(_DWORD *)(*a3 + 432) - v31) / 96 )
          {
            invalid_parameter_noinfo();
            v30 = v121;
            v29 = v120;
          }
          if ( *v33 == *(_DWORD *)(LODWORD(i) + *(_DWORD *)(v32 + 4)) )
          {
            v34 = Size;
            if ( !v29 || Size >= (v30 - (int)v29) / 96 )
            {
              invalid_parameter_noinfo();
              v30 = v121;
              v29 = v120;
            }
            v35 = (char *)Src;
            if ( *(_DWORD *)((char *)Src + (_DWORD)v29) == 11 )
            {
              if ( !v29 || v34 >= (v30 - (int)v29) / 96 )
              {
                invalid_parameter_noinfo();
                v29 = v120;
              }
              v36 = std::string::string(v135, *(_DWORD *)&v35[(_DWORD)v29 + 88]);
              v37 = *(_DWORD *)(*a3 + 428);
              v38 = *a3 + 424;
              LOBYTE(v156) = 12;
              if ( !v37 || v23 >= (*(_DWORD *)(v38 + 8) - v37) / 96 )
                invalid_parameter_noinfo();
              goto LABEL_59;
            }
            if ( !v29 || v34 >= (v30 - (int)v29) / 96 )
            {
              invalid_parameter_noinfo();
              v30 = v121;
              v29 = v120;
            }
            if ( *(_DWORD *)&v35[(_DWORD)v29] == 8 )
            {
              if ( !v29 || v34 >= (v30 - (int)v29) / 96 )
              {
                invalid_parameter_noinfo();
                v29 = v120;
              }
              v36 = std::string::string(v135, *(_DWORD *)&v35[(_DWORD)v29 + 88]);
              v39 = *(_DWORD *)(*a3 + 428);
              v38 = *a3 + 424;
              LOBYTE(v156) = 13;
              if ( !v39 || v23 >= (*(_DWORD *)(v38 + 8) - v39) / 96 )
                invalid_parameter_noinfo();
LABEL_59:
              std::string::operator=(*(_DWORD *)(96 * v23 + *(_DWORD *)(v38 + 4) + 88), v36);
              LOBYTE(v156) = 11;
              std::string::~string(v135);
            }
            else
            {
              if ( !v29 || v34 >= (v30 - (int)v29) / 96 )
              {
                invalid_parameter_noinfo();
                v30 = v121;
                v29 = v120;
              }
              if ( *(_DWORD *)&v35[(_DWORD)v29] == 9 )
              {
                if ( !v29 || v34 >= (v30 - (int)v29) / 96 )
                {
                  invalid_parameter_noinfo();
                  v29 = v120;
                }
                std::string::string(v135, *(_DWORD *)&v35[(_DWORD)v29 + 88] + 100);
                v40 = *(_DWORD *)(*a3 + 428);
                v41 = *a3 + 424;
                LOBYTE(v156) = 14;
                if ( !v40 || v23 >= (*(_DWORD *)(v41 + 8) - v40) / 96 )
                  invalid_parameter_noinfo();
                std::string::operator=(*(_DWORD *)(96 * v23 + *(_DWORD *)(v41 + 4) + 88) + 100, v135);
                LOBYTE(v156) = 11;
                std::string::~string(v135);
              }
              else
              {
                v42 = (char *)v132;
                if ( !v132 || v34 >= (v133 - (int)v132) >> 2 )
                {
                  invalid_parameter_noinfo();
                  v30 = v121;
                  v29 = v120;
                  v42 = (char *)v132;
                }
                v43 = (size_t *)&v42[4 * v34];
                if ( !v29 || v34 >= (v30 - (int)v29) / 96 )
                {
                  invalid_parameter_noinfo();
                  v29 = v120;
                }
                v44 = *(_DWORD *)(*a3 + 428);
                v45 = *a3 + 424;
                v46 = (const void **)((char *)Src + (_DWORD)v29);
                if ( !v44 || v23 >= (*(_DWORD *)(*a3 + 432) - v44) / 96 )
                  invalid_parameter_noinfo();
                memcpy(*(void **)(96 * v23 + *(_DWORD *)(v45 + 4) + 88), v46[22], *v43);
              }
            }
            LOBYTE(v156) = 4;
            std::string::~string(v144);
            v21 = v121;
            v22 = (char *)v120;
            break;
          }
        }
        LOBYTE(v156) = 4;
        std::string::~string(v144);
        v21 = v121;
        v22 = (char *)v120;
        ++v23;
      }
      ++Size;
      Src = (char *)Src + 96;
    }
  }
  else
  {
    v21 = v121;
    v22 = (char *)v120;
  }
  v47 = 0;
  v48 = 0;
  while ( v22 && v47 < (int)(v21 - (_DWORD)v22) / 96 )
  {
    if ( *(_DWORD *)&v22[v48 + 88] )
    {
      if ( v47 >= (int)(v21 - (_DWORD)v22) / 96 )
      {
        invalid_parameter_noinfo();
        v22 = (char *)v120;
      }
      operator delete(*(void **)&v22[v48 + 88]);
      v49 = (char *)v120;
      if ( !v120 || v47 >= (v121 - (int)v120) / 96 )
      {
        invalid_parameter_noinfo();
        v49 = (char *)v120;
      }
      *(_DWORD *)&v49[v48 + 88] = 0;
      v21 = v121;
      v22 = (char *)v120;
    }
    ++v47;
    v48 += 96;
  }
  v50 = (char *)v21;
  if ( (unsigned int)v22 > v21 )
  {
    invalid_parameter_noinfo();
    v21 = v121;
    v22 = (char *)v120;
    if ( (unsigned int)v120 > v121 )
    {
      invalid_parameter_noinfo();
      v21 = v121;
    }
  }
  if ( v22 != v50 )
  {
    LOBYTE(i) = 0;
    *(float *)&v115[15] = i;
    LOBYTE(Src) = 0;
    v115[14] = (int)Src;
    v115[13] = (int)v123;
    sub_1000A170(v50, v21, v22);
    v115[9] = (int)v123;
    v115[8] = (int)&v119;
    sub_1000CC00(&v22[96 * ((int)(v21 - (_DWORD)v50) / 96)], v121);
    v121 = (int)&v22[96 * ((int)(v21 - (_DWORD)v50) / 96)];
  }
  fread((void *)(*a3 + 632), 0x40u, 1u, Stream);
  ScriptData::ScriptData((ScriptData *)v148);
  LOBYTE(v156) = 15;
  v125 = 0;
  fread(&v125, 1u, 1u, Stream);
  if ( v125 )
  {
    v51 = sub_10001CA0((int)v135, Stream);
    LOBYTE(v156) = 16;
    std::string::operator=(v148, v51);
    LOBYTE(v156) = 15;
    std::string::~string(v135);
    v52 = sub_10001CA0((int)v135, Stream);
    LOBYTE(v156) = 17;
    std::string::operator=(v149, v52);
    LOBYTE(v156) = 15;
    std::string::~string(v135);
    v53 = sub_10001CA0((int)v135, Stream);
    LOBYTE(v156) = 18;
    std::string::operator=(v150, v53);
    LOBYTE(v156) = 15;
    std::string::~string(v135);
    fread(v154, 1u, 1u, Stream);
    i = 0.0;
    fread(&i, 4u, 1u, Stream);
    for ( j = 0; j < SLODWORD(i); ++j )
    {
      v55 = (void *)sub_10001CA0((int)v135, Stream);
      LOBYTE(v156) = 19;
      sub_100116A0((int)v152, v55);
      LOBYTE(v156) = 15;
      std::string::~string(v135);
      v56 = (void *)sub_10001CA0((int)v135, Stream);
      LOBYTE(v156) = 20;
      sub_100116A0((int)v153, v56);
      LOBYTE(v156) = 15;
      std::string::~string(v135);
    }
  }
  v57 = Stream;
  v127 = 0;
  fread(&v127, 4u, 1u, Stream);
  v58 = a3;
  fread((void *)(*a3 + 332), 1u, 1u, Stream);
  *(_BYTE *)(*a3 + 332) = *(_BYTE *)(*a3 + 332) == 0;
  v59 = v127;
  v60 = *a3 + 336;
  v123 = &v115[9];
  std::string::string(&v115[9]);
  sub_1000E9C0(v60, v59, v115[9], v115[10], v115[11], v115[12], v115[13], v115[14], v115[15]);
  v61 = 0;
  if ( v127 > 0 )
  {
    i = 0.0;
    do
    {
      v62 = sub_10001CA0((int)v135, Stream);
      v63 = *(_DWORD *)(*a3 + 340);
      v64 = *a3 + 336;
      LOBYTE(v156) = 21;
      if ( !v63 || v61 >= (unsigned int)((*(_DWORD *)(v64 + 8) - v63) / 28) )
        invalid_parameter_noinfo();
      std::string::operator=(LODWORD(i) + *(_DWORD *)(v64 + 4), v62);
      LOBYTE(v156) = 15;
      std::string::~string(v135);
      LODWORD(i) += 28;
      ++v61;
    }
    while ( v61 < v127 );
    v57 = Stream;
  }
  fread(&v127, 4u, 1u, v57);
  v65 = v127;
  v66 = *a3 + 400;
  v123 = &v115[9];
  std::string::string(&v115[9]);
  sub_1000E9C0(v66, v65, v115[9], v115[10], v115[11], v115[12], v115[13], v115[14], v115[15]);
  v67 = 0;
  if ( v127 > 0 )
  {
    i = 0.0;
    do
    {
      v68 = sub_10001CA0((int)v135, Stream);
      v69 = *(_DWORD *)(*a3 + 404);
      v70 = *a3 + 400;
      LOBYTE(v156) = 22;
      if ( !v69 || v67 >= (unsigned int)((*(_DWORD *)(v70 + 8) - v69) / 28) )
        invalid_parameter_noinfo();
      std::string::operator=(LODWORD(i) + *(_DWORD *)(v70 + 4), v68);
      LOBYTE(v156) = 15;
      std::string::~string(v135);
      LODWORD(i) += 28;
      ++v67;
    }
    while ( v67 < v127 );
  }
  v71 = 0;
  v72 = 0;
  Serializer::s_UseSkinning = v117;
  v124 = 0;
  if ( !Buffer )
  {
    fread(&v124, 1u, 1u, Stream);
    v71 = v124;
  }
  v73 = *a3;
  if ( *a3 && !Buffer || v71 && v154[0] )
  {
    if ( v71 )
    {
      v74 = (Model *)operator new(0x1C8u);
      v123 = (int *)v74;
      LOBYTE(v156) = 23;
      if ( v74 )
        v72 = Model::Model(v74);
      LOBYTE(v156) = 15;
      v75 = std::string::string(v147, "_");
      v76 = v128;
      LOBYTE(v156) = 24;
      v77 = std::operator+<char>(v144, (char *)v128 + 60, v75);
      v115[12] = *a3 + 444;
      LOBYTE(v156) = 25;
      v78 = std::operator+<char>(v135, v77, v115[12]);
      LOBYTE(v156) = 26;
      std::string::operator=((char *)v72 + 320, v78);
      LOBYTE(v156) = 25;
      std::string::~string(v135);
      LOBYTE(v156) = 24;
      std::string::~string(v144);
      LOBYTE(v156) = 15;
      std::string::~string(v147);
      *((_BYTE *)v72 + 137) = *(_BYTE *)(*a3 + 724) == 0;
      if ( *((_BYTE *)v76 + 44) )
        AsyncLoader::CreatePacket((char *)v72 + 320);
      if ( !sub_10005D50(v76, v72, Stream, (struct ModelFrame **)v72 + 77, 0) )
      {
        (*(void (__thiscall **)(Model *, int))(*(_DWORD *)v72 + 12))(v72, 1);
        LOBYTE(v156) = 4;
        ScriptData::~ScriptData((ScriptData *)v148);
        if ( v132 )
          operator delete(v132);
        v132 = 0;
        v133 = 0;
        v134 = 0;
        LOBYTE(v156) = 1;
        if ( v120 )
        {
          v115[15] = (int)v123;
          v115[14] = (int)&v119;
          sub_1000CC00(v120, v121);
          operator delete(v120);
        }
        v120 = 0;
        v121 = 0;
        v122 = 0;
        goto LABEL_8;
      }
      v123 = v115;
      qmemcpy(v115, (char *)v72 + 224, 0x40u);
      ModelFrame::UpdateMatrices(
        *((_DWORD *)v72 + 77),
        v115[0],
        v115[1],
        v115[2],
        v115[3],
        v115[4],
        v115[5],
        v115[6],
        v115[7],
        v115[8],
        v115[9],
        v115[10],
        v115[11],
        v115[12],
        v115[13],
        v115[14],
        v115[15]);
      (*(void (__thiscall **)(Model *))(*(_DWORD *)v72 + 8))(v72);
      StaticModel::RemoveSceneOffset(v72);
      i = *(float *)(*((_DWORD *)v72 + 77) + 368);
      v115[15] = (int)"_";
      *((float *)v72 + 13) = i;
      *(_DWORD *)(*a3 + 716) = v72;
      v79 = std::string::string(v144, v115[15]);
      LOBYTE(v156) = 27;
      v80 = std::operator+<char>(v135, (char *)v128 + 60, v79);
      v115[12] = *a3 + 444;
      LOBYTE(v156) = 28;
      v115[15] = std::operator+<char>(v147, v80, v115[12]);
      v81 = *(_DWORD *)(*a3 + 716) + 320;
      LOBYTE(v156) = 29;
      std::string::operator=(v81, v115[15]);
      LOBYTE(v156) = 28;
      std::string::~string(v147);
      LOBYTE(v156) = 27;
      std::string::~string(v135);
      LOBYTE(v156) = 15;
      std::string::~string(v144);
      v82 = v128;
      *(_BYTE *)(*(_DWORD *)(*a3 + 716) + 312) = 1;
      if ( *((int *)v82 + 14) >= 3 && (v117 = 0, fread(&v117, 1u, 1u, Stream), v117) )
      {
        v83 = a3;
        fread((void *)(*(_DWORD *)(*a3 + 716) + 148), 0x40u, 1u, Stream);
        v84 = (Model *)operator new(0x1C8u);
        v123 = (int *)v84;
        LOBYTE(v156) = 30;
        if ( v84 )
          v85 = (struct ModelFrame **)Model::Model(v84);
        else
          v85 = 0;
        LOBYTE(v156) = 15;
        if ( sub_10005D50(v128, (struct StaticModel *)v85, Stream, v85 + 77, 0) )
        {
          *(_DWORD *)(*(_DWORD *)(*a3 + 716) + 144) = v85;
          (*((void (__thiscall **)(struct ModelFrame **))*v85 + 2))(v85);
          i = *((float *)v85[77] + 92);
          *((float *)v85 + 13) = i;
        }
        else
        {
          (*((void (__thiscall **)(struct ModelFrame **))*v85 + 2))(v85);
          (*((void (__thiscall **)(struct ModelFrame **, int))*v85 + 3))(v85, 1);
        }
      }
      else
      {
        v83 = a3;
      }
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*v83 + 716) + 28))(
        *(_DWORD *)(*v83 + 716),
        *v83 + 868,
        *v83 + 856);
      v58 = a3;
    }
  }
  else
  {
    if ( Buffer == 1 )
      goto LABEL_157;
    if ( !v73 )
      goto LABEL_169;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v73 + 40))(v73) )
LABEL_157:
      sub_10002B60(v128, Stream, *a3);
  }
  if ( !*v58 )
  {
LABEL_169:
    if ( Buffer != 1 )
    {
LABEL_173:
      if ( *v58 )
      {
        if ( std::string::size(v149) )
        {
          v88 = *v58 + 472;
          std::string::operator=(v88, v148);
          std::string::operator=(v88 + 28, v149);
          std::string::operator=(v88 + 56, v150);
          std::string::operator=(v88 + 84, v151);
          sub_10011510(v152);
          sub_10011510(v153);
          v115[15] = 0;
          *(_BYTE *)(v88 + 144) = v154[0];
          v89 = *v58;
          v115[14] = 1;
          *(_BYTE *)(v89 + 726) = 0;
          v123 = &v115[7];
          std::string::string(&v115[7], "Script name");
          i = COERCE_FLOAT(v115);
          LOBYTE(v156) = 31;
          std::string::string(v115, "Scripting");
          v114 = *v58 + 500;
          Src = &v107;
          LOBYTE(v156) = 32;
          std::string::string(&v107, "Name");
          LOBYTE(v156) = 15;
          v90 = (struct EditorVar *)EditorVar::EditorVar(
                                      v107,
                                      v108,
                                      v109,
                                      v110,
                                      v111,
                                      v112,
                                      v113,
                                      v114,
                                      v115[0],
                                      v115[1],
                                      v115[2],
                                      v115[3],
                                      v115[4],
                                      v115[5],
                                      v115[6],
                                      v115[7],
                                      v115[8],
                                      v115[9],
                                      v115[10],
                                      v115[11],
                                      v115[12],
                                      v115[13],
                                      v115[14],
                                      v115[15]);
          v91 = *v58;
          LOBYTE(v156) = 33;
          std::vector<EditorVar>::push_back(v91 + 424, v90);
          LOBYTE(v156) = 35;
          std::string::~string(v139);
          LOBYTE(v156) = 34;
          std::string::~string(v138);
          LOBYTE(v156) = 15;
          std::string::~string(v137);
          v115[15] = 0;
          v115[14] = 1;
          v123 = &v115[7];
          std::string::string(&v115[7], "Script includes model?");
          i = COERCE_FLOAT(v115);
          LOBYTE(v156) = 36;
          std::string::string(v115, "Scripting");
          v114 = *v58 + 616;
          Src = &v107;
          LOBYTE(v156) = 37;
          std::string::string(&v107, "IncludeModel");
          LOBYTE(v156) = 15;
          v92 = (struct EditorVar *)EditorVar::EditorVar(
                                      v107,
                                      v108,
                                      v109,
                                      v110,
                                      v111,
                                      v112,
                                      v113,
                                      v114,
                                      v115[0],
                                      v115[1],
                                      v115[2],
                                      v115[3],
                                      v115[4],
                                      v115[5],
                                      v115[6],
                                      v115[7],
                                      v115[8],
                                      v115[9],
                                      v115[10],
                                      v115[11],
                                      v115[12],
                                      v115[13],
                                      v115[14],
                                      v115[15]);
          v93 = *v58;
          LOBYTE(v156) = 38;
          std::vector<EditorVar>::push_back(v93 + 424, v92);
          LOBYTE(v156) = 40;
          std::string::~string(v139);
          LOBYTE(v156) = 39;
          std::string::~string(v138);
          LOBYTE(v156) = 15;
          std::string::~string(v137);
          v94 = 0;
          for ( k = 0; ; k += 28 )
          {
            v96 = *(_DWORD *)(*v58 + 588);
            if ( !v96 || v94 >= (*(_DWORD *)(*v58 + 592) - v96) / 28 )
              break;
            v115[15] = 0;
            v115[14] = 1;
            v123 = &v115[7];
            std::string::string(&v115[7], "Script Parameter");
            i = COERCE_FLOAT(v115);
            LOBYTE(v156) = 41;
            std::string::string(v115, "Scripting");
            v97 = *(_DWORD *)(*v58 + 604);
            v98 = *v58 + 600;
            LOBYTE(v156) = 42;
            if ( !v97 || v94 >= (*(_DWORD *)(v98 + 8) - v97) / 28 )
              invalid_parameter_noinfo();
            v99 = *(_DWORD *)(v98 + 4);
            v100 = *(_DWORD *)(*v58 + 588);
            v101 = *v58 + 584;
            v114 = k + v99;
            if ( !v100 || v94 >= (*(_DWORD *)(v101 + 8) - v100) / 28 )
              invalid_parameter_noinfo();
            v102 = k + *(_DWORD *)(v101 + 4);
            Src = &v107;
            std::string::string(&v107, v102);
            LOBYTE(v156) = 15;
            v103 = (struct EditorVar *)EditorVar::EditorVar(
                                         v107,
                                         v108,
                                         v109,
                                         v110,
                                         v111,
                                         v112,
                                         v113,
                                         v114,
                                         v115[0],
                                         v115[1],
                                         v115[2],
                                         v115[3],
                                         v115[4],
                                         v115[5],
                                         v115[6],
                                         v115[7],
                                         v115[8],
                                         v115[9],
                                         v115[10],
                                         v115[11],
                                         v115[12],
                                         v115[13],
                                         v115[14],
                                         v115[15]);
            v104 = *v58;
            LOBYTE(v156) = 43;
            std::vector<EditorVar>::push_back(v104 + 424, v103);
            LOBYTE(v156) = 45;
            std::string::~string(v139);
            LOBYTE(v156) = 44;
            std::string::~string(v138);
            LOBYTE(v156) = 15;
            std::string::~string(v137);
            ++v94;
          }
        }
        if ( *v58 )
        {
          v105 = v128;
          *(_BYTE *)(*v58 + 440) = 1;
          v106 = *((_DWORD *)v105 + 23);
          if ( v106 )
          {
            if ( *(_BYTE *)(v106 + 3284) )
              (*(void (__thiscall **)(int))(*(_DWORD *)*v58 + 12))(*v58);
          }
        }
      }
      LOBYTE(v156) = 4;
      ScriptData::~ScriptData((ScriptData *)v148);
      if ( v132 )
        operator delete(v132);
      v132 = 0;
      v133 = 0;
      v134 = 0;
      LOBYTE(v156) = 1;
      if ( v120 )
      {
        v115[15] = (int)v123;
        v115[14] = (int)&v119;
        sub_1000CC00(v120, v121);
        operator delete(v120);
      }
      v120 = 0;
      v121 = 0;
      v122 = 0;
      goto LABEL_194;
    }
LABEL_170:
    v87 = *v58;
    if ( std::string::find(*v58 + 1364, ".", 0) != -1 && !*(_BYTE *)(v87 + 1420) )
    {
      v115[15] = 0;
      *(float *)&v115[14] = 0.0;
      *(float *)&v115[13] = 1.0;
      *(float *)&v115[12] = 1.0;
      *(float *)&v115[11] = 0.0;
      *(float *)&v115[10] = 0.0;
      v115[9] = 0;
      v123 = &v115[2];
      std::string::string(&v115[2], v87 + 1364);
      Texture::Load(
        v115[2],
        v115[3],
        v115[4],
        v115[5],
        v115[6],
        v115[7],
        v115[8],
        v115[9],
        *(float *)&v115[10],
        *(float *)&v115[11],
        *(float *)&v115[12],
        *(float *)&v115[13],
        *(float *)&v115[14],
        v115[15]);
    }
    goto LABEL_173;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*v58 + 96))(*v58) )
  {
    if ( *v58 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*v58 + 40))(*v58) )
      goto LABEL_170;
    goto LABEL_169;
  }
  v86 = *v58;
  if ( v86 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v86 + 80))(v86, 1);
  LOBYTE(v156) = 4;
  ScriptData::~ScriptData((ScriptData *)v148);
  if ( v132 )
    operator delete(v132);
  v132 = 0;
  v133 = 0;
  v134 = 0;
  LOBYTE(v156) = 1;
  if ( v120 )
  {
    v115[15] = (int)v123;
    v115[14] = (int)&v119;
    sub_1000CC00(v120, v121);
    operator delete(v120);
  }
  v120 = 0;
  v121 = 0;
  v122 = 0;
LABEL_194:
  LOBYTE(v156) = 0;
  std::string::~string(v145);
  v156 = -1;
  std::string::~string(v146);
  return 1;
}
