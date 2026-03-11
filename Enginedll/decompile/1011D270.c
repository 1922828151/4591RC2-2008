/*
 * func-name: ?ReadMeshPart@ILoad@@QAE_NPAVMesh@@PAU_iobuf@@HHPAUCollisionMesh@@@Z
 * func-address: 0x1011d270
 * callers: 0x1011ef20
 * callees: 0x10009730, 0x1000d680, 0x100117e0, 0x100119b0, 0x1001f620, 0x1002bf00, 0x10059c90, 0x1005b1f0, 0x10077c20, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100977a0, 0x100e2550, 0x100e3ef0, 0x100e4400, 0x10116f70, 0x101189f0, 0x1011f730, 0x1011f7a0, 0x1011f860, 0x1011f990, 0x1017b990, 0x101a24ac, 0x101a2500, 0x101a2516, 0x101a252e, 0x101a253a, 0x101a26c0
 */

char __thiscall ILoad::ReadMeshPart(
        ILoad *this,
        struct Mesh *a2,
        FILE *Stream,
        int a4,
        int a5,
        struct CollisionMesh *a6)
{
  int v6; // ebp
  size_t v7; // ebp
  char *v8; // ebx
  bool v9; // zf
  char *v10; // ebx
  void *v11; // ebx
  int i; // ebp
  char *v13; // ebx
  void *v14; // ebx
  int j; // ebp
  char *v16; // ebx
  signed int v17; // ebx
  char *v18; // ebp
  int v19; // ebp
  int *v20; // eax
  int v21; // edx
  int *v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // esi
  int v30; // ebp
  char *v31; // edx
  const void **v32; // ebx
  _DWORD *v33; // ecx
  char *v34; // edx
  _DWORD *v35; // ebp
  const void **v36; // ebx
  void **v37; // eax
  void **v38; // ecx
  struct RenderDevice *v40; // eax
  size_t v41; // ebx
  size_t v42; // ebp
  size_t v43; // ebx
  size_t v44; // ebp
  char *v45; // ebx
  char *v46; // ebx
  signed int k; // ebp
  int v48; // ecx
  float *v49; // esi
  CRETimer *v50; // eax
  LARGE_INTEGER *v51; // eax
  ILoad *v52; // eax
  int v53; // ebp
  int v54; // ecx
  _BYTE *v55; // edi
  _DWORD *v56; // eax
  int v57; // ebx
  size_t v58; // edi
  char *v59; // edx
  char *v60; // eax
  char *v61; // edi
  Material **v62; // ecx
  _BYTE *v63; // edx
  _BYTE *v64; // esi
  size_t v65; // ecx
  int v66; // ebp
  unsigned int v67; // ecx
  int v68; // esi
  ILoad *v69; // ebp
  int v70; // edx
  unsigned int v71; // esi
  _DWORD *v72; // esi
  char *v73; // ebx
  int *v74; // edx
  size_t v75; // edi
  char *v76; // edx
  char *v77; // edi
  ILoad *v78; // ebp
  int v79; // edx
  unsigned int v80; // ecx
  unsigned int v81; // esi
  int v82; // edx
  _DWORD *v83; // esi
  char *v84; // ebx
  size_t v85; // edi
  char *v86; // edx
  _DWORD *v87; // esi
  _DWORD *v88; // esi
  _DWORD *v89; // esi
  Material **v90; // esi
  int v91; // esi
  char *v92; // eax
  int v93; // edx
  float *v94; // ecx
  _DWORD *v95; // edi
  _DWORD *v96; // esi
  int v97; // ebx
  _DWORD *v98; // eax
  char *v99; // eax
  int v100; // edx
  float *v101; // ecx
  _DWORD *v102; // edi
  _DWORD *v103; // esi
  int v104; // ebx
  _DWORD *v105; // eax
  char *v106; // eax
  int v107; // ebx
  int v108; // edi
  char *v109; // esi
  _DWORD *v110; // edi
  _DWORD *v111; // esi
  int v112; // ebx
  _DWORD *v113; // eax
  char *v114; // eax
  int v115; // edx
  float *v116; // ecx
  ILoad *v117; // esi
  char *v118; // eax
  char *v119; // esi
  __int16 v120; // cx
  __int16 v121; // bp
  int v122; // eax
  __int16 v123; // cx
  __int16 v124; // di
  __int16 v125; // dx
  int v126; // ecx
  int v127; // edx
  double v128; // st7
  double v129; // st6
  int v130; // eax
  double v131; // st7
  char *v132; // eax
  _DWORD *v133; // ebx
  void *v134; // eax
  int v135; // esi
  char *v136; // ebx
  float *v137; // edi
  int v138; // esi
  _DWORD *v139; // eax
  _DWORD *v140; // eax
  _DWORD *v141; // ecx
  int v142; // edx
  int v143; // ebp
  void *v144; // eax
  int v145; // esi
  char *v146; // edi
  _DWORD *v147; // esi
  int v148; // ebx
  _DWORD *v149; // eax
  struct Profiler *v150; // eax
  struct Profiler *v151; // eax
  int v152; // edi
  struct Profiler *v153; // eax
  struct Profiler *v154; // eax
  char v155; // [esp-64h] [ebp-288h] BYREF
  int v156; // [esp-60h] [ebp-284h]
  int v157; // [esp-5Ch] [ebp-280h]
  int v158; // [esp-58h] [ebp-27Ch]
  int v159; // [esp-54h] [ebp-278h]
  int v160; // [esp-50h] [ebp-274h]
  int v161; // [esp-4Ch] [ebp-270h]
  int v162; // [esp-48h] [ebp-26Ch]
  void *v163; // [esp-44h] [ebp-268h]
  int v164; // [esp-40h] [ebp-264h]
  int v165; // [esp-3Ch] [ebp-260h]
  int v166; // [esp-38h] [ebp-25Ch]
  void *v167; // [esp-34h] [ebp-258h]
  int v168; // [esp-30h] [ebp-254h]
  int v169; // [esp-2Ch] [ebp-250h]
  int v170; // [esp-28h] [ebp-24Ch]
  int v171; // [esp-24h] [ebp-248h]
  int v172; // [esp-20h] [ebp-244h]
  int v173; // [esp-1Ch] [ebp-240h]
  int v174; // [esp-18h] [ebp-23Ch]
  int v175; // [esp-14h] [ebp-238h]
  int v176; // [esp-10h] [ebp-234h]
  int v177; // [esp-Ch] [ebp-230h]
  int v178; // [esp-8h] [ebp-22Ch]
  int v179; // [esp-4h] [ebp-228h]
  int v180; // [esp+0h] [ebp-224h]
  int v181; // [esp+4h] [ebp-220h]
  int *v182; // [esp+8h] [ebp-21Ch] BYREF
  int v183; // [esp+Ch] [ebp-218h]
  int v184; // [esp+10h] [ebp-214h]
  int v185; // [esp+14h] [ebp-210h]
  int v186; // [esp+28h] [ebp-1FCh] BYREF
  size_t v187; // [esp+2Ch] [ebp-1F8h] BYREF
  size_t v188; // [esp+30h] [ebp-1F4h] BYREF
  _DWORD *v189; // [esp+34h] [ebp-1F0h]
  int v190; // [esp+38h] [ebp-1ECh]
  void *Src; // [esp+3Ch] [ebp-1E8h]
  int v192; // [esp+40h] [ebp-1E4h] BYREF
  void *v193; // [esp+44h] [ebp-1E0h]
  void *Source; // [esp+48h] [ebp-1DCh]
  int v195; // [esp+4Ch] [ebp-1D8h]
  int v196; // [esp+50h] [ebp-1D4h]
  char *Buffer; // [esp+54h] [ebp-1D0h] BYREF
  size_t ElementSize; // [esp+58h] [ebp-1CCh] BYREF
  int v199; // [esp+5Ch] [ebp-1C8h] BYREF
  int v200; // [esp+60h] [ebp-1C4h] BYREF
  void *v201; // [esp+64h] [ebp-1C0h]
  int v202; // [esp+68h] [ebp-1BCh]
  int v203; // [esp+6Ch] [ebp-1B8h]
  int v204; // [esp+70h] [ebp-1B4h] BYREF
  void *v205; // [esp+74h] [ebp-1B0h]
  void *v206; // [esp+78h] [ebp-1ACh]
  int v207; // [esp+7Ch] [ebp-1A8h]
  char v208; // [esp+83h] [ebp-1A1h] BYREF
  ILoad *v209; // [esp+84h] [ebp-1A0h]
  int v210; // [esp+88h] [ebp-19Ch] BYREF
  void *v211; // [esp+8Ch] [ebp-198h]
  int v212; // [esp+90h] [ebp-194h]
  int v213; // [esp+94h] [ebp-190h]
  int v214; // [esp+98h] [ebp-18Ch] BYREF
  void *v215; // [esp+9Ch] [ebp-188h]
  int v216; // [esp+A0h] [ebp-184h]
  int v217; // [esp+A4h] [ebp-180h]
  int v218; // [esp+A8h] [ebp-17Ch] BYREF
  int v219; // [esp+ACh] [ebp-178h] BYREF
  void *v220; // [esp+B0h] [ebp-174h]
  int v221; // [esp+B4h] [ebp-170h]
  int v222; // [esp+B8h] [ebp-16Ch]
  int v223; // [esp+BCh] [ebp-168h] BYREF
  void *v224; // [esp+C0h] [ebp-164h]
  int v225; // [esp+C4h] [ebp-160h]
  int v226; // [esp+C8h] [ebp-15Ch]
  int v227[2]; // [esp+CCh] [ebp-158h] BYREF
  int v228[3]; // [esp+D4h] [ebp-150h] BYREF
  _DWORD v229[2]; // [esp+E0h] [ebp-144h] BYREF
  _DWORD v230[2]; // [esp+E8h] [ebp-13Ch] BYREF
  signed int v231; // [esp+F0h] [ebp-134h] BYREF
  void *v232; // [esp+F4h] [ebp-130h] BYREF
  size_t ElementCount; // [esp+F8h] [ebp-12Ch] BYREF
  size_t v234; // [esp+FCh] [ebp-128h] BYREF
  _DWORD v235[5]; // [esp+100h] [ebp-124h] BYREF
  _BYTE v236[260]; // [esp+114h] [ebp-110h] BYREF
  int v237; // [esp+220h] [ebp-4h]

  v209 = this;
  v218 = 1;
  v201 = 0;
  v202 = 0;
  v203 = 0;
  v237 = 0;
  if ( a4 > 12 )
  {
    fread(&Buffer, 4u, 1u, Stream);
    v6 = (int)Buffer;
    *(float *)&v188 = COERCE_FLOAT(&v155);
    Mesh::SkinWeights::SkinWeights((Mesh::SkinWeights *)&v155);
    sub_1011F990(
      (int)&v200,
      v6,
      v155,
      v156,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162,
      v163,
      v164,
      v165,
      v166,
      v167,
      v168,
      v169,
      v170,
      v171,
      v172,
      v173,
      v174,
      v175,
      v176,
      v177,
      v178,
      v179,
      v180,
      v181,
      (int)v182,
      v183,
      v184,
      v185);
    v7 = 0;
    v187 = 0;
    v190 = 0;
    while ( v201 && v7 < (v202 - (int)v201) / 124 )
    {
      fread(&ElementSize, 4u, 1u, Stream);
      fread(v236, ElementSize, 1u, Stream);
      v8 = (char *)v201;
      v9 = v201 == 0;
      v236[ElementSize] = 0;
      if ( v9 || v7 >= (v202 - (int)v8) / 124 )
      {
        invalid_parameter_noinfo();
        v8 = (char *)v201;
      }
      std::string::operator=(&v8[v190], v236);
      v10 = (char *)v201;
      if ( !v201 || v7 >= (v202 - (int)v201) / 124 )
      {
        invalid_parameter_noinfo();
        v10 = (char *)v201;
      }
      fread(&v10[v190 + 60], 0x40u, 1u, Stream);
      fread(&v199, 4u, 1u, Stream);
      v11 = v201;
      if ( !v201 || v7 >= (v202 - (int)v201) / 124 )
      {
        invalid_parameter_noinfo();
        v11 = v201;
      }
      sub_1011F7A0((int)v11 + v190 + 28, v199, 0);
      for ( i = 0; i < v199; ++i )
      {
        v13 = (char *)v201;
        if ( !v201 || v187 >= (v202 - (int)v201) / 124 )
        {
          invalid_parameter_noinfo();
          v13 = (char *)v201;
        }
        v196 = (int)&v13[v190 + 32];
        if ( !*(_DWORD *)v196 || i >= (unsigned int)((*(_DWORD *)&v13[v190 + 36] - *(_DWORD *)v196) >> 2) )
          invalid_parameter_noinfo();
        fread((void *)(*(_DWORD *)v196 + 4 * i), 4u, 1u, Stream);
      }
      fread(&v186, 4u, 1u, Stream);
      v14 = v201;
      if ( !v201 || v187 >= (v202 - (int)v201) / 124 )
      {
        invalid_parameter_noinfo();
        v14 = v201;
      }
      sub_1011F860((int)v14 + v190 + 44, v186, COERCE_INT(0.0));
      for ( j = 0; j < v186; ++j )
      {
        v16 = (char *)v201;
        if ( !v201 || v187 >= (v202 - (int)v201) / 124 )
        {
          invalid_parameter_noinfo();
          v16 = (char *)v201;
        }
        v196 = (int)&v16[v190 + 48];
        if ( !*(_DWORD *)v196 || j >= (unsigned int)((*(_DWORD *)&v16[v190 + 52] - *(_DWORD *)v196) >> 2) )
          invalid_parameter_noinfo();
        fread((void *)(*(_DWORD *)v196 + 4 * j), 4u, 1u, Stream);
      }
      ++v187;
      v190 += 124;
      v7 = v187;
    }
  }
  fread(&v208, 1u, 1u, Stream);
  fread(&v218, 4u, 1u, Stream);
  v205 = 0;
  v206 = 0;
  v207 = 0;
  LOBYTE(v237) = 1;
  v190 = 0;
  v196 = 0;
  if ( a4 >= 20 )
  {
    fread(&v188, 4u, 1u, Stream);
    v41 = v188;
    v186 = v188;
    fread(&v188, 4u, 1u, Stream);
    v42 = v188;
    v196 = v188;
    Src = operator new(v41 * v188);
    fread(Src, v41, v42, Stream);
    fread(&v188, 4u, 1u, Stream);
    v43 = v188;
    v199 = v188;
    fread(&v188, 4u, 1u, Stream);
    v44 = v188;
    v190 = v188;
    ElementSize = (size_t)operator new(v188 * v43);
    fread((void *)ElementSize, v43, v44, Stream);
    if ( a4 > 20 )
    {
      fread(&v188, 4u, 1u, Stream);
      if ( (int)v188 > 0 )
      {
        v187 = v188;
        do
        {
          fread(&v188, 4u, 1u, Stream);
          v45 = (char *)v206;
          v227[0] = v188;
          if ( v205 && ((_BYTE *)v206 - (_BYTE *)v205) >> 2 < (unsigned int)((v207 - (int)v205) >> 2) )
          {
            *(float *)v206 = *(float *)&v188;
            v206 = v45 + 4;
          }
          else
          {
            if ( v205 > v206 )
              invalid_parameter_noinfo();
            sub_10059C90(&v204, v228, &v204, v45, v227);
          }
          --v187;
        }
        while ( v187 );
      }
    }
    for ( Buffer = 0; (int)Buffer < v218; ++Buffer )
    {
      if ( a4 <= 20 )
      {
        fread(&v188, 4u, 1u, Stream);
        v46 = (char *)v206;
        v227[0] = v188;
        if ( v205 && ((_BYTE *)v206 - (_BYTE *)v205) >> 2 < (unsigned int)((v207 - (int)v205) >> 2) )
        {
          *(float *)v206 = *(float *)&v188;
          v206 = v46 + 4;
        }
        else
        {
          if ( v205 > v206 )
            invalid_parameter_noinfo();
          sub_10059C90(&v204, v228, &v204, v46, v227);
        }
      }
      fread(v235, 0x14u, 1u, Stream);
      std::vector<AttributeRange>::push_back((_DWORD *)a2 + 619, v235);
      if ( a4 > 20 )
      {
        fread(&v187, 4u, 1u, Stream);
        sub_1011F7A0((int)a2 + 36, v187, 0);
        for ( k = 0; k < (int)v187; ++k )
        {
          v48 = *((_DWORD *)a2 + 10);
          if ( !v48 || k >= (unsigned int)((*((_DWORD *)a2 + 11) - v48) >> 2) )
            invalid_parameter_noinfo();
          fread((void *)(*((_DWORD *)a2 + 10) + 4 * k), 4u, 1u, Stream);
        }
      }
    }
    goto LABEL_159;
  }
  v220 = 0;
  v221 = 0;
  v222 = 0;
  v224 = 0;
  v225 = 0;
  v226 = 0;
  v211 = 0;
  v212 = 0;
  v213 = 0;
  v215 = 0;
  v216 = 0;
  v217 = 0;
  LOBYTE(v237) = 5;
  v199 = 0;
  if ( v218 <= 0 )
  {
LABEL_121:
    v40 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, struct Mesh *))(*(_DWORD *)v40 + 12))(v40, a2);
    SeriousWarning("Mesh is empty (corrupted?). Skipping...");
    if ( v215 )
      operator delete(v215);
    v215 = 0;
    v216 = 0;
    v217 = 0;
    if ( v211 )
      operator delete(v211);
    v211 = 0;
    v212 = 0;
    v213 = 0;
    if ( v224 )
      operator delete(v224);
    v224 = 0;
    v225 = 0;
    v226 = 0;
    if ( v220 )
      operator delete(v220);
    v220 = 0;
    v221 = 0;
    v222 = 0;
LABEL_130:
    if ( v205 )
      operator delete(v205);
    v205 = 0;
    v206 = 0;
    v207 = 0;
    v237 = -1;
    if ( !v201 )
      return 0;
    v185 = v188;
    v184 = (int)&v200;
    sub_100119B0((int)v201, v202);
    operator delete(v201);
    return 0;
  }
  v17 = v188;
  while ( 1 )
  {
    if ( a4 >= 11 )
    {
      fread(&v186, 4u, 1u, Stream);
      v18 = (char *)v206;
      Buffer = (char *)v186;
      if ( v205 && ((_BYTE *)v206 - (_BYTE *)v205) >> 2 < (unsigned int)((v207 - (int)v205) >> 2) )
      {
        *(_DWORD *)v206 = v186;
        v206 = v18 + 4;
      }
      else
      {
        if ( v205 > v206 )
          invalid_parameter_noinfo();
        sub_10059C90(&v204, v228, &v204, v18, (int *)&Buffer);
      }
    }
    fread(&ElementSize, 4u, 1u, Stream);
    v188 = ElementSize;
    fread(&ElementCount, 4u, 1u, Stream);
    Src = (void *)v196;
    if ( a4 > 13 )
    {
      fread(&v232, 4u, 1u, Stream);
      Src = v232;
    }
    v19 = ElementCount;
    if ( a4 >= 11 )
    {
      fread(&v234, 4u, 1u, Stream);
      v187 = v234;
      fread(&v231, 4u, 1u, Stream);
      v17 = v231;
      if ( !v19 || !v231 )
        goto LABEL_54;
    }
    if ( v19 < 0 || (ElementSize & 0x80000000) != 0 )
      break;
    Buffer = (char *)operator new(ElementSize * v19);
    fread(Buffer, ElementSize, v19, Stream);
    if ( a4 < 11 )
    {
      fread(v229, 4u, 1u, Stream);
      v187 = v229[0];
      fread(v230, 4u, 1u, Stream);
      v17 = v230[0];
    }
    v227[0] = (int)operator new(v187 * v17);
    fread((void *)v227[0], v187, v17, Stream);
    v235[0] = v199;
    v235[2] = v17 / 3;
    v235[1] = v190 / 3;
    v235[4] = v19;
    v235[3] = Src;
    std::vector<AttributeRange>::push_back((_DWORD *)a2 + 619, v235);
    v196 += v19;
    v190 += v17;
    sub_1011F730((int)&v219, (int)&Buffer);
    sub_1011F730((int)&v223, (int)v227);
    sub_1005B1F0(&v210, (int *)&v187);
    sub_1005B1F0(&v214, (int *)&v188);
LABEL_54:
    if ( ++v199 >= v218 )
    {
      if ( v196 && v190 )
      {
        v20 = (int *)v211;
        if ( !v211 || !((v212 - (int)v211) >> 2) )
        {
          invalid_parameter_noinfo();
          v20 = (int *)v211;
        }
        v21 = *v20;
        v22 = (int *)v215;
        v199 = v21;
        if ( !v215 || (v23 = v216, !((v216 - (int)v215) >> 2)) )
        {
          invalid_parameter_noinfo();
          v23 = v216;
          v22 = (int *)v215;
        }
        v186 = *v22;
        if ( !((v23 - (int)v22) >> 2) )
        {
          invalid_parameter_noinfo();
          v22 = (int *)v215;
        }
        Src = operator new(v196 * *v22);
        v24 = v211;
        if ( !v211 || !((v212 - (int)v211) >> 2) )
        {
          invalid_parameter_noinfo();
          v24 = v211;
        }
        ElementSize = (size_t)operator new(v190 * *v24);
        v25 = 0;
        v187 = 0;
        while ( 1 )
        {
          v26 = *((_DWORD *)a2 + 620);
          if ( !v26 || v25 >= (*((_DWORD *)a2 + 621) - v26) / 20 )
            break;
          v27 = *((_DWORD *)a2 + 620);
          if ( !v27 || v25 >= (*((_DWORD *)a2 + 621) - v27) / 20 )
            invalid_parameter_noinfo();
          v28 = v215;
          v29 = (_DWORD *)(v187 + *((_DWORD *)a2 + 620));
          if ( !v215 || (v30 = v216, !((v216 - (int)v215) >> 2)) )
          {
            invalid_parameter_noinfo();
            v30 = v216;
            v28 = v215;
          }
          v31 = (char *)v220;
          v188 = (size_t)v28;
          if ( !v220 || v25 >= (v221 - (int)v220) >> 2 )
          {
            invalid_parameter_noinfo();
            v31 = (char *)v220;
            v30 = v216;
            v28 = v215;
          }
          v32 = (const void **)&v31[4 * v25];
          if ( !v28 || !((v30 - (int)v28) >> 2) )
          {
            invalid_parameter_noinfo();
            v28 = v215;
          }
          memcpy((char *)Src + *v28 * v29[3], *v32, *(_DWORD *)v188 * v29[4]);
          v33 = v211;
          if ( !v211 || !((v212 - (int)v211) >> 2) )
          {
            invalid_parameter_noinfo();
            v33 = v211;
          }
          v34 = (char *)v224;
          v35 = v33;
          if ( !v224 || v25 >= (v225 - (int)v224) >> 2 )
          {
            invalid_parameter_noinfo();
            v34 = (char *)v224;
            v33 = v211;
          }
          v36 = (const void **)&v34[4 * v25];
          if ( !v33 || !((v212 - (int)v33) >> 2) )
          {
            invalid_parameter_noinfo();
            v33 = v211;
          }
          memcpy((void *)(*v33 * v29[1] + ElementSize + 2 * *v33 * v29[1]), *v36, 3 * *v35 * v29[2]);
          v37 = (void **)v220;
          if ( !v220 || v25 >= (v221 - (int)v220) >> 2 )
          {
            invalid_parameter_noinfo();
            v37 = (void **)v220;
          }
          operator delete[](v37[v25]);
          v38 = (void **)v224;
          if ( !v224 || v25 >= (v225 - (int)v224) >> 2 )
          {
            invalid_parameter_noinfo();
            v38 = (void **)v224;
          }
          operator delete[](v38[v25]);
          v187 += 20;
          ++v25;
        }
        if ( v215 )
          operator delete(v215);
        v215 = 0;
        v216 = 0;
        v217 = 0;
        if ( v211 )
          operator delete(v211);
        v211 = 0;
        v212 = 0;
        v213 = 0;
        if ( v224 )
          operator delete(v224);
        v224 = 0;
        v225 = 0;
        v226 = 0;
        LOBYTE(v237) = 1;
        if ( v220 )
          operator delete(v220);
        v220 = 0;
        v221 = 0;
        v222 = 0;
LABEL_159:
        v49 = (float *)((char *)Profiler::Get() + 148);
        v50 = REGetGlobalTimer();
        *v49 = CRETimer::StopMiniTimer(v50) / 1000.0 + *v49;
        v51 = (LARGE_INTEGER *)REGetGlobalTimer();
        CRETimer::StartMiniTimer(v51);
        v52 = v209;
        v53 = v196;
        v54 = v190;
        *((_DWORD *)v209 + 1) += v196;
        *((_DWORD *)v52 + 2) += v54;
        v55 = 0;
        v56 = 0;
        v57 = 0;
        v193 = 0;
        Source = 0;
        v195 = 0;
        LOBYTE(v237) = 6;
        if ( a5 == -1 )
        {
          v58 = *(_DWORD *)MaterialManager::Instance();
          v59 = (char *)Source;
          v188 = v58;
          if ( v193 && ((_BYTE *)Source - (_BYTE *)v193) >> 2 < (unsigned int)((v195 - (int)v193) >> 2) )
          {
            v60 = (char *)Source + 4;
            *(_DWORD *)Source = v58;
            Source = v59 + 4;
          }
          else
          {
            v61 = (char *)Source;
            if ( v193 > Source )
              invalid_parameter_noinfo();
            std::vector<Material *>::insert(&v192, v228, &v192, v61, (int *)&v188);
            v60 = (char *)Source;
          }
          v62 = (Material **)v193;
          if ( !v193 || !((v60 - (_BYTE *)v193) >> 2) )
          {
            invalid_parameter_noinfo();
            v62 = (Material **)v193;
          }
          Material::AddRef(*v62);
LABEL_238:
          v91 = v186;
          if ( v186 == 44 )
          {
            v92 = (char *)operator new(56 * v53);
            if ( v92 )
            {
              v93 = v53 - 1;
              if ( v53 - 1 >= 0 )
              {
                v94 = (float *)(v92 + 20);
                do
                {
                  *(v94 - 5) = 0.0;
                  v94 += 14;
                  --v93;
                  *(v94 - 18) = 0.0;
                  *(v94 - 17) = 0.0;
                  *(v94 - 16) = 0.0;
                  *(v94 - 15) = 0.0;
                  *(v94 - 14) = 0.0;
                  *(v94 - 13) = 0.0;
                  *(v94 - 12) = 0.0;
                  *(v94 - 11) = 0.0;
                  *(v94 - 10) = 0.0;
                  *(v94 - 9) = 0.0;
                  *(v94 - 8) = 0.0;
                  *(v94 - 7) = 0.0;
                  *(v94 - 6) = 0.0;
                }
                while ( v93 >= 0 );
              }
              v186 = (int)v92;
            }
            else
            {
              v186 = 0;
            }
            if ( v53 > 0 )
            {
              v95 = Src;
              v96 = (_DWORD *)(v186 + 12);
              v97 = v53;
              do
              {
                memcpy(v96 - 3, v95, 0x24u);
                v98 = (_DWORD *)sub_1017B990(v228, v96, v96 + 3);
                v96[6] = *v98;
                v96[7] = v98[1];
                v96[8] = v98[2];
                v96[9] = v95[9];
                v96[10] = v95[10];
                v95 += 11;
                v96 += 14;
                --v97;
              }
              while ( v97 );
            }
            v91 = 56;
            v185 = (int)Src;
          }
          else
          {
            switch ( v186 )
            {
              case 48:
                v99 = (char *)operator new(60 * v53);
                if ( v99 )
                {
                  v100 = v53 - 1;
                  if ( v53 - 1 >= 0 )
                  {
                    v101 = (float *)(v99 + 20);
                    do
                    {
                      *(v101 - 5) = 0.0;
                      v101 += 15;
                      --v100;
                      *(v101 - 19) = 0.0;
                      *(v101 - 18) = 0.0;
                      *(v101 - 17) = 0.0;
                      *(v101 - 16) = 0.0;
                      *(v101 - 15) = 0.0;
                      *(v101 - 14) = 0.0;
                      *(v101 - 13) = 0.0;
                      *(v101 - 12) = 0.0;
                      *(v101 - 11) = 0.0;
                      *(v101 - 10) = 0.0;
                      *(v101 - 9) = 0.0;
                      *(v101 - 8) = 0.0;
                      *(v101 - 7) = 0.0;
                    }
                    while ( v100 >= 0 );
                  }
                  v186 = (int)v99;
                }
                else
                {
                  v186 = 0;
                }
                if ( v53 > 0 )
                {
                  v102 = (char *)Src + 36;
                  v103 = (_DWORD *)(v186 + 12);
                  v104 = v53;
                  do
                  {
                    memcpy(v103 - 3, v102 - 9, 0x24u);
                    v105 = (_DWORD *)sub_1017B990(v228, v103, v103 + 3);
                    v103[6] = *v105;
                    v103[7] = v105[1];
                    v103[8] = v105[2];
                    v103[9] = *v102;
                    v103[10] = v102[1];
                    v103[11] = v102[2];
                    v102 += 12;
                    v103 += 15;
                    --v104;
                  }
                  while ( v104 );
                }
                v91 = 60;
                break;
              case 52:
                v106 = (char *)operator new(v53 << 6);
                v107 = (int)v106;
                v188 = (size_t)v106;
                LOBYTE(v237) = 7;
                if ( v106 )
                {
                  v108 = v53 - 1;
                  if ( v53 - 1 >= 0 )
                  {
                    v109 = v106 + 20;
                    do
                    {
                      v185 = (int)sub_100012C0;
                      *((float *)v109 - 5) = 0.0;
                      v184 = 2;
                      *((float *)v109 - 4) = 0.0;
                      v183 = 8;
                      *((float *)v109 - 3) = 0.0;
                      *((float *)v109 - 2) = 0.0;
                      v182 = (int *)(v109 + 28);
                      *((float *)v109 - 1) = 0.0;
                      *(float *)v109 = 0.0;
                      *((float *)v109 + 1) = 0.0;
                      *((float *)v109 + 2) = 0.0;
                      *((float *)v109 + 3) = 0.0;
                      *((float *)v109 + 4) = 0.0;
                      *((float *)v109 + 5) = 0.0;
                      *((float *)v109 + 6) = 0.0;
                      sub_10009730((int)v182, v183, v184, (int (__thiscall *)(int))v185);
                      v109 += 64;
                      --v108;
                    }
                    while ( v108 >= 0 );
                  }
                  v186 = v107;
                }
                else
                {
                  v186 = 0;
                }
                LOBYTE(v237) = 6;
                if ( v53 > 0 )
                {
                  v110 = (char *)Src + 36;
                  v111 = (_DWORD *)(v186 + 12);
                  v112 = v53;
                  do
                  {
                    memcpy(v111 - 3, v110 - 9, 0x24u);
                    v113 = (_DWORD *)sub_1017B990(v228, v111, v111 + 3);
                    v111[6] = *v113;
                    v111[7] = v113[1];
                    v111[8] = v113[2];
                    v111[9] = *v110;
                    v111[10] = v110[1];
                    v111[11] = v110[2];
                    v111[12] = v110[3];
                    v110 += 13;
                    v111 += 16;
                    --v112;
                  }
                  while ( v112 );
                }
                v91 = 64;
                break;
              case 32:
                v114 = (char *)operator new(40 * v53);
                if ( v114 )
                {
                  v115 = v53 - 1;
                  if ( v53 - 1 >= 0 )
                  {
                    v116 = (float *)(v114 + 8);
                    do
                    {
                      *(v116 - 2) = 0.0;
                      v116 += 10;
                      --v115;
                      *(v116 - 11) = 0.0;
                      *(v116 - 10) = 0.0;
                    }
                    while ( v115 >= 0 );
                  }
                  v117 = (ILoad *)v114;
                  v209 = (ILoad *)v114;
                }
                else
                {
                  v117 = 0;
                  v209 = 0;
                }
                if ( v53 > 0 )
                {
                  v118 = (char *)Src;
                  Buffer = (char *)Src;
                  v119 = (char *)v117 + 24;
                  v186 = v196;
                  do
                  {
                    memcpy(v119 - 24, v118, 0x1Cu);
                    v120 = *((_WORD *)v119 - 4);
                    v121 = v120 * *((_WORD *)v119 - 2);
                    LOWORD(v122) = v120 * *((_WORD *)v119 - 1) - *(_WORD *)v119 * *((_WORD *)v119 - 5);
                    v123 = *(_WORD *)v119 * *((_WORD *)v119 - 6);
                    v124 = *((_WORD *)v119 - 1) * *((_WORD *)v119 - 6);
                    v125 = *((_WORD *)v119 - 2) * *((_WORD *)v119 - 5);
                    *((_WORD *)v119 + 2) = v122;
                    v122 = (__int16)v122;
                    LOWORD(v126) = v123 - v121;
                    LOWORD(v127) = v125 - v124;
                    *((_WORD *)v119 + 3) = v126;
                    v126 = (__int16)v126;
                    v227[0] = (__int16)v122;
                    *((_WORD *)v119 + 4) = v127;
                    v127 = (__int16)v127;
                    v230[0] = (__int16)v126;
                    v229[0] = (__int16)v127;
                    *(float *)&v188 = (float)(v127 * v127 + v126 * v126 + v122 * v122);
                    if ( *(float *)&v188 >= 0.0000000099999999 )
                    {
                      *(float *)&v188 = sqrt(*(float *)&v188);
                      *(float *)&v188 = 1.0 / *(float *)&v188;
                      v128 = *(float *)&v188;
                      v129 = (double)v230[0];
                      *((_WORD *)v119 + 2) = (int)((double)v227[0] * *(float *)&v188);
                      v130 = (int)(v129 * v128);
                      v131 = v128 * (double)v229[0];
                      *((_WORD *)v119 + 3) = v130;
                      *((_WORD *)v119 + 4) = (int)v131;
                    }
                    v132 = Buffer;
                    *((_DWORD *)v119 + 3) = *((_DWORD *)Buffer + 7);
                    v118 = v132 + 32;
                    v119 += 40;
                    v9 = v186-- == 1;
                    Buffer = v118;
                  }
                  while ( !v9 );
                  v117 = v209;
                }
                v186 = 40;
                operator delete[](Src);
                v53 = v196;
                Src = v117;
                v133 = v117;
                v91 = v186;
                goto LABEL_306;
              case 144:
                v134 = operator new(156 * v53);
                v135 = (int)v134;
                v188 = (size_t)v134;
                LOBYTE(v237) = 8;
                if ( v134 )
                {
                  sub_10009730((int)v134, 156, v53, (int (__thiscall *)(int))sub_1011F160);
                  v186 = v135;
                }
                else
                {
                  v186 = 0;
                }
                LOBYTE(v237) = 6;
                if ( v53 > 0 )
                {
                  v136 = (char *)Src + 44;
                  v137 = (float *)((char *)Src + 40);
                  v138 = v186 + 12;
                  Buffer = (char *)v53;
                  do
                  {
                    memcpy((void *)(v138 - 12), v137 - 10, 0x24u);
                    v139 = (_DWORD *)sub_1017B990(v228, v138, v138 + 12);
                    *(_DWORD *)(v138 + 24) = *v139;
                    *(_DWORD *)(v138 + 28) = v139[1];
                    *(_DWORD *)(v138 + 32) = v139[2];
                    *(float *)(v138 + 36) = *(v137 - 1);
                    v140 = v136;
                    *(float *)(v138 + 40) = *v137;
                    *(float *)(v138 + 44) = v137[1];
                    v141 = (_DWORD *)(v138 + 48);
                    v142 = 6;
                    do
                    {
                      v143 = v140[4];
                      v140 += 4;
                      *v141 = v143;
                      v141[1] = v140[1];
                      v141[2] = v140[2];
                      v141[3] = v140[3];
                      v141 += 4;
                      --v142;
                    }
                    while ( v142 );
                    v137 += 36;
                    v136 += 144;
                    v138 += 156;
                    --Buffer;
                  }
                  while ( Buffer );
                  v53 = v196;
                }
                v91 = 156;
                v185 = (int)Src;
                goto LABEL_305;
              case 60:
                v144 = operator new(72 * v53);
                v145 = (int)v144;
                v188 = (size_t)v144;
                LOBYTE(v237) = 9;
                if ( v144 )
                {
                  sub_10009730((int)v144, 72, v53, (int (__thiscall *)(int))sub_1011F1F0);
                  v186 = v145;
                }
                else
                {
                  v186 = 0;
                }
                LOBYTE(v237) = 6;
                if ( v53 > 0 )
                {
                  v146 = (char *)Src;
                  v147 = (_DWORD *)(v186 + 28);
                  v148 = v53;
                  do
                  {
                    memcpy(v147 - 7, v146, 0x3Cu);
                    v149 = (_DWORD *)sub_1017B990(v228, v147, v147 + 5);
                    v147[8] = *v149;
                    v147[9] = v149[1];
                    v147[10] = v149[2];
                    v146 += 60;
                    v147 += 18;
                    --v148;
                  }
                  while ( v148 );
                }
                v91 = 72;
                break;
              default:
                v133 = Src;
                goto LABEL_308;
            }
            v185 = (int)Src;
          }
LABEL_305:
          operator delete[]((void *)v185);
          v133 = (_DWORD *)v186;
LABEL_306:
          LogPrintf("WARNING: Old mesh without binormals.");
LABEL_308:
          v150 = Profiler::Get();
          *((_DWORD *)v150 + 40) += v53;
          v151 = Profiler::Get();
          v152 = v190;
          *((_DWORD *)v151 + 41) += v190;
          v153 = Profiler::Get();
          *((_DWORD *)v153 + 42) += v53 * v91;
          v154 = Profiler::Get();
          *((_DWORD *)v154 + 43) += v152 * v199;
          *(float *)&v188 = COERCE_FLOAT(&v182);
          std::vector<Material *>::vector<Material *>(&v182, (int)&v192);
          if ( (*(unsigned __int8 (__thiscall **)(struct Mesh *, _DWORD *, size_t, int, int, int, int, int *, int, int, int))(*(_DWORD *)a2 + 72))(
                 a2,
                 v133,
                 ElementSize,
                 v91,
                 v199,
                 v53,
                 v190,
                 v182,
                 v183,
                 v184,
                 v185) )
          {
            if ( v201 )
            {
              if ( (v202 - (int)v201) / 124 )
              {
                (*(void (__thiscall **)(struct Mesh *, int *))(*(_DWORD *)a2 + 40))(a2, &v200);
                if ( Serializer::s_UseSkinning )
                  (*(void (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 96))(a2);
              }
            }
            if ( !v208 && (!v201 || !((v202 - (int)v201) / 124)) )
              (*(void (__thiscall **)(struct Mesh *, int))(*(_DWORD *)a2 + 56))(a2, 1);
            if ( a6 )
              sub_10077C20((int)a6, v133, ElementSize, v91, v199, v53, v190, (int)a2 + 2460, (int)a2);
            operator delete[]((void *)ElementSize);
            operator delete[](v133);
            if ( v193 )
              operator delete(v193);
            v193 = 0;
            Source = 0;
            v195 = 0;
            if ( v205 )
              operator delete(v205);
            v205 = 0;
            v206 = 0;
            v207 = 0;
            v237 = -1;
            if ( v201 )
            {
              v185 = v188;
              v184 = (int)&v200;
              sub_100119B0((int)v201, v202);
              operator delete(v201);
            }
            return 1;
          }
          SeriousWarning("Mesh create failed with %d verts and %d inds", v53, v190);
          if ( v193 )
            operator delete(v193);
          v193 = 0;
          Source = 0;
          v195 = 0;
          goto LABEL_130;
        }
        v187 = 0;
        while ( 1 )
        {
          v63 = v205;
          if ( !v205 )
            goto LABEL_238;
          v64 = v206;
          v65 = ((_BYTE *)v206 - (_BYTE *)v205) >> 2;
          if ( v187 >= v65 )
          {
            v53 = v196;
            goto LABEL_238;
          }
          if ( a4 < 11 )
          {
            v78 = v209;
            v79 = *((_DWORD *)v209 + 8);
            if ( v79 )
              v80 = (*((_DWORD *)v209 + 9) - v79) >> 2;
            else
              v80 = 0;
            v81 = a5 + v187;
            if ( a5 + v187 < v80 )
            {
              v82 = *((_DWORD *)v209 + 8);
              if ( !v82 || v81 >= (*((_DWORD *)v209 + 9) - v82) >> 2 )
              {
                invalid_parameter_noinfo();
                v57 = v195;
                v56 = Source;
                v55 = v193;
              }
              v83 = (_DWORD *)(*((_DWORD *)v78 + 8) + 4 * v81);
              if ( v55 && ((char *)v56 - v55) >> 2 < (unsigned int)((v57 - (int)v55) >> 2) )
              {
                *v56++ = *v83;
                Source = v56;
                goto LABEL_220;
              }
              v84 = (char *)v56;
              if ( v55 > (_BYTE *)v56 )
                invalid_parameter_noinfo();
              v185 = (int)v83;
              v184 = (int)v84;
              v183 = (int)&v192;
              v182 = v230;
              goto LABEL_219;
            }
            v85 = *(_DWORD *)MaterialManager::Instance();
            v86 = (char *)Source;
            v188 = v85;
            if ( v193 && ((_BYTE *)Source - (_BYTE *)v193) >> 2 < (unsigned int)((v195 - (int)v193) >> 2) )
            {
              v56 = (char *)Source + 4;
              *(_DWORD *)Source = v85;
              Source = v86 + 4;
              goto LABEL_220;
            }
            v77 = (char *)Source;
            if ( v193 > Source )
              invalid_parameter_noinfo();
            v74 = v229;
          }
          else
          {
            if ( v187 >= v65 )
            {
              invalid_parameter_noinfo();
              v64 = v206;
              v63 = v205;
              v57 = v195;
              v56 = Source;
              v55 = v193;
            }
            v66 = *((_DWORD *)v209 + 8);
            if ( v66 )
              v67 = (*((_DWORD *)v209 + 9) - v66) >> 2;
            else
              v67 = 0;
            if ( a5 + *(_DWORD *)&v63[4 * v187] < v67 )
            {
              if ( !v63 || v187 >= (v64 - v63) >> 2 )
              {
                invalid_parameter_noinfo();
                v63 = v205;
                v57 = v195;
                v56 = Source;
                v55 = v193;
              }
              v68 = *(_DWORD *)&v63[4 * v187];
              v69 = v209;
              v70 = *((_DWORD *)v209 + 8);
              v71 = a5 + v68;
              if ( !v70 || v71 >= (*((_DWORD *)v209 + 9) - v70) >> 2 )
              {
                invalid_parameter_noinfo();
                v57 = v195;
                v56 = Source;
                v55 = v193;
              }
              v72 = (_DWORD *)(*((_DWORD *)v69 + 8) + 4 * v71);
              if ( v55 && ((char *)v56 - v55) >> 2 < (unsigned int)((v57 - (int)v55) >> 2) )
              {
                *v56++ = *v72;
                Source = v56;
                goto LABEL_220;
              }
              v73 = (char *)v56;
              if ( v55 > (_BYTE *)v56 )
                invalid_parameter_noinfo();
              v185 = (int)v72;
              v184 = (int)v73;
              v74 = v228;
              goto LABEL_218;
            }
            v75 = *(_DWORD *)MaterialManager::Instance();
            v76 = (char *)Source;
            v188 = v75;
            if ( v193 && ((_BYTE *)Source - (_BYTE *)v193) >> 2 < (unsigned int)((v195 - (int)v193) >> 2) )
            {
              v56 = (char *)Source + 4;
              *(_DWORD *)Source = v75;
              Source = v76 + 4;
              goto LABEL_220;
            }
            v77 = (char *)Source;
            if ( v193 > Source )
              invalid_parameter_noinfo();
            v74 = v227;
          }
          v185 = (int)&v188;
          v184 = (int)v77;
LABEL_218:
          v183 = (int)&v192;
          v182 = v74;
LABEL_219:
          std::vector<Material *>::insert(&v192, v182, (_DWORD *)v183, (char *)v184, (int *)v185);
          v56 = Source;
LABEL_220:
          v55 = v193;
          v87 = v56;
          if ( v193 > v56 )
          {
            invalid_parameter_noinfo();
            v56 = Source;
            v55 = v193;
          }
          v189 = v87;
          if ( v87 - 1 > v56 || v87 - 1 < (_DWORD *)v55 )
          {
            invalid_parameter_noinfo();
            v56 = Source;
            v55 = v193;
          }
          v88 = v87 - 1;
          if ( v88 >= Source )
          {
            invalid_parameter_noinfo();
            v56 = Source;
            v55 = v193;
          }
          if ( *v88 )
          {
            v89 = v56;
            if ( v55 > (_BYTE *)v56 )
            {
              invalid_parameter_noinfo();
              v56 = Source;
              v55 = v193;
            }
            v189 = v89;
            if ( v89 - 1 > v56 || v89 - 1 < (_DWORD *)v55 )
              invalid_parameter_noinfo();
            v90 = (Material **)(v89 - 1);
            if ( v90 >= Source )
              invalid_parameter_noinfo();
            Material::AddRef(*v90);
            v56 = Source;
            v55 = v193;
          }
          ++v187;
          v57 = v195;
          v53 = v196;
        }
      }
      goto LABEL_121;
    }
  }
  if ( v215 )
    operator delete(v215);
  v215 = 0;
  v216 = 0;
  v217 = 0;
  if ( v211 )
    operator delete(v211);
  v211 = 0;
  v212 = 0;
  v213 = 0;
  if ( v224 )
    operator delete(v224);
  v224 = 0;
  v225 = 0;
  v226 = 0;
  if ( v220 )
    operator delete(v220);
  v220 = 0;
  v221 = 0;
  v222 = 0;
  if ( v205 )
    operator delete(v205);
  v205 = 0;
  v206 = 0;
  v207 = 0;
  v237 = -1;
  if ( v201 )
  {
    v185 = v188;
    v184 = (int)&v200;
    sub_100119B0((int)v201, v202);
    operator delete(v201);
  }
  return 0;
}
