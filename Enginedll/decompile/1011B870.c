/*
 * func-name: ?ReadMeshPart_Mem@ILoad@@QAE_NPAVMesh@@AAPAEHHPAUCollisionMesh@@@Z
 * func-address: 0x1011b870
 * callers: 0x1011ed60
 * callees: 0x10009730, 0x1000d680, 0x100117e0, 0x100119b0, 0x1001f620, 0x1002bf00, 0x10059c90, 0x1005b1f0, 0x10077c20, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100977a0, 0x100e2550, 0x100e3ef0, 0x100e4400, 0x10116f70, 0x101189f0, 0x1011f730, 0x1011f7a0, 0x1011f860, 0x1011f990, 0x1017b990, 0x101a24ac, 0x101a2500, 0x101a2516, 0x101a252e, 0x101a253a, 0x101a26c0
 */

char __thiscall ILoad::ReadMeshPart_Mem(
        ILoad *this,
        struct Mesh *a2,
        unsigned __int8 **a3,
        int a4,
        int a5,
        struct CollisionMesh *a6)
{
  char *v6; // edi
  int v7; // ebx
  unsigned int v8; // ebx
  int v9; // ebp
  char *v10; // edi
  bool v11; // cf
  int v12; // ebx
  char *v13; // edi
  int v14; // ebx
  void *v15; // edi
  unsigned __int8 *v16; // eax
  bool v17; // zf
  int v18; // ebp
  char *v19; // ebx
  int v20; // ecx
  char *v21; // edi
  int v22; // ebx
  void *v23; // edi
  unsigned __int8 *v24; // eax
  int v25; // ebp
  char *v26; // ebx
  int v27; // ecx
  char *v28; // edi
  char v29; // cl
  unsigned __int8 *v30; // eax
  int v31; // ecx
  unsigned __int8 *v32; // eax
  int v33; // ebx
  int v34; // ebp
  char *v35; // edx
  int v36; // ecx
  int v37; // edx
  unsigned __int8 *v38; // eax
  int v39; // ebp
  unsigned __int8 *v40; // eax
  int v41; // edx
  int v42; // edx
  unsigned __int8 *v43; // eax
  size_t v44; // edi
  void *v45; // eax
  int *v46; // ecx
  int *v47; // eax
  int v48; // ecx
  unsigned __int8 *v49; // eax
  size_t v50; // edi
  void *v51; // eax
  int *v52; // edx
  void *v53; // eax
  int v54; // edi
  int *v55; // eax
  int v56; // edx
  int *v57; // eax
  int v58; // ecx
  _DWORD *v59; // eax
  unsigned int v60; // ebx
  int v61; // eax
  int v62; // eax
  _DWORD *v63; // eax
  _DWORD *v64; // esi
  int v65; // ebp
  char *v66; // edx
  const void **v67; // edi
  _DWORD *v68; // ecx
  char *v69; // edx
  _DWORD *v70; // ebp
  const void **v71; // edi
  void **v72; // eax
  void **v73; // ecx
  struct RenderDevice *v75; // eax
  int v76; // ecx
  unsigned __int8 *v77; // eax
  size_t v78; // edi
  void *v79; // eax
  int *v80; // ecx
  int v81; // ecx
  unsigned __int8 *v82; // eax
  size_t v83; // edi
  void *v84; // eax
  int *v85; // edx
  int *v86; // eax
  int v87; // ecx
  int *v88; // eax
  int v89; // ebp
  int v90; // ebx
  int *v91; // edi
  char *v92; // ebx
  int v93; // ebx
  int *v94; // edi
  char *v95; // ebx
  int *v96; // eax
  void *v97; // edx
  int v98; // ecx
  int v99; // edx
  int v100; // ecx
  _DWORD *v101; // ecx
  int *v102; // eax
  char *v103; // ebx
  unsigned int i; // edi
  int v105; // ecx
  float *v106; // esi
  CRETimer *v107; // eax
  LARGE_INTEGER *v108; // eax
  ILoad *v109; // eax
  int v110; // ebx
  int v111; // ecx
  _BYTE *v112; // edi
  _DWORD *v113; // eax
  int v114; // ebp
  int v115; // edi
  char *v116; // edx
  char *v117; // eax
  char *v118; // edi
  Material **v119; // ecx
  _BYTE *v120; // edx
  _BYTE *v121; // esi
  unsigned int v122; // ecx
  int v123; // ebx
  unsigned int v124; // ecx
  int v125; // esi
  ILoad *v126; // ebx
  int v127; // edx
  unsigned int v128; // esi
  _DWORD *v129; // esi
  char *v130; // ebx
  int *v131; // edx
  int v132; // edi
  char *v133; // edx
  char *v134; // edi
  ILoad *v135; // ebx
  int v136; // edx
  unsigned int v137; // ecx
  unsigned int v138; // esi
  int v139; // edx
  _DWORD *v140; // esi
  char *v141; // ebx
  int v142; // edi
  char *v143; // edx
  _DWORD *v144; // esi
  _DWORD *v145; // esi
  _DWORD *v146; // esi
  Material **v147; // esi
  int v148; // edi
  int v149; // ebp
  ILoad *v150; // eax
  int v151; // edx
  float *v152; // ecx
  _DWORD *v153; // edi
  _DWORD *v154; // esi
  int v155; // ebp
  _DWORD *v156; // eax
  ILoad *v157; // eax
  int v158; // edx
  float *v159; // ecx
  _DWORD *v160; // edi
  _DWORD *v161; // esi
  int v162; // ebp
  _DWORD *v163; // eax
  char *v164; // eax
  ILoad *v165; // ebp
  int v166; // edi
  char *v167; // esi
  _DWORD *v168; // edi
  _DWORD *v169; // esi
  int v170; // ebp
  _DWORD *v171; // eax
  char *v172; // eax
  int v173; // edx
  float *v174; // ecx
  char *v175; // esi
  void *v176; // eax
  char *v177; // esi
  __int16 v178; // bx
  int v179; // eax
  __int16 v180; // cx
  __int16 v181; // bp
  __int16 v182; // di
  __int16 v183; // dx
  int v184; // ecx
  int v185; // edx
  double v186; // st7
  double v187; // st6
  int v188; // eax
  double v189; // st7
  ILoad *v190; // eax
  char *v191; // eax
  char *v192; // esi
  char *v193; // ebp
  float *v194; // edi
  char *v195; // esi
  _DWORD *v196; // eax
  _DWORD *v197; // eax
  _DWORD *v198; // ecx
  int v199; // edx
  int v200; // ebx
  ILoad *v201; // eax
  ILoad *v202; // esi
  char *v203; // edi
  _DWORD *v204; // esi
  int v205; // ebp
  _DWORD *v206; // eax
  struct Profiler *v207; // eax
  struct Profiler *v208; // eax
  struct Profiler *v209; // eax
  struct Profiler *v210; // eax
  char v211; // [esp-64h] [ebp-268h] BYREF
  int v212; // [esp-60h] [ebp-264h]
  int v213; // [esp-5Ch] [ebp-260h]
  int v214; // [esp-58h] [ebp-25Ch]
  int v215; // [esp-54h] [ebp-258h]
  int v216; // [esp-50h] [ebp-254h]
  int v217; // [esp-4Ch] [ebp-250h]
  int v218; // [esp-48h] [ebp-24Ch]
  void *v219; // [esp-44h] [ebp-248h]
  int v220; // [esp-40h] [ebp-244h]
  int v221; // [esp-3Ch] [ebp-240h]
  int v222; // [esp-38h] [ebp-23Ch]
  void *v223; // [esp-34h] [ebp-238h]
  int v224; // [esp-30h] [ebp-234h]
  int v225; // [esp-2Ch] [ebp-230h]
  int v226; // [esp-28h] [ebp-22Ch]
  int v227; // [esp-24h] [ebp-228h]
  int v228; // [esp-20h] [ebp-224h]
  int v229; // [esp-1Ch] [ebp-220h]
  int v230; // [esp-18h] [ebp-21Ch]
  int v231; // [esp-14h] [ebp-218h]
  int v232; // [esp-10h] [ebp-214h]
  int v233; // [esp-Ch] [ebp-210h]
  int v234; // [esp-8h] [ebp-20Ch]
  int v235; // [esp-4h] [ebp-208h]
  int v236; // [esp+0h] [ebp-204h]
  int v237; // [esp+4h] [ebp-200h]
  int *v238; // [esp+8h] [ebp-1FCh] BYREF
  int v239; // [esp+Ch] [ebp-1F8h]
  int v240; // [esp+10h] [ebp-1F4h]
  int v241; // [esp+14h] [ebp-1F0h]
  int v242; // [esp+28h] [ebp-1DCh] BYREF
  ILoad *v243; // [esp+2Ch] [ebp-1D8h]
  void *Src; // [esp+30h] [ebp-1D4h] BYREF
  int v245; // [esp+34h] [ebp-1D0h]
  int v246; // [esp+38h] [ebp-1CCh]
  int v247; // [esp+3Ch] [ebp-1C8h] BYREF
  void *v248; // [esp+40h] [ebp-1C4h]
  void *Source; // [esp+44h] [ebp-1C0h]
  int v250; // [esp+48h] [ebp-1BCh]
  int v251[2]; // [esp+4Ch] [ebp-1B8h] BYREF
  int v252; // [esp+54h] [ebp-1B0h] BYREF
  int v253; // [esp+58h] [ebp-1ACh]
  int v254; // [esp+5Ch] [ebp-1A8h] BYREF
  _DWORD *v255; // [esp+60h] [ebp-1A4h]
  int v256; // [esp+64h] [ebp-1A0h] BYREF
  void *v257; // [esp+68h] [ebp-19Ch]
  void *v258; // [esp+6Ch] [ebp-198h]
  int v259; // [esp+70h] [ebp-194h]
  int v260; // [esp+74h] [ebp-190h] BYREF
  void *v261; // [esp+78h] [ebp-18Ch]
  int v262; // [esp+7Ch] [ebp-188h]
  int v263; // [esp+80h] [ebp-184h]
  void *v264; // [esp+84h] [ebp-180h]
  char v265; // [esp+8Bh] [ebp-179h]
  int v266; // [esp+8Ch] [ebp-178h] BYREF
  void *v267; // [esp+90h] [ebp-174h]
  int v268; // [esp+94h] [ebp-170h]
  int v269; // [esp+98h] [ebp-16Ch]
  int v270; // [esp+9Ch] [ebp-168h] BYREF
  void *v271; // [esp+A0h] [ebp-164h]
  int v272; // [esp+A4h] [ebp-160h]
  int v273; // [esp+A8h] [ebp-15Ch]
  int v274; // [esp+ACh] [ebp-158h] BYREF
  void *v275; // [esp+B0h] [ebp-154h]
  int v276; // [esp+B4h] [ebp-150h]
  int v277; // [esp+B8h] [ebp-14Ch]
  int v278; // [esp+BCh] [ebp-148h]
  int v279; // [esp+C0h] [ebp-144h] BYREF
  void *v280; // [esp+C4h] [ebp-140h]
  int v281; // [esp+C8h] [ebp-13Ch]
  int v282; // [esp+CCh] [ebp-138h]
  int v283[2]; // [esp+D0h] [ebp-134h] BYREF
  _DWORD v284[5]; // [esp+D8h] [ebp-12Ch] BYREF
  int v285; // [esp+ECh] [ebp-118h] BYREF
  _BYTE v286[260]; // [esp+F4h] [ebp-110h] BYREF
  int v287; // [esp+200h] [ebp-4h]

  v6 = 0;
  v243 = this;
  v261 = 0;
  v262 = 0;
  v263 = 0;
  v287 = 0;
  if ( a4 > 12 )
  {
    v7 = *(_DWORD *)*a3;
    *a3 += 4;
    v251[0] = (int)&v211;
    Mesh::SkinWeights::SkinWeights((Mesh::SkinWeights *)&v211);
    sub_1011F990(
      (int)&v260,
      v7,
      v211,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217,
      v218,
      v219,
      v220,
      v221,
      v222,
      v223,
      v224,
      v225,
      v226,
      v227,
      v228,
      v229,
      v230,
      v231,
      v232,
      v233,
      v234,
      v235,
      v236,
      v237,
      (int)v238,
      v239,
      v240,
      v241);
    v246 = 0;
    v242 = 0;
    while ( v261 )
    {
      v8 = (v262 - (int)v261) / 124;
      if ( v246 >= v8 )
        break;
      v10 = (char *)(*a3 + 4);
      v241 = *(_DWORD *)*a3;
      v9 = v241;
      v240 = (int)v10;
      v239 = (int)v286;
      *a3 = (unsigned __int8 *)v10;
      memcpy((void *)v239, (const void *)v240, v241);
      v11 = v246 < v8;
      *a3 = (unsigned __int8 *)&v10[v9];
      v286[v9] = 0;
      if ( !v11 )
        invalid_parameter_noinfo();
      v12 = v242;
      std::string::operator=((char *)v261 + v242, v286);
      v13 = (char *)v261;
      if ( !v261 || v246 >= (unsigned int)((v262 - (int)v261) / 124) )
      {
        invalid_parameter_noinfo();
        v13 = (char *)v261;
      }
      memcpy(&v13[v12 + 60], *a3, 0x40u);
      *a3 += 64;
      v14 = *(_DWORD *)*a3;
      v15 = v261;
      v16 = *a3 + 4;
      v17 = v261 == 0;
      v252 = v14;
      *a3 = v16;
      if ( v17 || v246 >= (unsigned int)((v262 - (int)v15) / 124) )
      {
        invalid_parameter_noinfo();
        v15 = v261;
      }
      sub_1011F7A0((int)v15 + v242 + 28, v14, 0);
      v18 = 0;
      if ( v14 > 0 )
      {
        do
        {
          v19 = (char *)v261;
          if ( !v261 || v246 >= (unsigned int)((v262 - (int)v261) / 124) )
          {
            invalid_parameter_noinfo();
            v19 = (char *)v261;
          }
          v20 = *(_DWORD *)&v19[v242 + 32];
          v21 = &v19[v242 + 32];
          if ( !v20 || v18 >= (unsigned int)((*(_DWORD *)&v19[v242 + 36] - v20) >> 2) )
            invalid_parameter_noinfo();
          *(_DWORD *)(*(_DWORD *)v21 + 4 * v18) = *(_DWORD *)*a3;
          *a3 += 4;
          ++v18;
        }
        while ( v18 < v252 );
      }
      v22 = *(_DWORD *)*a3;
      v23 = v261;
      v24 = *a3 + 4;
      v17 = v261 == 0;
      v252 = v22;
      *a3 = v24;
      if ( v17 || v246 >= (unsigned int)((v262 - (int)v23) / 124) )
      {
        invalid_parameter_noinfo();
        v23 = v261;
      }
      sub_1011F860((int)v23 + v242 + 44, v22, COERCE_INT(0.0));
      v25 = 0;
      if ( v22 > 0 )
      {
        do
        {
          v26 = (char *)v261;
          if ( !v261 || v246 >= (unsigned int)((v262 - (int)v261) / 124) )
          {
            invalid_parameter_noinfo();
            v26 = (char *)v261;
          }
          v27 = *(_DWORD *)&v26[v242 + 48];
          v28 = &v26[v242 + 48];
          if ( !v27 || v25 >= (unsigned int)((*(_DWORD *)&v26[v242 + 52] - v27) >> 2) )
            invalid_parameter_noinfo();
          *(_DWORD *)(*(_DWORD *)v28 + 4 * v25) = *(_DWORD *)*a3;
          *a3 += 4;
          ++v25;
        }
        while ( v25 < v252 );
      }
      ++v246;
      v242 += 124;
      v6 = 0;
    }
  }
  v29 = **a3;
  v30 = *a3 + 1;
  *a3 = v30;
  v265 = v29;
  v31 = *(_DWORD *)v30;
  v32 = v30 + 4;
  v245 = v31;
  *a3 = v32;
  v257 = 0;
  v258 = 0;
  v259 = 0;
  LOBYTE(v287) = 1;
  v246 = 0;
  v253 = 0;
  if ( a4 >= 20 )
  {
    v76 = *(_DWORD *)v32;
    v77 = v32 + 4;
    *a3 = v77;
    v253 = *(_DWORD *)v77;
    v78 = v76 * v253;
    v241 = v76 * v253;
    v242 = v76;
    *a3 = v77 + 4;
    v79 = operator new(v241);
    v80 = (int *)*a3;
    Src = v79;
    memcpy(v79, v80, v78);
    *a3 += v78;
    v81 = *(_DWORD *)*a3;
    v82 = *a3 + 4;
    *a3 = v82;
    v246 = *(_DWORD *)v82;
    v83 = v81 * v246;
    v237 = v81 * v246;
    v252 = v81;
    *a3 = v82 + 4;
    v84 = operator new(v237);
    v85 = (int *)*a3;
    v264 = v84;
    memcpy(v84, v85, v83);
    *a3 += v83;
    v86 = (int *)*a3;
    if ( a4 <= 20 || (v87 = *v86, *a3 = (unsigned __int8 *)(v86 + 1), v87 <= 0) )
    {
      v88 = (int *)v258;
    }
    else
    {
      v88 = (int *)v258;
      v89 = v87;
      do
      {
        v90 = *(_DWORD *)*a3;
        v91 = (int *)v257;
        v17 = v257 == 0;
        *a3 += 4;
        v254 = v90;
        if ( v17 || v88 - v91 >= (unsigned int)((v259 - (int)v91) >> 2) )
        {
          v92 = (char *)v88;
          if ( v91 > v88 )
            invalid_parameter_noinfo();
          sub_10059C90(&v256, v251, &v256, v92, &v254);
          v88 = (int *)v258;
        }
        else
        {
          *v88++ = v90;
          v258 = v88;
        }
        --v89;
      }
      while ( v89 );
    }
    if ( v245 > 0 )
    {
      v283[0] = (int)a2 + 2476;
      while ( 1 )
      {
        if ( a4 <= 20 )
        {
          v93 = *(_DWORD *)*a3;
          v94 = (int *)v257;
          v17 = v257 == 0;
          *a3 += 4;
          v254 = v93;
          if ( v17 || v88 - v94 >= (unsigned int)((v259 - (int)v94) >> 2) )
          {
            v95 = (char *)v88;
            if ( v94 > v88 )
              invalid_parameter_noinfo();
            sub_10059C90(&v256, v251, &v256, v95, &v254);
          }
          else
          {
            *v88 = v93;
            v258 = v88 + 1;
          }
        }
        v96 = (int *)*a3;
        v97 = (void *)*((_DWORD *)*a3 + 1);
        v274 = *(_DWORD *)*a3;
        v98 = v96[2];
        v275 = v97;
        v99 = v96[3];
        v276 = v98;
        v100 = v96[4];
        v277 = v99;
        v278 = v100;
        v101 = (_DWORD *)v283[0];
        v241 = (int)&v274;
        *a3 = (unsigned __int8 *)(v96 + 5);
        std::vector<AttributeRange>::push_back(v101, (_DWORD *)v241);
        if ( a4 > 20 )
        {
          v102 = (int *)*a3;
          v103 = *(char **)*a3;
          v241 = 0;
          v240 = (int)v103;
          *a3 = (unsigned __int8 *)(v102 + 1);
          sub_1011F7A0((int)a2 + 36, v240, v241);
          for ( i = 0; (int)i < (int)v103; ++i )
          {
            v105 = *((_DWORD *)a2 + 10);
            if ( !v105 || i >= (*((_DWORD *)a2 + 11) - v105) >> 2 )
              invalid_parameter_noinfo();
            *(_DWORD *)(*((_DWORD *)a2 + 10) + 4 * i) = *(_DWORD *)*a3;
            *a3 += 4;
          }
        }
        if ( !--v245 )
          break;
        v88 = (int *)v258;
      }
    }
    goto LABEL_162;
  }
  v275 = 0;
  v276 = 0;
  v277 = 0;
  v280 = 0;
  v281 = 0;
  v282 = 0;
  v271 = 0;
  v272 = 0;
  v273 = 0;
  v267 = 0;
  v268 = 0;
  v269 = 0;
  LOBYTE(v287) = 5;
  v264 = 0;
  if ( v31 <= 0 )
  {
LABEL_120:
    v75 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, struct Mesh *))(*(_DWORD *)v75 + 12))(v75, a2);
    SeriousWarning("Mesh is empty (corrupted?). Skipping...");
    if ( v267 )
      operator delete(v267);
    v267 = 0;
    v268 = 0;
    v269 = 0;
    if ( v271 )
      operator delete(v271);
    v271 = 0;
    v272 = 0;
    v273 = 0;
    if ( v280 )
      operator delete(v280);
    v280 = 0;
    v281 = 0;
    v282 = 0;
    if ( v275 )
      operator delete(v275);
    v275 = 0;
    v276 = 0;
    v277 = 0;
LABEL_129:
    if ( v257 )
      operator delete(v257);
    v257 = 0;
    v258 = 0;
    v259 = 0;
    v287 = -1;
    if ( !v261 )
      return 0;
    v241 = v251[0];
    v240 = (int)&v260;
    sub_100119B0((int)v261, v262);
    operator delete(v261);
    return 0;
  }
  v33 = v251[0];
  while ( 1 )
  {
    if ( a4 >= 11 )
    {
      v34 = *(_DWORD *)*a3;
      v35 = (char *)v257;
      v17 = v257 == 0;
      *a3 += 4;
      v242 = v34;
      if ( v17 || (v6 - v35) >> 2 >= (unsigned int)((v259 - (int)v35) >> 2) )
      {
        if ( v35 > v6 )
          invalid_parameter_noinfo();
        sub_10059C90(&v256, v251, &v256, v6, &v242);
        v6 = (char *)v258;
      }
      else
      {
        *(_DWORD *)v6 = v34;
        v6 += 4;
        v258 = v6;
      }
    }
    v36 = *(_DWORD *)*a3;
    v37 = v253;
    v38 = *a3 + 4;
    *a3 = v38;
    v39 = *(_DWORD *)v38;
    v40 = v38 + 4;
    v254 = v36;
    *a3 = v40;
    v242 = v37;
    if ( a4 > 13 )
    {
      v41 = *(_DWORD *)v40;
      *a3 = v40 + 4;
      v242 = v41;
    }
    if ( a4 >= 11 )
    {
      v42 = *(_DWORD *)*a3;
      v43 = *a3 + 4;
      *a3 = v43;
      v33 = *(_DWORD *)v43;
      v252 = v42;
      *a3 = v43 + 4;
      if ( !v39 || !v33 )
        goto LABEL_53;
    }
    if ( v39 < 0 || v36 < 0 )
      break;
    v44 = v36 * v39;
    v45 = operator new(v36 * v39);
    v46 = (int *)*a3;
    Src = v45;
    memcpy(v45, v46, v44);
    *a3 += v44;
    v47 = (int *)*a3;
    if ( a4 < 11 )
    {
      v48 = *v47;
      v49 = (unsigned __int8 *)(v47 + 1);
      *a3 = v49;
      v33 = *(_DWORD *)v49;
      v252 = v48;
      *a3 = v49 + 4;
    }
    v50 = v252 * v33;
    v51 = operator new(v252 * v33);
    v52 = (int *)*a3;
    v283[0] = (int)v51;
    memcpy(v51, v52, v50);
    v53 = v264;
    *a3 += v50;
    v54 = v246;
    v284[0] = v53;
    v284[2] = v33 / 3;
    v284[3] = v242;
    v284[4] = v39;
    v284[1] = v246 / 3;
    std::vector<AttributeRange>::push_back((_DWORD *)a2 + 619, v284);
    v253 += v39;
    v246 = v33 + v54;
    sub_1011F730((int)&v274, (int)&Src);
    sub_1011F730((int)&v279, (int)v283);
    sub_1005B1F0(&v270, &v252);
    sub_1005B1F0(&v266, &v254);
    v6 = (char *)v258;
LABEL_53:
    v264 = (char *)v264 + 1;
    if ( (int)v264 >= v245 )
    {
      if ( v253 && v246 )
      {
        v55 = (int *)v271;
        if ( !v271 || !((v272 - (int)v271) >> 2) )
        {
          invalid_parameter_noinfo();
          v55 = (int *)v271;
        }
        v56 = *v55;
        v57 = (int *)v267;
        v252 = v56;
        if ( !v267 || (v58 = v268, !((v268 - (int)v267) >> 2)) )
        {
          invalid_parameter_noinfo();
          v58 = v268;
          v57 = (int *)v267;
        }
        v242 = *v57;
        if ( !((v58 - (int)v57) >> 2) )
        {
          invalid_parameter_noinfo();
          v57 = (int *)v267;
        }
        Src = operator new(v253 * *v57);
        v59 = v271;
        if ( !v271 || !((v272 - (int)v271) >> 2) )
        {
          invalid_parameter_noinfo();
          v59 = v271;
        }
        v264 = operator new(v246 * *v59);
        v60 = 0;
        v245 = 0;
        while ( 1 )
        {
          v61 = *((_DWORD *)a2 + 620);
          if ( !v61 || v60 >= (*((_DWORD *)a2 + 621) - v61) / 20 )
            break;
          v62 = *((_DWORD *)a2 + 620);
          if ( !v62 || v60 >= (*((_DWORD *)a2 + 621) - v62) / 20 )
            invalid_parameter_noinfo();
          v63 = v267;
          v64 = (_DWORD *)(v245 + *((_DWORD *)a2 + 620));
          if ( !v267 || (v65 = v268, !((v268 - (int)v267) >> 2)) )
          {
            invalid_parameter_noinfo();
            v65 = v268;
            v63 = v267;
          }
          v66 = (char *)v275;
          v254 = (int)v63;
          if ( !v275 || v60 >= (v276 - (int)v275) >> 2 )
          {
            invalid_parameter_noinfo();
            v66 = (char *)v275;
            v65 = v268;
            v63 = v267;
          }
          v67 = (const void **)&v66[4 * v60];
          if ( !v63 || !((v65 - (int)v63) >> 2) )
          {
            invalid_parameter_noinfo();
            v63 = v267;
          }
          memcpy((char *)Src + *v63 * v64[3], *v67, *(_DWORD *)v254 * v64[4]);
          v68 = v271;
          if ( !v271 || !((v272 - (int)v271) >> 2) )
          {
            invalid_parameter_noinfo();
            v68 = v271;
          }
          v69 = (char *)v280;
          v70 = v68;
          if ( !v280 || v60 >= (v281 - (int)v280) >> 2 )
          {
            invalid_parameter_noinfo();
            v69 = (char *)v280;
            v68 = v271;
          }
          v71 = (const void **)&v69[4 * v60];
          if ( !v68 || !((v272 - (int)v68) >> 2) )
          {
            invalid_parameter_noinfo();
            v68 = v271;
          }
          memcpy((char *)v264 + 2 * *v68 * v64[1] + *v68 * v64[1], *v71, 3 * *v70 * v64[2]);
          v72 = (void **)v275;
          if ( !v275 || v60 >= (v276 - (int)v275) >> 2 )
          {
            invalid_parameter_noinfo();
            v72 = (void **)v275;
          }
          operator delete[](v72[v60]);
          v73 = (void **)v280;
          if ( !v280 || v60 >= (v281 - (int)v280) >> 2 )
          {
            invalid_parameter_noinfo();
            v73 = (void **)v280;
          }
          operator delete[](v73[v60]);
          v245 += 20;
          ++v60;
        }
        if ( v267 )
          operator delete(v267);
        v267 = 0;
        v268 = 0;
        v269 = 0;
        if ( v271 )
          operator delete(v271);
        v271 = 0;
        v272 = 0;
        v273 = 0;
        if ( v280 )
          operator delete(v280);
        v280 = 0;
        v281 = 0;
        v282 = 0;
        LOBYTE(v287) = 1;
        if ( v275 )
          operator delete(v275);
        v275 = 0;
        v276 = 0;
        v277 = 0;
LABEL_162:
        v106 = (float *)((char *)Profiler::Get() + 148);
        v107 = REGetGlobalTimer();
        *v106 = CRETimer::StopMiniTimer(v107) / 1000.0 + *v106;
        v108 = (LARGE_INTEGER *)REGetGlobalTimer();
        CRETimer::StartMiniTimer(v108);
        v109 = v243;
        v110 = v253;
        v111 = v246;
        *((_DWORD *)v243 + 1) += v253;
        *((_DWORD *)v109 + 2) += v111;
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v248 = 0;
        Source = 0;
        v250 = 0;
        LOBYTE(v287) = 6;
        if ( a5 == -1 )
        {
          v115 = *(_DWORD *)MaterialManager::Instance();
          v116 = (char *)Source;
          v254 = v115;
          if ( v248 && ((_BYTE *)Source - (_BYTE *)v248) >> 2 < (unsigned int)((v250 - (int)v248) >> 2) )
          {
            v117 = (char *)Source + 4;
            *(_DWORD *)Source = v115;
            Source = v116 + 4;
          }
          else
          {
            v118 = (char *)Source;
            if ( v248 > Source )
              invalid_parameter_noinfo();
            std::vector<Material *>::insert(&v247, v251, &v247, v118, &v254);
            v117 = (char *)Source;
          }
          v119 = (Material **)v248;
          if ( !v248 || !((v117 - (_BYTE *)v248) >> 2) )
          {
            invalid_parameter_noinfo();
            v119 = (Material **)v248;
          }
          Material::AddRef(*v119);
LABEL_241:
          v148 = v242;
          v149 = v246;
          if ( v242 == 44 )
          {
            v150 = (ILoad *)operator new(56 * v110);
            if ( v150 )
            {
              v151 = v110 - 1;
              if ( v110 - 1 >= 0 )
              {
                v152 = (float *)((char *)v150 + 20);
                do
                {
                  *(v152 - 5) = 0.0;
                  v152 += 14;
                  --v151;
                  *(v152 - 18) = 0.0;
                  *(v152 - 17) = 0.0;
                  *(v152 - 16) = 0.0;
                  *(v152 - 15) = 0.0;
                  *(v152 - 14) = 0.0;
                  *(v152 - 13) = 0.0;
                  *(v152 - 12) = 0.0;
                  *(v152 - 11) = 0.0;
                  *(v152 - 10) = 0.0;
                  *(v152 - 9) = 0.0;
                  *(v152 - 8) = 0.0;
                  *(v152 - 7) = 0.0;
                  *(v152 - 6) = 0.0;
                }
                while ( v151 >= 0 );
              }
              v243 = v150;
            }
            else
            {
              v243 = 0;
            }
            if ( v110 > 0 )
            {
              v153 = Src;
              v154 = (_DWORD *)((char *)v243 + 12);
              v155 = v110;
              do
              {
                memcpy(v154 - 3, v153, 0x24u);
                v156 = (_DWORD *)sub_1017B990(v284, v154, v154 + 3);
                v154[6] = *v156;
                v154[7] = v156[1];
                v154[8] = v156[2];
                v154[9] = v153[9];
                v154[10] = v153[10];
                v153 += 11;
                v154 += 14;
                --v155;
              }
              while ( v155 );
            }
            v148 = 56;
            operator delete[](Src);
            Src = v243;
          }
          else
          {
            switch ( v242 )
            {
              case 48:
                v157 = (ILoad *)operator new(60 * v110);
                if ( v157 )
                {
                  v158 = v110 - 1;
                  if ( v110 - 1 >= 0 )
                  {
                    v159 = (float *)((char *)v157 + 20);
                    do
                    {
                      *(v159 - 5) = 0.0;
                      v159 += 15;
                      --v158;
                      *(v159 - 19) = 0.0;
                      *(v159 - 18) = 0.0;
                      *(v159 - 17) = 0.0;
                      *(v159 - 16) = 0.0;
                      *(v159 - 15) = 0.0;
                      *(v159 - 14) = 0.0;
                      *(v159 - 13) = 0.0;
                      *(v159 - 12) = 0.0;
                      *(v159 - 11) = 0.0;
                      *(v159 - 10) = 0.0;
                      *(v159 - 9) = 0.0;
                      *(v159 - 8) = 0.0;
                      *(v159 - 7) = 0.0;
                    }
                    while ( v158 >= 0 );
                  }
                  v243 = v157;
                }
                else
                {
                  v243 = 0;
                }
                if ( v110 > 0 )
                {
                  v160 = (char *)Src + 36;
                  v161 = (_DWORD *)((char *)v243 + 12);
                  v162 = v110;
                  do
                  {
                    memcpy(v161 - 3, v160 - 9, 0x24u);
                    v163 = (_DWORD *)sub_1017B990(v284, v161, v161 + 3);
                    v161[6] = *v163;
                    v161[7] = v163[1];
                    v161[8] = v163[2];
                    v161[9] = *v160;
                    v161[10] = v160[1];
                    v161[11] = v160[2];
                    v160 += 12;
                    v161 += 15;
                    --v162;
                  }
                  while ( v162 );
                }
                v148 = 60;
                break;
              case 52:
                v164 = (char *)operator new(v110 << 6);
                v165 = (ILoad *)v164;
                v251[0] = (int)v164;
                LOBYTE(v287) = 7;
                if ( v164 )
                {
                  v166 = v110 - 1;
                  if ( v110 - 1 >= 0 )
                  {
                    v167 = v164 + 20;
                    do
                    {
                      v241 = (int)sub_100012C0;
                      *((float *)v167 - 5) = 0.0;
                      v240 = 2;
                      *((float *)v167 - 4) = 0.0;
                      v239 = 8;
                      *((float *)v167 - 3) = 0.0;
                      *((float *)v167 - 2) = 0.0;
                      v238 = (int *)(v167 + 28);
                      *((float *)v167 - 1) = 0.0;
                      *(float *)v167 = 0.0;
                      *((float *)v167 + 1) = 0.0;
                      *((float *)v167 + 2) = 0.0;
                      *((float *)v167 + 3) = 0.0;
                      *((float *)v167 + 4) = 0.0;
                      *((float *)v167 + 5) = 0.0;
                      *((float *)v167 + 6) = 0.0;
                      sub_10009730((int)v238, v239, v240, (int (__thiscall *)(int))v241);
                      v167 += 64;
                      --v166;
                    }
                    while ( v166 >= 0 );
                  }
                  v243 = v165;
                }
                else
                {
                  v243 = 0;
                }
                LOBYTE(v287) = 6;
                if ( v110 > 0 )
                {
                  v168 = (char *)Src + 36;
                  v169 = (_DWORD *)((char *)v243 + 12);
                  v170 = v110;
                  do
                  {
                    memcpy(v169 - 3, v168 - 9, 0x24u);
                    v171 = (_DWORD *)sub_1017B990(v284, v169, v169 + 3);
                    v169[6] = *v171;
                    v169[7] = v171[1];
                    v169[8] = v171[2];
                    v169[9] = *v168;
                    v169[10] = v168[1];
                    v169[11] = v168[2];
                    v169[12] = v168[3];
                    v168 += 13;
                    v169 += 16;
                    --v170;
                  }
                  while ( v170 );
                }
                v148 = 64;
                break;
              case 32:
                v172 = (char *)operator new(40 * v110);
                if ( v172 )
                {
                  v173 = v110 - 1;
                  if ( v110 - 1 >= 0 )
                  {
                    v174 = (float *)(v172 + 8);
                    do
                    {
                      *(v174 - 2) = 0.0;
                      v174 += 10;
                      --v173;
                      *(v174 - 11) = 0.0;
                      *(v174 - 10) = 0.0;
                    }
                    while ( v173 >= 0 );
                  }
                  v175 = v172;
                  v245 = (int)v172;
                }
                else
                {
                  v175 = 0;
                  v245 = 0;
                }
                if ( v110 > 0 )
                {
                  v176 = Src;
                  v243 = (ILoad *)Src;
                  v177 = v175 + 24;
                  v242 = v253;
                  do
                  {
                    memcpy(v177 - 24, v176, 0x1Cu);
                    v178 = *((_WORD *)v177 - 4);
                    LOWORD(v179) = v178 * *((_WORD *)v177 - 1) - *(_WORD *)v177 * *((_WORD *)v177 - 5);
                    v180 = *(_WORD *)v177 * *((_WORD *)v177 - 6);
                    v181 = v178 * *((_WORD *)v177 - 2);
                    v182 = *((_WORD *)v177 - 1) * *((_WORD *)v177 - 6);
                    v183 = *((_WORD *)v177 - 2) * *((_WORD *)v177 - 5);
                    *((_WORD *)v177 + 2) = v179;
                    v179 = (__int16)v179;
                    LOWORD(v184) = v180 - v181;
                    LOWORD(v185) = v183 - v182;
                    *((_WORD *)v177 + 3) = v184;
                    v184 = (__int16)v184;
                    v283[0] = (__int16)v179;
                    *((_WORD *)v177 + 4) = v185;
                    v185 = (__int16)v185;
                    v285 = (__int16)v184;
                    v251[0] = (__int16)v185;
                    *(float *)&v254 = (float)(v185 * v185 + v184 * v184 + v179 * v179);
                    if ( *(float *)&v254 >= 0.0000000099999999 )
                    {
                      *(float *)&v254 = sqrt(*(float *)&v254);
                      *(float *)&v254 = 1.0 / *(float *)&v254;
                      v186 = *(float *)&v254;
                      v187 = (double)v285;
                      *((_WORD *)v177 + 2) = (int)((double)v283[0] * *(float *)&v254);
                      v188 = (int)(v187 * v186);
                      v189 = v186 * (double)v251[0];
                      *((_WORD *)v177 + 3) = v188;
                      *((_WORD *)v177 + 4) = (int)v189;
                    }
                    v190 = v243;
                    *((_DWORD *)v177 + 3) = *((_DWORD *)v243 + 7);
                    v176 = (char *)v190 + 32;
                    v177 += 40;
                    v17 = v242-- == 1;
                    v243 = (ILoad *)v176;
                  }
                  while ( !v17 );
                  v175 = (char *)v245;
                }
                v242 = 40;
                operator delete[](Src);
                v110 = v253;
                v148 = v242;
                Src = v175;
                goto LABEL_308;
              case 144:
                v191 = (char *)operator new(156 * v110);
                v192 = v191;
                v251[0] = (int)v191;
                LOBYTE(v287) = 8;
                if ( v191 )
                  sub_10009730((int)v191, 156, v110, (int (__thiscall *)(int))sub_1011F160);
                else
                  v192 = 0;
                v242 = (int)v192;
                LOBYTE(v287) = 6;
                if ( v110 > 0 )
                {
                  v193 = (char *)Src + 44;
                  v194 = (float *)((char *)Src + 40);
                  v195 = v192 + 12;
                  v243 = (ILoad *)v110;
                  do
                  {
                    memcpy(v195 - 12, v194 - 10, 0x24u);
                    v196 = (_DWORD *)sub_1017B990(v284, v195, v195 + 12);
                    *((_DWORD *)v195 + 6) = *v196;
                    *((_DWORD *)v195 + 7) = v196[1];
                    *((_DWORD *)v195 + 8) = v196[2];
                    *((float *)v195 + 9) = *(v194 - 1);
                    v197 = v193;
                    *((float *)v195 + 10) = *v194;
                    *((float *)v195 + 11) = v194[1];
                    v198 = v195 + 48;
                    v199 = 6;
                    do
                    {
                      v200 = v197[4];
                      v197 += 4;
                      *v198 = v200;
                      v198[1] = v197[1];
                      v198[2] = v197[2];
                      v198[3] = v197[3];
                      v198 += 4;
                      --v199;
                    }
                    while ( v199 );
                    v194 += 36;
                    v193 += 144;
                    v195 += 156;
                    v243 = (ILoad *)((char *)v243 - 1);
                  }
                  while ( v243 );
                  v110 = v253;
                  v192 = (char *)v242;
                }
                v242 = 156;
                operator delete[](Src);
                v148 = v242;
                Src = v192;
                goto LABEL_308;
              case 60:
                v201 = (ILoad *)operator new(72 * v110);
                v202 = v201;
                v251[0] = (int)v201;
                LOBYTE(v287) = 9;
                if ( v201 )
                {
                  sub_10009730((int)v201, 72, v110, (int (__thiscall *)(int))sub_1011F1F0);
                  v243 = v202;
                }
                else
                {
                  v243 = 0;
                }
                LOBYTE(v287) = 6;
                if ( v110 > 0 )
                {
                  v203 = (char *)Src;
                  v204 = (_DWORD *)((char *)v243 + 28);
                  v205 = v110;
                  do
                  {
                    memcpy(v204 - 7, v203, 0x3Cu);
                    v206 = (_DWORD *)sub_1017B990(v284, v204, v204 + 5);
                    v204[8] = *v206;
                    v204[9] = v206[1];
                    v204[10] = v206[2];
                    v203 += 60;
                    v204 += 18;
                    --v205;
                  }
                  while ( v205 );
                }
                v148 = 72;
                break;
              default:
LABEL_309:
                v207 = Profiler::Get();
                *((_DWORD *)v207 + 40) += v110;
                v208 = Profiler::Get();
                *((_DWORD *)v208 + 41) += v149;
                v209 = Profiler::Get();
                *((_DWORD *)v209 + 42) += v110 * v148;
                v210 = Profiler::Get();
                *((_DWORD *)v210 + 43) += v149 * v252;
                v251[0] = (int)&v238;
                std::vector<Material *>::vector<Material *>(&v238, (int)&v247);
                if ( (*(unsigned __int8 (__thiscall **)(struct Mesh *, void *, void *, int, int, int, int, int *, int, int, int))(*(_DWORD *)a2 + 72))(
                       a2,
                       Src,
                       v264,
                       v148,
                       v252,
                       v110,
                       v149,
                       v238,
                       v239,
                       v240,
                       v241) )
                {
                  if ( v261 )
                  {
                    if ( (v262 - (int)v261) / 124 )
                    {
                      (*(void (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 40))(a2, &v260);
                      if ( Serializer::s_UseSkinning )
                        (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 96))(a2);
                    }
                  }
                  if ( !v265 && (!v261 || !((v262 - (int)v261) / 124)) )
                    (*(void (__thiscall **)(struct Mesh *, int))(*(_DWORD *)a2 + 56))(a2, 1);
                  if ( a6 )
                    sub_10077C20((int)a6, Src, (int)v264, v148, v252, v110, v149, (int)a2 + 2460, (int)a2);
                  operator delete[](v264);
                  operator delete[](Src);
                  if ( v248 )
                    operator delete(v248);
                  v248 = 0;
                  Source = 0;
                  v250 = 0;
                  if ( v257 )
                    operator delete(v257);
                  v257 = 0;
                  v258 = 0;
                  v259 = 0;
                  v287 = -1;
                  if ( v261 )
                  {
                    v241 = v251[0];
                    v240 = (int)&v260;
                    sub_100119B0((int)v261, v262);
                    operator delete(v261);
                  }
                  return 1;
                }
                SeriousWarning("Mesh create failed with %d verts and %d inds", v110, v149);
                if ( v248 )
                  operator delete(v248);
                v248 = 0;
                Source = 0;
                v250 = 0;
                goto LABEL_129;
            }
            operator delete[](Src);
            Src = v243;
          }
LABEL_308:
          LogPrintf("WARNING: Old mesh without binormals.");
          v149 = v246;
          goto LABEL_309;
        }
        v245 = 0;
        while ( 1 )
        {
          v120 = v257;
          if ( !v257 )
            goto LABEL_241;
          v121 = v258;
          v122 = ((_BYTE *)v258 - (_BYTE *)v257) >> 2;
          if ( v245 >= v122 )
          {
            v110 = v253;
            goto LABEL_241;
          }
          if ( a4 < 11 )
          {
            v135 = v243;
            v136 = *((_DWORD *)v243 + 8);
            if ( v136 )
              v137 = (*((_DWORD *)v243 + 9) - v136) >> 2;
            else
              v137 = 0;
            v138 = a5 + v245;
            if ( a5 + v245 < v137 )
            {
              v139 = *((_DWORD *)v243 + 8);
              if ( !v139 || v138 >= (*((_DWORD *)v243 + 9) - v139) >> 2 )
              {
                invalid_parameter_noinfo();
                v114 = v250;
                v113 = Source;
                v112 = v248;
              }
              v140 = (_DWORD *)(*((_DWORD *)v135 + 8) + 4 * v138);
              if ( v112 && ((char *)v113 - v112) >> 2 < (unsigned int)((v114 - (int)v112) >> 2) )
              {
                *v113++ = *v140;
                Source = v113;
                goto LABEL_223;
              }
              v141 = (char *)v113;
              if ( v112 > (_BYTE *)v113 )
                invalid_parameter_noinfo();
              v241 = (int)v140;
              v240 = (int)v141;
              v239 = (int)&v247;
              v238 = v283;
              goto LABEL_222;
            }
            v142 = *(_DWORD *)MaterialManager::Instance();
            v143 = (char *)Source;
            v254 = v142;
            if ( v248 && ((_BYTE *)Source - (_BYTE *)v248) >> 2 < (unsigned int)((v250 - (int)v248) >> 2) )
            {
              v113 = (char *)Source + 4;
              *(_DWORD *)Source = v142;
              Source = v143 + 4;
              goto LABEL_223;
            }
            v134 = (char *)Source;
            if ( v248 > Source )
              invalid_parameter_noinfo();
            v131 = v284;
          }
          else
          {
            if ( v245 >= v122 )
            {
              invalid_parameter_noinfo();
              v121 = v258;
              v120 = v257;
              v114 = v250;
              v113 = Source;
              v112 = v248;
            }
            v123 = *((_DWORD *)v243 + 8);
            if ( v123 )
              v124 = (*((_DWORD *)v243 + 9) - v123) >> 2;
            else
              v124 = 0;
            if ( a5 + *(_DWORD *)&v120[4 * v245] < v124 )
            {
              if ( !v120 || v245 >= (unsigned int)((v121 - v120) >> 2) )
              {
                invalid_parameter_noinfo();
                v120 = v257;
                v114 = v250;
                v113 = Source;
                v112 = v248;
              }
              v125 = *(_DWORD *)&v120[4 * v245];
              v126 = v243;
              v127 = *((_DWORD *)v243 + 8);
              v128 = a5 + v125;
              if ( !v127 || v128 >= (*((_DWORD *)v243 + 9) - v127) >> 2 )
              {
                invalid_parameter_noinfo();
                v114 = v250;
                v113 = Source;
                v112 = v248;
              }
              v129 = (_DWORD *)(*((_DWORD *)v126 + 8) + 4 * v128);
              if ( v112 && ((char *)v113 - v112) >> 2 < (unsigned int)((v114 - (int)v112) >> 2) )
              {
                *v113++ = *v129;
                Source = v113;
                goto LABEL_223;
              }
              v130 = (char *)v113;
              if ( v112 > (_BYTE *)v113 )
                invalid_parameter_noinfo();
              v241 = (int)v129;
              v240 = (int)v130;
              v131 = v251;
              goto LABEL_221;
            }
            v132 = *(_DWORD *)MaterialManager::Instance();
            v133 = (char *)Source;
            v254 = v132;
            if ( v248 && ((_BYTE *)Source - (_BYTE *)v248) >> 2 < (unsigned int)((v250 - (int)v248) >> 2) )
            {
              v113 = (char *)Source + 4;
              *(_DWORD *)Source = v132;
              Source = v133 + 4;
              goto LABEL_223;
            }
            v134 = (char *)Source;
            if ( v248 > Source )
              invalid_parameter_noinfo();
            v131 = &v285;
          }
          v241 = (int)&v254;
          v240 = (int)v134;
LABEL_221:
          v239 = (int)&v247;
          v238 = v131;
LABEL_222:
          std::vector<Material *>::insert(&v247, v238, (_DWORD *)v239, (char *)v240, (int *)v241);
          v113 = Source;
LABEL_223:
          v112 = v248;
          v144 = v113;
          if ( v248 > v113 )
          {
            invalid_parameter_noinfo();
            v113 = Source;
            v112 = v248;
          }
          v255 = v144;
          if ( v144 - 1 > v113 || v144 - 1 < (_DWORD *)v112 )
          {
            invalid_parameter_noinfo();
            v113 = Source;
            v112 = v248;
          }
          v145 = v144 - 1;
          if ( v145 >= Source )
          {
            invalid_parameter_noinfo();
            v113 = Source;
            v112 = v248;
          }
          if ( *v145 )
          {
            v146 = v113;
            if ( v112 > (_BYTE *)v113 )
            {
              invalid_parameter_noinfo();
              v113 = Source;
              v112 = v248;
            }
            v255 = v146;
            if ( v146 - 1 > v113 || v146 - 1 < (_DWORD *)v112 )
              invalid_parameter_noinfo();
            v147 = (Material **)(v146 - 1);
            if ( v147 >= Source )
              invalid_parameter_noinfo();
            Material::AddRef(*v147);
            v113 = Source;
            v112 = v248;
          }
          ++v245;
          v114 = v250;
          v110 = v253;
        }
      }
      goto LABEL_120;
    }
  }
  if ( v267 )
    operator delete(v267);
  v267 = 0;
  v268 = 0;
  v269 = 0;
  if ( v271 )
    operator delete(v271);
  v271 = 0;
  v272 = 0;
  v273 = 0;
  if ( v280 )
    operator delete(v280);
  v280 = 0;
  v281 = 0;
  v282 = 0;
  if ( v275 )
    operator delete(v275);
  v275 = 0;
  v276 = 0;
  v277 = 0;
  if ( v257 )
    operator delete(v257);
  v257 = 0;
  v258 = 0;
  v259 = 0;
  v287 = -1;
  if ( v261 )
  {
    v241 = v251[0];
    v240 = (int)&v260;
    sub_100119B0((int)v261, v262);
    operator delete(v261);
  }
  return 0;
}
