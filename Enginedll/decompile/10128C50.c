/*
 * func-name: ?RenderDropShadows@ShadowEngine@@QAEXPAVWorld@@PAVCamera@@AAV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@@Z
 * func-address: 0x10128c50
 * callers: 0x10139890
 * callees: 0x1000a970, 0x1000d550, 0x10011750, 0x10012a30, 0x1002aac0, 0x1004d200, 0x10055320, 0x10063830, 0x10076ef0, 0x1009fc50, 0x100d29b0, 0x100e8cd0, 0x100ee930, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10121e80, 0x10122050, 0x10127eb0, 0x101280a0, 0x1012b250, 0x1012b890, 0x1012b950, 0x1012bf70, 0x1012c060, 0x10136140, 0x1013fac0, 0x101780ce, 0x1017810a, 0x101786e0, 0x1017a0b0, 0x1017eaef, 0x101a2500, 0x101a2516, 0x101a251c, 0x101a2534
 */

void __thiscall ShadowEngine::RenderDropShadows(ShadowEngine *this, int a2, Camera *a3, _DWORD *a4)
{
  bool v4; // zf
  struct RenderDevice *v5; // eax
  int *v6; // edi
  int *v7; // ebp
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  const struct BBox *WorldBBox; // eax
  int v13; // eax
  char *v14; // edi
  char *v15; // ebp
  char *v16; // esi
  char *v17; // ebx
  _DWORD *v18; // ecx
  _BYTE *v19; // eax
  _DWORD *v20; // edi
  int *v21; // eax
  int *v22; // edx
  int *v23; // ecx
  _DWORD *v24; // esi
  unsigned int v25; // ebp
  int v26; // eax
  int *v27; // edi
  char *v28; // ecx
  int *v29; // esi
  _BYTE *v30; // ecx
  ShadowEngine *v31; // ebx
  unsigned int i; // esi
  _DWORD *v33; // ebp
  unsigned int v34; // ebp
  int v35; // ecx
  int v36; // ecx
  int v37; // edi
  void (__cdecl *v38)(); // esi
  int v39; // ecx
  _DWORD *v40; // esi
  char *v41; // edi
  _DWORD *v42; // esi
  char *v43; // edi
  float v44; // ebx
  struct RenderDevice *v45; // eax
  struct RenderDevice *v46; // eax
  struct RenderDevice *v47; // eax
  struct RenderDevice *v48; // esi
  struct RenderDevice *v49; // eax
  struct RenderDevice *v50; // eax
  struct RenderDevice *v51; // eax
  unsigned int v52; // edx
  float *v53; // eax
  int v54; // ecx
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  char *v61; // edx
  char *v62; // eax
  char *v63; // esi
  char *v64; // esi
  int v65; // eax
  char *v66; // edx
  char *v67; // eax
  char *v68; // esi
  char *v69; // esi
  int v70; // eax
  unsigned int v71; // esi
  int v72; // ecx
  int v73; // eax
  int v74; // edx
  float *v75; // eax
  double v76; // st7
  double v77; // st7
  int v78; // ecx
  struct RenderDevice *v79; // eax
  ShadowEngine *v80; // edi
  struct RenderDevice *v81; // eax
  _DWORD *v82; // ecx
  int v83; // eax
  void (**v84)(void *, const char *, ...); // esi
  int v85; // eax
  struct RenderDevice *v86; // eax
  struct RenderDevice *v87; // eax
  int v88; // eax
  void (**v89)(void *, const char *, ...); // esi
  int v90; // eax
  struct RenderDevice *v91; // eax
  struct RenderDevice *v92; // eax
  unsigned int j; // esi
  int v94; // ecx
  int v95; // eax
  struct RenderDevice *v96; // eax
  struct RenderDevice *v97; // eax
  struct RenderDevice *v98; // eax
  struct RenderDevice *v99; // eax
  struct RenderDevice *v100; // eax
  struct RenderDevice *v101; // eax
  struct RenderDevice *v102; // eax
  struct RenderDevice *v103; // eax
  struct RenderDevice *v104; // eax
  struct RenderDevice *v105; // eax
  struct RenderDevice *v106; // eax
  struct RenderDevice *v107; // esi
  struct RenderDevice *v108; // eax
  struct VertexManager *v109; // edi
  _DWORD *v110; // ebp
  void (__stdcall **v111)(_DWORD *, _DWORD); // esi
  _DWORD *v112; // eax
  unsigned int v113; // esi
  int v114; // ebp
  int v115; // eax
  unsigned int k; // esi
  int v117; // ecx
  int v118; // eax
  int v119; // edx
  float *v120; // eax
  int v121; // eax
  double v122; // st6
  double v123; // st7
  int v124; // esi
  int v125; // eax
  int v126; // esi
  int v127; // eax
  unsigned int v128; // ebx
  int v129; // eax
  unsigned int v130; // ebx
  int v131; // eax
  int v132; // edx
  int v133; // eax
  void *v134; // edi
  unsigned int v135; // esi
  int v136; // esi
  int v137; // eax
  int v138; // esi
  int v139; // esi
  int v140; // eax
  int v141; // esi
  int v142; // esi
  int v143; // eax
  int v144; // esi
  unsigned int v145; // eax
  int v146; // ebx
  int v147; // eax
  int v148; // ebx
  int v149; // edi
  int v150; // eax
  int v151; // edi
  char *v152; // esi
  char *v153; // esi
  int v154; // edi
  int v155; // eax
  int v156; // edi
  char *v157; // esi
  char *v158; // esi
  int v159; // edi
  int v160; // eax
  int v161; // edi
  char *v162; // esi
  int v163; // edi
  int v164; // eax
  unsigned int v165; // ebx
  int v166; // esi
  int v167; // eax
  int v168; // eax
  int v169; // esi
  unsigned int v170; // edi
  int v171; // esi
  unsigned int v172; // edi
  int v173; // esi
  int v174; // ecx
  int v175; // eax
  int v176; // edx
  int v177; // eax
  int v178; // eax
  double v179; // st7
  int v180; // ecx
  int v181; // eax
  int v182; // ecx
  int v183; // edx
  unsigned int v184; // edi
  float n; // ebx
  int v186; // esi
  int v187; // eax
  int v188; // eax
  int v189; // esi
  unsigned int v190; // edi
  int v191; // esi
  char *v192; // edi
  int v193; // edx
  float v194; // ecx
  int v195; // edx
  char *v196; // eax
  char *v197; // ebx
  char *v198; // esi
  char *v199; // edi
  int v200; // esi
  double v201; // st6
  double v202; // st7
  int v203; // eax
  int v204; // esi
  double v205; // st6
  double v206; // st5
  float v207; // edi
  int v208; // eax
  _DWORD *v209; // ecx
  _DWORD *v210; // ebx
  void (__stdcall **v211)(_DWORD *, float, struct IDirect3DTexture9 *); // esi
  struct IDirect3DTexture9 *Texture; // eax
  int v213; // eax
  void (__stdcall *v214)(int, int, int); // edx
  struct RenderDevice *v215; // eax
  int v216; // esi
  struct RenderDevice *v217; // edi
  int v218; // eax
  int v219; // ebp
  int v220; // eax
  int v221; // ebp
  unsigned int v222; // ecx
  struct RenderDevice *v223; // eax
  int v224; // esi
  struct RenderDevice *v225; // eax
  int v226[44]; // [esp+68h] [ebp-45Ch] BYREF
  unsigned int v227; // [esp+12Ch] [ebp-398h]
  int v228; // [esp+130h] [ebp-394h] BYREF
  unsigned int m; // [esp+134h] [ebp-390h]
  float v230; // [esp+138h] [ebp-38Ch]
  int v231; // [esp+13Ch] [ebp-388h] BYREF
  void *v232; // [esp+140h] [ebp-384h]
  void *v233; // [esp+144h] [ebp-380h]
  int v234; // [esp+148h] [ebp-37Ch]
  char v235; // [esp+14Fh] [ebp-375h]
  float v236; // [esp+150h] [ebp-374h]
  float v237; // [esp+154h] [ebp-370h]
  ShadowEngine *v238; // [esp+158h] [ebp-36Ch]
  int v239; // [esp+15Ch] [ebp-368h] BYREF
  void *v240; // [esp+160h] [ebp-364h]
  char *v241; // [esp+164h] [ebp-360h]
  int v242; // [esp+168h] [ebp-35Ch]
  int v243; // [esp+16Ch] [ebp-358h] BYREF
  char *v244; // [esp+170h] [ebp-354h]
  int v245; // [esp+174h] [ebp-350h] BYREF
  void *v246; // [esp+178h] [ebp-34Ch]
  char *v247; // [esp+17Ch] [ebp-348h]
  int v248; // [esp+180h] [ebp-344h]
  int v249; // [esp+184h] [ebp-340h] BYREF
  void *v250; // [esp+188h] [ebp-33Ch]
  void *v251; // [esp+18Ch] [ebp-338h]
  int v252; // [esp+190h] [ebp-334h]
  int v253; // [esp+194h] [ebp-330h] BYREF
  void *v254; // [esp+198h] [ebp-32Ch]
  void *Source; // [esp+19Ch] [ebp-328h]
  int v256; // [esp+1A0h] [ebp-324h]
  int v257; // [esp+1A4h] [ebp-320h] BYREF
  void *v258; // [esp+1A8h] [ebp-31Ch]
  float v259; // [esp+1ACh] [ebp-318h]
  float v260; // [esp+1B0h] [ebp-314h]
  int v261; // [esp+1B4h] [ebp-310h] BYREF
  float v262; // [esp+1B8h] [ebp-30Ch]
  int v263; // [esp+1BCh] [ebp-308h]
  int v264; // [esp+1C0h] [ebp-304h] BYREF
  int v265; // [esp+1C4h] [ebp-300h] BYREF
  int v266[4]; // [esp+1C8h] [ebp-2FCh] BYREF
  float v267; // [esp+1D8h] [ebp-2ECh]
  float v268; // [esp+1DCh] [ebp-2E8h]
  float v269; // [esp+1E0h] [ebp-2E4h]
  float v270; // [esp+1E4h] [ebp-2E0h]
  float v271; // [esp+1E8h] [ebp-2DCh]
  float v272; // [esp+1ECh] [ebp-2D8h]
  int v273; // [esp+1F0h] [ebp-2D4h] BYREF
  int v274; // [esp+1F4h] [ebp-2D0h] BYREF
  void *v275; // [esp+1F8h] [ebp-2CCh]
  float v276; // [esp+1FCh] [ebp-2C8h]
  float v277; // [esp+200h] [ebp-2C4h]
  float v278[16]; // [esp+204h] [ebp-2C0h] BYREF
  int v279; // [esp+244h] [ebp-280h]
  float v280[16]; // [esp+248h] [ebp-27Ch] BYREF
  _BYTE v281[64]; // [esp+288h] [ebp-23Ch] BYREF
  _BYTE v282[64]; // [esp+2C8h] [ebp-1FCh] BYREF
  float v283[16]; // [esp+308h] [ebp-1BCh] BYREF
  _BYTE v284[64]; // [esp+348h] [ebp-17Ch] BYREF
  _BYTE v285[64]; // [esp+388h] [ebp-13Ch] BYREF
  _BYTE v286[64]; // [esp+3C8h] [ebp-FCh] BYREF
  _BYTE v287[176]; // [esp+408h] [ebp-BCh] BYREF
  int v288; // [esp+4C0h] [ebp-4h]

  *(float *)&v227 = 0.0;
  v4 = *((_BYTE *)this + 181) == 0;
  v238 = this;
  if ( v4 )
    return;
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 364))(v5);
  v6 = 0;
  v7 = 0;
  v232 = 0;
  v233 = 0;
  v234 = 0;
  v288 = 0;
  v8 = 0;
  if ( std::vector<Model *>::size(a4) )
  {
    do
    {
      v9 = a4[1];
      if ( !v9 || v8 >= (a4[2] - v9) >> 2 )
        invalid_parameter_noinfo();
      v10 = *(int *)(a4[1] + 4 * v8);
      v11 = *(_DWORD *)(v10 + 248);
      v228 = v10;
      if ( (v11 == 2 || v11 == 1) && *(_DWORD *)(v10 + 716) && !*(_BYTE *)(v10 + 816) )
      {
        v236 = *(float *)(v10 + 856) - *((float *)a3 + 88);
        v237 = *(float *)(v10 + 860) - *((float *)a3 + 89);
        v230 = *(float *)(v10 + 864) - *((float *)a3 + 90);
        v237 = v237 * v237 + v236 * v236 + v230 * v230;
        v237 = sqrt(v237);
        v230 = v237;
        if ( v237 >= 60.0
          || (WorldBBox = (const struct BBox *)StaticModel::GetWorldBBox(*(_DWORD **)(v10 + 716), v266),
              v227 |= 1u,
              LOBYTE(v288) = 1,
              v13 = Camera::BoxInFrustum(a3, WorldBBox, 0.0, 0),
              v235 = 1,
              !v13) )
        {
          v235 = 0;
        }
        v288 = 0;
        if ( (v227 & 1) != 0 )
        {
          v227 &= ~1u;
          sub_1017A0B0(v266);
        }
        if ( v235 )
        {
          v226[43] = (int)&v228;
          *(float *)(v10 + 836) = v230;
          std::vector<Actor *>::push_back(&v231, (int *)v226[43]);
        }
      }
      ++v8;
    }
    while ( v8 < std::vector<Model *>::size(a4) );
    v6 = (int *)v233;
    v7 = (int *)v232;
  }
  if ( v7 > v6 )
  {
    invalid_parameter_noinfo();
    v7 = (int *)v232;
    if ( v232 > v233 )
      invalid_parameter_noinfo();
  }
  sub_100D29B0(v7, v6, v6 - v7, sub_10127D30);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v240 = 0;
  v241 = 0;
  v242 = 0;
  v17 = 0;
  v246 = 0;
  v247 = 0;
  v248 = 0;
  LOBYTE(v288) = 3;
  *(float *)&v227 = 0.0;
  if ( std::vector<Model *>::size(&v231) )
  {
    while ( 1 )
    {
      v18 = v232;
      if ( !v232 || (v19 = v233, v227 >= ((_BYTE *)v233 - (_BYTE *)v232) >> 2) )
      {
        invalid_parameter_noinfo();
        v19 = v233;
        v18 = v232;
        v16 = v241;
        v15 = (char *)v240;
        v14 = v247;
        v17 = (char *)v246;
      }
      if ( *(_BYTE *)(v18[v227] + 842) )
        break;
      if ( !v18 || v227 >= (v19 - (_BYTE *)v18) >> 2 )
      {
        invalid_parameter_noinfo();
        v18 = v232;
        v16 = v241;
        v15 = (char *)v240;
      }
      v20 = &v18[v227];
      if ( !v15 || (v16 - v15) >> 2 >= (unsigned int)((v242 - (int)v15) >> 2) )
      {
        if ( v15 > v16 )
          invalid_parameter_noinfo();
        v21 = &v239;
        v226[43] = (int)v20;
        v226[42] = (int)v16;
        v22 = &v243;
        v23 = &v239;
LABEL_47:
        std::vector<Actor *>::insert(v23, v22, v21, (char *)v226[42], (int *)v226[43]);
        v16 = v241;
        goto LABEL_48;
      }
      *(_DWORD *)v16 = *v20;
      v16 += 4;
      v241 = v16;
LABEL_48:
      v14 = v247;
LABEL_49:
      if ( ++v227 >= std::vector<Model *>::size(&v231) )
      {
        if ( v240 && (v16 - (_BYTE *)v240) >> 2 > (unsigned int)dword_112418D4 )
        {
          std::vector<Actor *>::resize(&v239, dword_112418D4, 0);
          v14 = v247;
        }
        if ( v246 && (v14 - (_BYTE *)v246) >> 2 > (unsigned int)dword_112418D8 )
          std::vector<Actor *>::resize(&v245, dword_112418D8, 0);
        goto LABEL_56;
      }
      v15 = (char *)v240;
      v17 = (char *)v246;
    }
    if ( !v18 || v227 >= (v19 - (_BYTE *)v18) >> 2 )
    {
      invalid_parameter_noinfo();
      v18 = v232;
      v14 = v247;
      v17 = (char *)v246;
    }
    v24 = &v18[v227];
    if ( v17 && (v14 - v17) >> 2 < (unsigned int)((v248 - (int)v17) >> 2) )
    {
      *(_DWORD *)v14 = *v24;
      v16 = v241;
      v14 += 4;
      v247 = v14;
      goto LABEL_49;
    }
    if ( v17 > v14 )
      invalid_parameter_noinfo();
    v21 = &v245;
    v226[43] = (int)v24;
    v226[42] = (int)v14;
    v22 = &v261;
    v23 = &v245;
    goto LABEL_47;
  }
LABEL_56:
  std::vector<Actor *>::operator=((int)&v231, (int)&v245);
  v25 = 0;
  v26 = std::vector<Model *>::size(&v239);
  v27 = (int *)v233;
  if ( v26 )
  {
    do
    {
      v28 = (char *)v240;
      if ( !v240 || v25 >= (v241 - (_BYTE *)v240) >> 2 )
      {
        invalid_parameter_noinfo();
        v27 = (int *)v233;
        v28 = (char *)v240;
      }
      v29 = (int *)&v28[4 * v25];
      if ( v232 && ((char *)v27 - (_BYTE *)v232) >> 2 < (unsigned int)((v234 - (int)v232) >> 2) )
      {
        *v27++ = *v29;
        v233 = v27;
      }
      else
      {
        if ( v232 > v27 )
          invalid_parameter_noinfo();
        std::vector<Actor *>::insert(&v231, &v243, &v231, (char *)v27, v29);
        v27 = (int *)v233;
      }
      ++v25;
    }
    while ( v25 < std::vector<Model *>::size(&v239) );
  }
  v30 = v232;
  v31 = v238;
  for ( i = 0; v30 && i < ((char *)v27 - v30) >> 2; ++i )
  {
    if ( *(_DWORD *)(*(_DWORD *)&v30[4 * i] + 208) )
    {
      if ( i >= ((char *)v27 - v30) >> 2 )
      {
        invalid_parameter_noinfo();
        v27 = (int *)v233;
        v30 = v232;
      }
      if ( *((float *)v31 + 1) < (double)*(float *)(*(_DWORD *)(*(_DWORD *)&v30[4 * i] + 208) + 104) )
      {
        if ( !v30 || i >= ((char *)v27 - v30) >> 2 )
        {
          invalid_parameter_noinfo();
          v27 = (int *)v233;
          v30 = v232;
        }
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v30[4 * i] + 208) + 80) )
        {
          if ( !v30 || i >= ((char *)v27 - v30) >> 2 )
          {
            invalid_parameter_noinfo();
            v27 = (int *)v233;
            v30 = v232;
          }
          v33 = &v30[4 * i];
          if ( !v30 || i >= ((char *)v27 - v30) >> 2 )
          {
            invalid_parameter_noinfo();
            v27 = (int *)v233;
            v30 = v232;
          }
          if ( *v33 == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v30[4 * i] + 208) + 80) + 4) )
          {
            if ( !v30 || i >= ((char *)v27 - v30) >> 2 )
            {
              invalid_parameter_noinfo();
              v30 = v232;
            }
            *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v30[4 * i] + 208) + 80) + 8) = GSeconds;
            v27 = (int *)v233;
            v30 = v232;
          }
        }
      }
    }
  }
  v254 = 0;
  Source = 0;
  v256 = 0;
  v250 = 0;
  v251 = 0;
  v252 = 0;
  LOBYTE(v288) = 5;
  v34 = 0;
  while ( 1 )
  {
    v35 = *((_DWORD *)v31 + 3);
    if ( !v35 || v34 >= (*((_DWORD *)v31 + 4) - v35) >> 2 )
      break;
    v36 = *((_DWORD *)v31 + 3);
    v37 = 4 * v34;
    if ( GSeconds <= (double)*(float *)(*(_DWORD *)(v36 + 4 * v34) + 8) )
      goto LABEL_117;
    if ( v36 && v34 < (*((_DWORD *)v31 + 4) - v36) >> 2 )
    {
      v38 = invalid_parameter_noinfo;
    }
    else
    {
      v38 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    v39 = *((_DWORD *)v31 + 3);
    if ( *(_BYTE *)(*(_DWORD *)(v39 + 4 * v34) + 12) )
    {
      if ( !v39 || v34 >= (*((_DWORD *)v31 + 4) - v39) >> 2 )
        v38();
      v42 = (_DWORD *)(v37 + *((_DWORD *)v31 + 3));
      v43 = (char *)v251;
      if ( v250 && ((_BYTE *)v251 - (_BYTE *)v250) >> 2 < (unsigned int)((v252 - (int)v250) >> 2) )
      {
        *(_DWORD *)v251 = *v42;
        ++v34;
        v251 = v43 + 4;
      }
      else
      {
        if ( v250 > v251 )
          invalid_parameter_noinfo();
        sub_1012B950((int)&v261, (int)&v249, v43, (int)v42);
LABEL_117:
        ++v34;
      }
    }
    else
    {
      if ( !v39 || v34 >= (*((_DWORD *)v31 + 4) - v39) >> 2 )
        v38();
      v40 = (_DWORD *)(v37 + *((_DWORD *)v31 + 3));
      v41 = (char *)Source;
      if ( v254 && ((_BYTE *)Source - (_BYTE *)v254) >> 2 < (unsigned int)((v256 - (int)v254) >> 2) )
      {
        *(_DWORD *)Source = *v40;
        ++v34;
        Source = v41 + 4;
      }
      else
      {
        if ( v254 > Source )
          invalid_parameter_noinfo();
        sub_1012B950((int)&v243, (int)&v253, v41, (int)v40);
        ++v34;
      }
    }
  }
  v44 = *(float *)(*((_DWORD *)BatchRenderer::Instance() + 263) + 152);
  v237 = v44;
  v45 = RenderDevice::Instance();
  qmemcpy(
    v281,
    (const void *)(*(int (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v45 + 480))(v45, v282),
    sizeof(v281));
  v46 = RenderDevice::Instance();
  qmemcpy(
    v284,
    (const void *)(*(int (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v46 + 468))(v46, v282),
    sizeof(v284));
  v47 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v47 + 427) + 428))(*((_DWORD *)v47 + 427), 0);
  v48 = RenderDevice::Instance();
  memset(v278, 0, sizeof(v278));
  sub_101786E0(1.0);
  v278[15] = 1.0;
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v48 + 456))(v48, v278);
  if ( *(_DWORD *)(LODWORD(v44) + 16) )
  {
    Shader::SetTechnique((Shader *)LODWORD(v44), SLODWORD(v44), v34, 0, "ShadowColor_PS11");
    Shader::Begin((Shader *)LODWORD(v44), 0);
    Shader::BeginPass((Shader *)LODWORD(v44), 0);
    v49 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, int *))(**((_DWORD **)v49 + 427) + 152))(*((_DWORD *)v49 + 427), 0, &v273);
    v265 = 0;
    v50 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, int *))(**((_DWORD **)v50 + 427) + 160))(*((_DWORD *)v50 + 427), &v265);
    v51 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v51 + 427) + 156))(*((_DWORD *)v51 + 427), 0);
    v52 = 0;
    v264 = 0;
    *(float *)&v227 = 0.0;
    while ( v232 && v52 < ((_BYTE *)v233 - (_BYTE *)v232) >> 2 )
    {
      v34 = *((_DWORD *)v232 + v227);
      if ( !*(_DWORD *)(v34 + 208) )
      {
        v53 = (float *)operator new(0x6Cu);
        if ( v53 )
        {
          v53[22] = 0.0;
          v53[17] = 0.0;
          v53[23] = 0.0;
          v53[18] = 0.0;
          v53[24] = 0.0;
          v53[19] = 0.0;
          v53[20] = 0.0;
          v53[26] = -1.0;
          *v53 = 0.0;
          v53[25] = -1.0;
        }
        else
        {
          v53 = 0;
        }
        LOBYTE(v288) = 5;
        *(_DWORD *)(v34 + 208) = v53;
      }
      v54 = *(_DWORD *)(v34 + 208);
      if ( *((float *)v238 + 1) >= (double)*(float *)(v54 + 104)
        || (v55 = *(_DWORD *)(v54 + 80)) == 0
        || v34 != *(_DWORD *)(v55 + 4)
        || *(_BYTE *)(v34 + 841)
        || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v34 + 716) + 36))(*(_DWORD *)(v34 + 716))
        || (v56 = *(_DWORD *)(v34 + 208), v57 = *(_DWORD *)(v56 + 88), v58 = v56 + 84, !v57)
        || !((*(_DWORD *)(v58 + 8) - v57) / 56)
        || *(float *)(v34 + 884) != *(float *)(v34 + 24)
        || *(float *)(v34 + 888) != *(float *)(v34 + 28)
        || *(float *)(v34 + 892) != *(float *)(v34 + 32)
        || *(float *)(v34 + 868) != *(float *)(v34 + 8)
        || *(float *)(v34 + 872) != *(float *)(v34 + 12)
        || *(float *)(v34 + 876) != *(float *)(v34 + 16)
        || *(float *)(v34 + 900) != *(float *)(v34 + 40)
        || *(float *)(v34 + 904) != *(float *)(v34 + 44)
        || *(float *)(v34 + 908) != *(float *)(v34 + 48) )
      {
        v59 = *(_DWORD *)(v34 + 208);
        if ( *((float *)v238 + 1) > (double)*(float *)(v59 + 104)
          || (v60 = *(_DWORD *)(v59 + 80)) == 0
          || *(_DWORD *)(v60 + 4) != v34 )
        {
          *(_DWORD *)(v59 + 80) = 0;
          if ( *(_BYTE *)(v34 + 842) )
          {
            v61 = (char *)v250;
            if ( v250 )
            {
              v62 = (char *)v251;
              if ( ((_BYTE *)v251 - (_BYTE *)v250) >> 2 )
              {
                v63 = (char *)v251;
                if ( v250 > v251 )
                {
                  invalid_parameter_noinfo();
                  v62 = (char *)v251;
                  v61 = (char *)v250;
                }
                v244 = v63;
                if ( v63 - 4 > v62 || v63 - 4 < v61 )
                  invalid_parameter_noinfo();
                v64 = v63 - 4;
                if ( v64 >= v251 )
                  invalid_parameter_noinfo();
                *(_DWORD *)(*(_DWORD *)(v34 + 208) + 80) = *(_DWORD *)v64;
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v34 + 208) + 80) + 4) = v34;
                if ( v250 )
                  v65 = ((_BYTE *)v251 - (_BYTE *)v250) >> 2;
                else
                  v65 = 0;
                sub_1012B890((int)&v249, v65 - 1, 0);
              }
            }
          }
          if ( !*(_DWORD *)(*(_DWORD *)(v34 + 208) + 80) )
          {
            v66 = (char *)v254;
            if ( v254 )
            {
              v67 = (char *)Source;
              if ( ((_BYTE *)Source - (_BYTE *)v254) >> 2 )
              {
                v68 = (char *)Source;
                if ( v254 > Source )
                {
                  invalid_parameter_noinfo();
                  v67 = (char *)Source;
                  v66 = (char *)v254;
                }
                v244 = v68;
                if ( v68 - 4 > v67 || v68 - 4 < v66 )
                  invalid_parameter_noinfo();
                v69 = v68 - 4;
                if ( v69 >= Source )
                  invalid_parameter_noinfo();
                *(_DWORD *)(*(_DWORD *)(v34 + 208) + 80) = *(_DWORD *)v69;
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v34 + 208) + 80) + 4) = v34;
                if ( v254 )
                  v70 = ((_BYTE *)Source - (_BYTE *)v254) >> 2;
                else
                  v70 = 0;
                sub_1012B890((int)&v253, v70 - 1, 0);
              }
            }
          }
        }
        *(float *)(*(_DWORD *)(v34 + 208) + 104) = GSeconds;
        if ( *(_DWORD *)(*(_DWORD *)(v34 + 208) + 80) )
        {
          qmemcpy((void *)(v34 + 8), (const void *)(v34 + 868), 0x40u);
          StaticModel::GetWorldBBox(*(_DWORD **)(v34 + 716), v266);
          LOBYTE(v288) = 7;
          v71 = 0;
          v236 = v270 - v267;
          v230 = v271 - v268;
          *(float *)&v228 = v272 - v269;
          *(float *)&v261 = v236;
          v262 = v230;
          v263 = v228;
          while ( 1 )
          {
            v72 = *(_DWORD *)(v34 + 180);
            if ( !v72 || v71 >= (*(_DWORD *)(v34 + 184) - v72) >> 2 )
              break;
            v73 = *(_DWORD *)(v34 + 180);
            if ( !*(_BYTE *)(*(_DWORD *)(v73 + 4 * v71) + 816) )
            {
              if ( !v73 || v71 >= (*(_DWORD *)(v34 + 184) - v73) >> 2 )
                invalid_parameter_noinfo();
              v74 = *(_DWORD *)(v34 + 180);
              if ( *(_DWORD *)(*(_DWORD *)(v74 + 4 * v71) + 716) )
              {
                if ( !v74 || v71 >= (*(_DWORD *)(v34 + 184) - v74) >> 2 )
                  invalid_parameter_noinfo();
                v75 = (float *)StaticModel::GetWorldBBox(
                                 *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v34 + 180) + 4 * v71) + 716),
                                 v278);
                v266[1] = (int)v75[1];
                v266[2] = (int)v75[2];
                v266[3] = (int)v75[3];
                v267 = v75[4];
                v268 = v75[5];
                v269 = v75[6];
                v270 = v75[7];
                v271 = v75[8];
                v272 = v75[9];
                sub_1017A0B0(v278);
                *(float *)&v257 = v270 - v267;
                *(float *)&v258 = v271 - v268;
                v259 = v272 - v269;
                *(float *)&v261 = *(float *)&v257 + *(float *)&v261;
                v262 = *(float *)&v258 + v262;
                *(float *)&v263 = v259 + *(float *)&v263;
              }
            }
            ++v71;
          }
          v76 = *(float *)&v261;
          if ( v262 >= (double)*(float *)&v261 )
            v76 = v262;
          *(float *)&m = v76;
          v77 = *(float *)&m;
          if ( *(float *)&v263 >= (double)*(float *)&m )
            v77 = *(float *)&v263;
          v78 = *(_DWORD *)(v34 + 208);
          v230 = v77;
          *(float *)&m = v230 + v230;
          D3DXMatrixOrthoLH(v78 + 4, m, m, 0.0099999998, 400.0);
          v79 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v79 + 476))(v79, *(_DWORD *)(v34 + 208) + 4);
          v80 = v238;
          ShadowEngine::GetView(v285, (float *)v34);
          v81 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v81 + 464))(v81, v285);
          D3DXMatrixMultiply(v282, v285, *(_DWORD *)(v34 + 208) + 4);
          (*(void (__stdcall **)(_DWORD, const char *, _BYTE *))(**(_DWORD **)(LODWORD(v44) + 16) + 152))(
            *(_DWORD *)(LODWORD(v44) + 16),
            "mViewProjection",
            v282);
          v82 = *(_DWORD **)(*(_DWORD *)(v34 + 208) + 80);
          if ( *v82 )
          {
            v83 = (*(int (__stdcall **)(_DWORD, _DWORD, int *))(*(_DWORD *)*v82 + 72))(*v82, 0, &v264);
            if ( v83 < 0 )
            {
              v84 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
              v85 = sub_1017EAEF(v83);
              (*v84)(
                dword_11249F38,
                " Error: %s, in: a->m_CachedShadow->rt->map->GetSurfaceLevel( 0, &pShadowSurf )",
                v85);
            }
            v86 = RenderDevice::Instance();
            (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v86 + 427) + 148))(
              *((_DWORD *)v86 + 427),
              0,
              v264);
            v87 = RenderDevice::Instance();
            v88 = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(**((_DWORD **)v87 + 427) + 172))(
                    *((_DWORD *)v87 + 427),
                    0,
                    0,
                    1,
                    -1,
                    1.0,
                    0);
            if ( v88 < 0 )
            {
              v89 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
              v90 = sub_1017EAEF(v88);
              (*v89)(
                dword_11249F38,
                " Error: %s, in: RenderDevice::Instance()->dev->Clear( 0L, NULL, D3DCLEAR_TARGET,0xffffffff, 1.0f, 0L )",
                v90);
            }
            v91 = RenderDevice::Instance();
            (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v91 + 432))(v91, 23, 8);
            v92 = RenderDevice::Instance();
            (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v92 + 432))(v92, 14, 0);
            ShadowEngine::RenderShadowItem(
              v80,
              *(struct ModelFrame ***)(*(_DWORD *)(v34 + 716) + 308),
              (struct Shader *)LODWORD(v44));
            for ( j = 0; ; ++j )
            {
              v94 = *(_DWORD *)(v34 + 180);
              if ( !v94 || j >= (*(_DWORD *)(v34 + 184) - v94) >> 2 )
                break;
              v95 = *(_DWORD *)(v34 + 180);
              if ( !*(_BYTE *)(*(_DWORD *)(v95 + 4 * j) + 816) )
              {
                if ( !v95 || j >= (*(_DWORD *)(v34 + 184) - v95) >> 2 )
                  invalid_parameter_noinfo();
                ShadowEngine::RenderShadowItem(
                  v80,
                  *(struct ModelFrame ***)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v34 + 180) + 4 * j) + 716) + 308),
                  (struct Shader *)LODWORD(v44));
              }
            }
            if ( v264 )
            {
              (*(void (__stdcall **)(int))(*(_DWORD *)v264 + 8))(v264);
              v264 = 0;
            }
          }
          LOBYTE(v288) = 5;
          sub_1017A0B0(v266);
        }
      }
      v52 = ++v227;
    }
    Shader::EndPass((Shader *)LODWORD(v44));
    Shader::End((Shader *)LODWORD(v44));
    v96 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v96 + 427) + 148))(*((_DWORD *)v96 + 427), 0, v273);
    v97 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)v97 + 427) + 156))(*((_DWORD *)v97 + 427), v265);
    if ( v273 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v273 + 8))(v273);
      v273 = 0;
    }
    if ( v265 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v265 + 8))(v265);
      v265 = 0;
    }
    v98 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v98 + 92))(v98);
    v99 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v99 + 464))(v99, v284);
    v100 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v100 + 476))(v100, v281);
    v236 = -0.000019999999;
    v101 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, float))(*(_DWORD *)v101 + 432))(
      v101,
      195,
      COERCE_FLOAT(LODWORD(v236)));
    v102 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v102 + 432))(v102, 14, 0);
    v103 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v103 + 432))(v103, 27, 1);
    v104 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v104 + 432))(v104, 19, 1);
    v105 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v105 + 432))(v105, 20, 3);
    v106 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v106 + 432))(v106, 23, 4);
    v280[0] = 0.5;
    v280[1] = 0.0;
    v280[2] = 0.0;
    v280[3] = 0.0;
    v280[4] = 0.0;
    v280[5] = -0.5;
    v280[6] = 0.0;
    v280[7] = 0.0;
    v280[8] = 0.0;
    v280[9] = 0.0;
    v280[10] = 1.0;
    v280[11] = 0.0;
    v280[12] = flt_10282B3C;
    v280[13] = flt_10282B38;
    v280[14] = -0.001;
    v280[15] = 1.0;
    (*(void (__stdcall **)(_DWORD, const char *, float *))(**(_DWORD **)(LODWORD(v44) + 16) + 152))(
      *(_DWORD *)(LODWORD(v44) + 16),
      "mTexProj",
      v280);
    v107 = RenderDevice::Instance();
    memset(v278, 0, sizeof(v278));
    sub_101786E0(1.0);
    v278[15] = 1.0;
    (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v107 + 456))(v107, v278);
    qmemcpy(v286, v281, sizeof(v286));
    D3DXMatrixMultiply(v286, v284, v281);
    if ( *((_BYTE *)v238 + 180) )
      v226[43] = (int)"ShadowProject_Soft";
    else
      v226[43] = (int)"ShadowProject";
    Shader::SetTechnique((Shader *)LODWORD(v44), SLODWORD(v44), v34, (int)v287, (const char *)v226[43]);
    Shader::Begin((Shader *)LODWORD(v44), 0);
    Shader::BeginPass((Shader *)LODWORD(v44), 0);
    v108 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v108 + 416))(v108, 262674);
    v109 = VertexManager::Instance();
    v110 = (_DWORD *)*((_DWORD *)RenderDevice::Instance() + 427);
    v111 = (void (__stdcall **)(_DWORD *, _DWORD))(*v110 + 348);
    v112 = (_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v109 + 20))(v109, 56);
    (*v111)(v110, *v112);
    memset(v283, 0, sizeof(v283));
    sub_101786E0(1.0);
    v283[15] = 1.0;
    (*(void (__stdcall **)(_DWORD, const char *, float *))(**(_DWORD **)(LODWORD(v44) + 16) + 152))(
      *(_DWORD *)(LODWORD(v44) + 16),
      "mWorld",
      v283);
    (*(void (__stdcall **)(_DWORD, const char *, _BYTE *))(**(_DWORD **)(LODWORD(v44) + 16) + 152))(
      *(_DWORD *)(LODWORD(v44) + 16),
      "mWorldViewProjection",
      v286);
    v236 = COERCE_FLOAT(
             (*(int (__stdcall **)(_DWORD, _DWORD, const char *))(**(_DWORD **)(LODWORD(v44) + 16) + 36))(
               *(_DWORD *)(LODWORD(v44) + 16),
               0,
               "tSpotlight"));
    *(float *)&v261 = COERCE_FLOAT(
                        (*(int (__stdcall **)(_DWORD, _DWORD, const char *))(**(_DWORD **)(LODWORD(v44) + 16) + 36))(
                          *(_DWORD *)(LODWORD(v44) + 16),
                          0,
                          "LightProjection"));
    *(float *)&v243 = COERCE_FLOAT(
                        (*(int (__stdcall **)(_DWORD, _DWORD, const char *))(**(_DWORD **)(LODWORD(v44) + 16) + 36))(
                          *(_DWORD *)(LODWORD(v44) + 16),
                          0,
                          "ShadowBrightness"));
    v113 = 0;
    v230 = 0.0;
    while ( v232 && v113 < ((_BYTE *)v233 - (_BYTE *)v232) >> 2 )
    {
      v114 = *((_DWORD *)v232 + v113);
      v115 = *(_DWORD *)(v114 + 248);
      if ( v115 == 2 && *(_DWORD *)(*(_DWORD *)(v114 + 208) + 80) || v115 == 1 )
      {
        StaticModel::GetWorldBBox(*(_DWORD **)(v114 + 716), v266);
        LOBYTE(v288) = 8;
        for ( k = 0; ; ++k )
        {
          v117 = *(_DWORD *)(v114 + 180);
          if ( !v117 || k >= (*(_DWORD *)(v114 + 184) - v117) >> 2 )
            break;
          v118 = *(_DWORD *)(v114 + 180);
          if ( !*(_BYTE *)(*(_DWORD *)(v118 + 4 * k) + 816) )
          {
            if ( !v118 || k >= (*(_DWORD *)(v114 + 184) - v118) >> 2 )
              invalid_parameter_noinfo();
            v119 = *(_DWORD *)(v114 + 180);
            if ( *(_DWORD *)(*(_DWORD *)(4 * k + v119) + 716) )
            {
              if ( !v119 || k >= (*(_DWORD *)(v114 + 184) - v119) >> 2 )
                invalid_parameter_noinfo();
              v120 = (float *)StaticModel::GetWorldBBox(
                                *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v114 + 180) + 4 * k) + 716),
                                v278);
              sub_1004D200((float *)v266, v120);
              sub_1017A0B0(v278);
            }
          }
        }
        v121 = dword_11241A10;
        if ( (dword_11241A10 & 1) != 0 )
        {
          v123 = 0.0;
          v122 = 1.0;
        }
        else
        {
          v121 = dword_11241A10 | 1;
          flt_11241A04 = 1.0;
          dword_11241A10 |= 1u;
          flt_11241A08 = 0.0;
          v122 = 1.0;
          v123 = 0.0;
          flt_11241A0C = 1.0;
        }
        if ( (v121 & 2) == 0 )
        {
          flt_112419F8 = v122;
          dword_11241A10 = v121 | 2;
          flt_112419FC = 8.0;
          flt_11241A00 = v122;
        }
        v270 = v270 + flt_11241A04;
        v271 = v271 + flt_11241A08;
        v272 = v272 + flt_11241A0C;
        v267 = v267 - flt_112419F8;
        v268 = v268 - flt_112419FC;
        v269 = v269 - flt_11241A00;
        v124 = *(_DWORD *)(v114 + 208);
        v125 = *(_DWORD *)(v124 + 88);
        if ( v125
          && (*(_DWORD *)(v124 + 92) - v125) / 56
          && (*(float *)&m = *(float *)(v114 + 72) - *(float *)(v114 + 856),
              *(float *)&v228 = *(float *)(v114 + 76) - *(float *)(v114 + 860),
              *(float *)&v227 = *(float *)(v114 + 80) - *(float *)(v114 + 864),
              *(float *)&v228 = *(float *)&v228 * *(float *)&v228
                              + *(float *)&m * *(float *)&m
                              + *(float *)&v227 * *(float *)&v227,
              *(float *)&v228 = sqrt(*(float *)&v228),
              v123 = 0.0,
              *(float *)&v228 <= 0.25) )
        {
          if ( *(float *)(v124 + 100) > 0.0 && GSeconds - *(float *)(v124 + 100) > 2.0 )
          {
            if ( *((_BYTE *)RenderDevice::Instance() + 1606) )
            {
              v126 = *(_DWORD *)(v114 + 208);
              v127 = *(_DWORD *)(v126 + 88);
              v128 = 0;
              if ( !v127 || (*(_DWORD *)(v126 + 92) - v127) / 56 < 15000 )
              {
                v275 = 0;
                v276 = 0.0;
                v277 = 0.0;
                v129 = *(_DWORD *)(v126 + 88);
                LOBYTE(v288) = 9;
                if ( v129 )
                  v128 = (*(_DWORD *)(v126 + 92) - v129) / 56;
                qmemcpy(v226, Face::Face((Face *)v287), sizeof(v226));
                sub_1012C060(
                  (int)&v274,
                  v128 / 3,
                  v226[0],
                  v226[1],
                  v226[2],
                  v226[3],
                  v226[4],
                  v226[5],
                  v226[6],
                  v226[7],
                  v226[8],
                  v226[9],
                  v226[10],
                  v226[11],
                  v226[12],
                  v226[13],
                  v226[14],
                  v226[15],
                  v226[16],
                  v226[17],
                  v226[18],
                  v226[19],
                  v226[20],
                  v226[21],
                  v226[22],
                  v226[23],
                  v226[24],
                  v226[25],
                  v226[26],
                  v226[27],
                  v226[28],
                  v226[29],
                  v226[30],
                  v226[31],
                  v226[32],
                  v226[33],
                  v226[34],
                  v226[35],
                  v226[36],
                  v226[37],
                  v226[38],
                  v226[39],
                  v226[40],
                  v226[41],
                  v226[42],
                  v226[43]);
                v130 = 0;
                for ( m = 112; ; m = v145 )
                {
                  v131 = *(_DWORD *)(v114 + 208);
                  v132 = *(_DWORD *)(v131 + 88);
                  v133 = v131 + 84;
                  if ( !v132 || v130 >= (*(_DWORD *)(v133 + 8) - v132) / 56 )
                    break;
                  v134 = v275;
                  v135 = (int)v130 / 3;
                  if ( !v275 || v135 >= (LODWORD(v276) - (int)v275) / 176 )
                  {
                    invalid_parameter_noinfo();
                    v134 = v275;
                  }
                  v228 = (int)v134 + 176 * v135;
                  v136 = *(_DWORD *)(v114 + 208);
                  v137 = *(_DWORD *)(v136 + 88);
                  v138 = v136 + 84;
                  if ( !v137 || v130 >= (*(_DWORD *)(v138 + 8) - v137) / 56 )
                    invalid_parameter_noinfo();
                  qmemcpy((void *)(v228 + 8), (const void *)(m + *(_DWORD *)(v138 + 4) - 112), 0x38u);
                  v139 = *(_DWORD *)(v114 + 208);
                  v140 = *(_DWORD *)(v139 + 88);
                  v141 = v139 + 84;
                  if ( !v140 || v130 + 1 >= (*(_DWORD *)(v141 + 8) - v140) / 56 )
                    invalid_parameter_noinfo();
                  qmemcpy((void *)(v228 + 64), (const void *)(m + *(_DWORD *)(v141 + 4) - 56), 0x38u);
                  v142 = *(_DWORD *)(v114 + 208);
                  v143 = *(_DWORD *)(v142 + 88);
                  v144 = v142 + 84;
                  if ( !v143 || v130 + 2 >= (*(_DWORD *)(v144 + 8) - v143) / 56 )
                    invalid_parameter_noinfo();
                  v130 += 3;
                  v145 = m + 168;
                  qmemcpy((void *)(v228 + 120), (const void *)(m + *(_DWORD *)(v144 + 4)), 0x38u);
                }
                *(float *)&v258 = 0.0;
                v259 = 0.0;
                v260 = 0.0;
                LOBYTE(v288) = 10;
                FXManager::SplitFacesByBox((int)v266, (int)&v274, (int)&v257);
                if ( *(float *)&v258 == 0.0 )
                  v146 = 0;
                else
                  v146 = (LODWORD(v259) - (int)v258) / 176;
                v147 = *(_DWORD *)(v114 + 208);
                v278[0] = 0.0;
                v278[1] = 0.0;
                v278[2] = 0.0;
                v278[3] = 0.0;
                v278[4] = 0.0;
                v278[5] = 0.0;
                v278[6] = 0.0;
                v278[7] = 0.0;
                v278[8] = 0.0;
                v278[9] = 0.0;
                v278[10] = 0.0;
                v278[11] = 0.0;
                v278[12] = 0.0;
                v278[13] = 0.0;
                qmemcpy(&v226[30], v278, 0x38u);
                sub_1012BF70(
                  v147 + 84,
                  3 * v146,
                  v226[30],
                  v226[31],
                  v226[32],
                  v226[33],
                  v226[34],
                  v226[35],
                  v226[36],
                  v226[37],
                  v226[38],
                  v226[39],
                  v226[40],
                  v226[41],
                  v226[42],
                  v226[43]);
                v148 = 0;
                *(float *)&v227 = 0.0;
                m = 2;
                v228 = 112;
                while ( *(float *)&v258 != 0.0 )
                {
                  if ( v227 >= (LODWORD(v259) - (int)v258) / 176 )
                  {
                    operator delete(v258);
                    break;
                  }
                  v149 = *(_DWORD *)(v114 + 208);
                  v150 = *(_DWORD *)(v149 + 88);
                  v151 = v149 + 84;
                  v152 = (char *)v258 + v148;
                  if ( !v150 || m - 2 >= (*(_DWORD *)(v151 + 8) - v150) / 56 )
                    invalid_parameter_noinfo();
                  qmemcpy((void *)(v228 + *(_DWORD *)(v151 + 4) - 112), v152 + 8, 0x38u);
                  v153 = (char *)v258;
                  if ( *(float *)&v258 == 0.0 || v227 >= (LODWORD(v259) - (int)v258) / 176 )
                  {
                    invalid_parameter_noinfo();
                    v153 = (char *)v258;
                  }
                  v154 = *(_DWORD *)(v114 + 208);
                  v155 = *(_DWORD *)(v154 + 88);
                  v156 = v154 + 84;
                  v157 = &v153[v148];
                  if ( !v155 || m - 1 >= (*(_DWORD *)(v156 + 8) - v155) / 56 )
                    invalid_parameter_noinfo();
                  qmemcpy((void *)(v228 + *(_DWORD *)(v156 + 4) - 56), v157 + 64, 0x38u);
                  v158 = (char *)v258;
                  if ( *(float *)&v258 == 0.0 || v227 >= (LODWORD(v259) - (int)v258) / 176 )
                  {
                    invalid_parameter_noinfo();
                    v158 = (char *)v258;
                  }
                  v159 = *(_DWORD *)(v114 + 208);
                  v160 = *(_DWORD *)(v159 + 88);
                  v161 = v159 + 84;
                  v162 = &v158[v148];
                  if ( !v160 || m >= (*(_DWORD *)(v161 + 8) - v160) / 56 )
                    invalid_parameter_noinfo();
                  v163 = *(_DWORD *)(v161 + 4);
                  ++v227;
                  v164 = v228 + 168;
                  v148 += 176;
                  m += 3;
                  qmemcpy((void *)(v228 + v163), v162 + 120, 0x38u);
                  v228 = v164;
                }
                *(float *)&v258 = 0.0;
                v259 = 0.0;
                v260 = 0.0;
                LOBYTE(v288) = 8;
                if ( v275 )
                  operator delete(v275);
                v275 = 0;
                v276 = 0.0;
                v277 = 0.0;
              }
            }
            v165 = 0;
            *(float *)&v227 = 0.0;
            while ( 1 )
            {
              v166 = *(_DWORD *)(v114 + 208);
              v167 = *(_DWORD *)(v166 + 88);
              if ( !v167 || v165 >= (*(_DWORD *)(v166 + 92) - v167) / 56 )
                break;
              v168 = *(_DWORD *)(v166 + 88);
              if ( !v168 || v165 >= (*(_DWORD *)(v166 + 92) - v168) / 56 )
                invalid_parameter_noinfo();
              if ( *(float *)(v227 + *(_DWORD *)(v166 + 88) + 16) < 0.0099999998 )
              {
                v169 = *(_DWORD *)(v114 + 208);
                v170 = *(_DWORD *)(v169 + 88);
                v171 = v169 + 84;
                if ( v170 > *(_DWORD *)(v171 + 8) )
                  invalid_parameter_noinfo();
                v172 = v227 + v170;
                if ( v172 > *(_DWORD *)(v171 + 8) || v172 < *(_DWORD *)(v171 + 4) )
                  invalid_parameter_noinfo();
                v173 = *(_DWORD *)(v114 + 208);
                LOBYTE(v279) = 0;
                v226[43] = v279;
                v174 = *(_DWORD *)(v173 + 92);
                v226[42] = v243;
                v226[41] = v243;
                sub_1012B250(v172 + 56, v174, v172);
                *(_DWORD *)(v173 + 92) -= 56;
                --v165;
                v227 -= 56;
              }
              ++v165;
              v227 += 56;
            }
            *(float *)(v166 + 100) = -1.0;
          }
        }
        else
        {
          v278[0] = v123;
          v278[1] = v123;
          v278[2] = v123;
          v278[3] = v123;
          v278[4] = v123;
          v278[5] = v123;
          v278[6] = v123;
          v278[7] = v123;
          v278[8] = v123;
          v278[9] = v123;
          v278[10] = v123;
          v278[11] = v123;
          v278[12] = v123;
          v278[13] = v123;
          qmemcpy(&v226[30], v278, 0x38u);
          sub_1012BF70(
            v124 + 84,
            0,
            v226[30],
            v226[31],
            v226[32],
            v226[33],
            v226[34],
            v226[35],
            v226[36],
            v226[37],
            v226[38],
            v226[39],
            v226[40],
            v226[41],
            v226[42],
            v226[43]);
          v226[43] = v180;
          World::GatherRenderingPolys(v114, *(_DWORD *)(v114 + 208) + 84, &unk_10282B2C, v266, 0.0099999998);
          v181 = *(_DWORD *)(v114 + 860);
          v182 = *(_DWORD *)(v114 + 864);
          *(_DWORD *)(v114 + 72) = *(_DWORD *)(v114 + 856);
          v183 = *(_DWORD *)(v114 + 208);
          *(_DWORD *)(v114 + 76) = v181;
          *(_DWORD *)(v114 + 80) = v182;
          *(float *)&v184 = 0.0;
          *(float *)(v183 + 100) = GSeconds;
          for ( n = 0.0; ; LODWORD(n) += 56 )
          {
            v186 = *(_DWORD *)(v114 + 208);
            v187 = *(_DWORD *)(v186 + 88);
            *(float *)&m = n;
            v228 = v184;
            if ( !v187 || v184 >= (*(_DWORD *)(v186 + 92) - v187) / 56 )
              break;
            v188 = *(_DWORD *)(v186 + 88);
            if ( !v188 || v184 >= (*(_DWORD *)(v186 + 92) - v188) / 56 )
              invalid_parameter_noinfo();
            if ( *(float *)(LODWORD(n) + *(_DWORD *)(v186 + 88) + 16) < 0.0099999998 )
            {
              v189 = *(_DWORD *)(v114 + 208);
              v190 = *(_DWORD *)(v189 + 88);
              v191 = v189 + 84;
              if ( v190 > *(_DWORD *)(v191 + 8) )
                invalid_parameter_noinfo();
              v192 = (char *)(LODWORD(n) + v190);
              if ( (unsigned int)v192 > *(_DWORD *)(v191 + 8) || (unsigned int)v192 < *(_DWORD *)(v191 + 4) )
                invalid_parameter_noinfo();
              v193 = *(_DWORD *)(v114 + 208);
              v194 = *(float *)(v193 + 92);
              v195 = v193 + 84;
              v196 = v192 + 56;
              *(float *)&v227 = v194;
              if ( v192 + 56 != (char *)LODWORD(v194) )
              {
                v197 = v192;
                do
                {
                  v198 = v196;
                  v199 = v197;
                  v196 += 56;
                  v197 += 56;
                  v4 = v196 == (char *)v227;
                  qmemcpy(v199, v198, 0x38u);
                }
                while ( !v4 );
              }
              --v228;
              *(_DWORD *)(v195 + 8) -= 56;
              m -= 56;
              v184 = v228;
              n = *(float *)&m;
            }
            ++v184;
          }
        }
        v175 = *(_DWORD *)(v114 + 208);
        v176 = *(_DWORD *)(v175 + 88);
        v177 = v175 + 84;
        if ( v176 )
        {
          v178 = (*(_DWORD *)(v177 + 8) - v176) / 56;
          if ( v178 )
          {
            if ( v178 <= 34000 )
            {
              ShadowEngine::GetView(v278, (float *)v114);
              D3DXMatrixMultiply(v278, v278, *(_DWORD *)(v114 + 208) + 4);
              *(float *)&m = *((float *)a3 + 88) - *(float *)(v114 + 856);
              *(float *)&v228 = *((float *)a3 + 89) - *(float *)(v114 + 860);
              *(float *)&v227 = *((float *)a3 + 90) - *(float *)(v114 + 864);
              *(float *)&v228 = *(float *)&v228 * *(float *)&v228
                              + *(float *)&m * *(float *)&m
                              + *(float *)&v227 * *(float *)&v227;
              *(float *)&v228 = sqrt(*(float *)&v228);
              *(float *)&m = *(float *)&v228 / 60.0;
              v179 = *(float *)&m - 0.5;
              if ( v179 < 0.0 )
                v179 = 0.0;
              v200 = *(_DWORD *)(v114 + 208);
              v201 = v179;
              v202 = 0.5;
              v203 = *(_DWORD *)(v200 + 88);
              *(float *)&m = v201;
              v204 = v200 + 84;
              if ( !v203 || !((*(_DWORD *)(v204 + 8) - v203) / 56) )
              {
                invalid_parameter_noinfo();
                v202 = 0.5;
              }
              *(float *)&v228 = *(float *)(v114 + 860) - *(float *)(*(_DWORD *)(v204 + 4) + 4);
              if ( *(float *)&v228 > 4.0 )
              {
                v205 = (*(float *)&v228 - 4.0) / 3.700000047683716 * v202;
                v206 = v205 <= v202 ? v205 : v202;
                if ( *(float *)&m <= v206 )
                {
                  if ( v205 <= v202 )
                    *(float *)&m = v205;
                  else
                    *(float *)&m = v202;
                }
              }
              v207 = v237;
              (*(void (__stdcall **)(_DWORD, int, float *))(**(_DWORD **)(LODWORD(v237) + 16) + 152))(
                *(_DWORD *)(LODWORD(v237) + 16),
                v261,
                v278);
              v208 = *(_DWORD *)(v114 + 248);
              if ( v208 == 2 && (v209 = *(_DWORD **)(*(_DWORD *)(v114 + 208) + 80)) != 0 )
              {
                (*(void (__stdcall **)(_DWORD, float, _DWORD))(**(_DWORD **)(LODWORD(v207) + 16) + 208))(
                  *(_DWORD *)(LODWORD(v207) + 16),
                  COERCE_FLOAT(LODWORD(v236)),
                  *v209);
              }
              else if ( v208 == 1 )
              {
                v210 = *(_DWORD **)(LODWORD(v207) + 16);
                v211 = (void (__stdcall **)(_DWORD *, float, struct IDirect3DTexture9 *))(*v210 + 208);
                Texture = Texture::GetTexture((ShadowEngine *)((char *)v238 + 24));
                (*v211)(v210, COERCE_FLOAT(LODWORD(v236)), Texture);
              }
              v213 = *(_DWORD *)(LODWORD(v207) + 16);
              v214 = *(void (__stdcall **)(int, int, int))(*(_DWORD *)v213 + 120);
              *(float *)&v228 = *(float *)&m + *(float *)&m;
              v214(v213, v243, v228);
              (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(LODWORD(v207) + 16) + 260))(*(_DWORD *)(LODWORD(v207) + 16));
              v215 = RenderDevice::Instance();
              v216 = *(_DWORD *)(v114 + 208) + 84;
              v217 = v215;
              v218 = *(_DWORD *)(*(_DWORD *)(v114 + 208) + 88);
              if ( !v218 || !((*(_DWORD *)(*(_DWORD *)(v114 + 208) + 92) - v218) / 56) )
                invalid_parameter_noinfo();
              v219 = *(_DWORD *)(v114 + 208);
              v220 = *(_DWORD *)(v219 + 88);
              v221 = v219 + 84;
              if ( v220 )
                v222 = (*(_DWORD *)(v221 + 8) - v220) / 56;
              else
                v222 = 0;
              (*(void (__thiscall **)(struct RenderDevice *, int, unsigned int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)v217 + 420))(
                v217,
                4,
                v222 / 3,
                *(_DWORD *)(v216 + 4),
                56,
                0,
                0);
            }
          }
        }
        LOBYTE(v288) = 5;
        sub_1017A0B0(v266);
      }
      v113 = ++LODWORD(v230);
      v44 = v237;
    }
    Shader::EndPass((Shader *)LODWORD(v44));
    Shader::End((Shader *)LODWORD(v44));
    *(float *)&v243 = 0.0;
    v223 = RenderDevice::Instance();
    v224 = v243;
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v223 + 432))(v223, 195, v243);
    v225 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v225 + 432))(v225, 175, v224);
  }
  if ( v250 )
    operator delete(v250);
  v252 = 0;
  v251 = 0;
  v250 = 0;
  if ( v254 )
    operator delete(v254);
  v256 = 0;
  Source = 0;
  v254 = 0;
  if ( v246 )
    operator delete(v246);
  v248 = 0;
  v247 = 0;
  v246 = 0;
  if ( v240 )
    operator delete(v240);
  v242 = 0;
  v241 = 0;
  v240 = 0;
  if ( v232 )
    operator delete(v232);
}
