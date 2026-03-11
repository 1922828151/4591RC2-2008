/*
 * func-name: ??0PostProcessEffect@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
 * func-address: 0x10106ce0
 * callers: 0x10107ff0, 0x10108190, 0x101083b0
 * callees: 0x100e40e0, 0x100e68a0, 0x101055d0, 0x101056d0, 0x101058b0, 0x10105ac0, 0x10105e20, 0x10106b20, 0x101189f0, 0x101203c0, 0x101a2534
 */

int __fastcall PostProcessEffect::PostProcessEffect(
        int a1,
        int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int v17; // ebp
  int v18; // edi
  void *v19; // ebx
  int v20; // eax
  const char *v21; // eax
  int Technique; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int *v28; // ebp
  int v29; // ebx
  struct PostProcess *v30; // eax
  int *v31; // ebp
  int v32; // ebx
  struct PostProcess *v33; // eax
  int *v34; // ebp
  int v35; // ebx
  struct PostProcess *v36; // eax
  int *v37; // ebp
  int v38; // ebx
  struct PostProcess *v39; // eax
  int *v40; // ebp
  int v41; // ebx
  struct PostProcess *v42; // eax
  int *v43; // ebp
  int v44; // ebx
  struct PostProcess *v45; // eax
  struct RenderDevice *v46; // eax
  int v47; // edi
  unsigned int v48; // edi
  struct RenderDevice *v49; // eax
  int v50; // ebp
  unsigned int v51; // ebp
  struct RenderDevice *v52; // edi
  struct PostProcess *v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // eax
  struct RenderDevice *v57; // edi
  struct RenderDevice *v58; // ebp
  int (__thiscall *v59)(struct RenderDevice *); // eax
  int v60; // eax
  int v61; // edx
  unsigned int v62; // eax
  int *v63; // ebp
  int v64; // ebx
  struct PostProcess *v65; // eax
  int *v66; // ebp
  int v67; // ebx
  struct PostProcess *v68; // eax
  struct RenderDevice *v69; // eax
  int v70; // edi
  unsigned int v71; // edi
  struct RenderDevice *v72; // eax
  int v73; // ebp
  unsigned int v74; // ebp
  struct RenderDevice *v75; // edi
  struct PostProcess *v76; // eax
  int v77; // eax
  int v78; // edx
  int v79; // eax
  struct RenderDevice *v80; // edi
  struct RenderDevice *v81; // eax
  int *v82; // ebp
  int v83; // ebx
  struct PostProcess *v84; // eax
  int *v85; // ebp
  int v86; // ebx
  struct PostProcess *v87; // eax
  struct RenderDevice *v88; // eax
  int v89; // edi
  unsigned int v90; // edi
  struct RenderDevice *v91; // eax
  int v92; // ebp
  unsigned int v93; // ebp
  struct RenderDevice *v94; // edi
  struct PostProcess *v95; // eax
  int v96; // eax
  int v97; // edx
  int v98; // eax
  struct RenderDevice *v99; // ebp
  int v100; // eax
  int v101; // edx
  unsigned int v102; // eax
  double v103; // st7
  int v104; // ecx
  int v105; // eax
  float v106; // edx
  double v107; // st7
  double v108; // st7
  double v109; // st7
  double v110; // st7
  double v111; // st7
  double v112; // st7
  double v113; // st7
  double v114; // st7
  int v115; // edi
  double v116; // st7
  int v117; // ecx
  int v118; // eax
  float v119; // edx
  double v120; // st7
  double v121; // st7
  double v122; // st7
  double v123; // st7
  double v124; // st7
  double v125; // st7
  double v126; // st7
  double v127; // st7
  int v128; // edi
  double v129; // st7
  int v131; // [esp+CCh] [ebp-94h] BYREF
  int v132; // [esp+D0h] [ebp-90h]
  int v133; // [esp+D4h] [ebp-8Ch]
  int *v134; // [esp+D8h] [ebp-88h]
  int v135; // [esp+DCh] [ebp-84h]
  double v136; // [esp+E0h] [ebp-80h]
  double v137; // [esp+E8h] [ebp-78h]
  double v138; // [esp+F0h] [ebp-70h]
  int *v139; // [esp+F8h] [ebp-68h]
  __int64 v140; // [esp+FCh] [ebp-64h] BYREF
  unsigned int v141; // [esp+104h] [ebp-5Ch]
  unsigned int v142; // [esp+108h] [ebp-58h]
  __int64 v143; // [esp+10Ch] [ebp-54h]
  int v144[16]; // [esp+114h] [ebp-4Ch] BYREF
  int v145; // [esp+15Ch] [ebp-4h]

  LODWORD(v143) = a1;
  v17 = a1 + 20;
  v145 = 1;
  *(_DWORD *)a1 = &PostProcessEffect::`vftable';
  std::string::string(a1 + 20);
  std::string::string(a1 + 48);
  LOBYTE(v145) = 3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 13) = 0;
  *(_BYTE *)(a1 + 14) = 0;
  *(_BYTE *)(a1 + 15) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( *((float *)RenderDevice::Instance() + 411) < 2.0 )
    goto LABEL_36;
  v18 = 21;
  if ( std::string::find(&a10, "DOF", 0) != -1 )
  {
    *(_BYTE *)PostProcess::Instance() = 1;
    v18 = 113;
  }
  std::string::operator=(v17, &a3);
  std::string::operator=(a1 + 48, &a10);
  v19 = operator new(0x154u);
  LODWORD(v140) = v19;
  LOBYTE(v145) = 4;
  if ( v19 )
  {
    v139 = &v131;
    std::operator+<char>(&v131, &a3, &a10);
    v20 = Material::Material((int)v19, v131, v132, v133, (int)v134, v135, SLODWORD(v136), SHIDWORD(v136));
  }
  else
  {
    v20 = 0;
  }
  *(_DWORD *)(a1 + 4) = v20;
  HIDWORD(v136) = 0;
  LOBYTE(v145) = 3;
  *(_DWORD *)(v20 + 148) = 0;
  LODWORD(v136) = std::string::c_str(&a10);
  v21 = (const char *)std::string::c_str(&a3);
  Material::Initialize(*(Material **)(a1 + 4), v21, (const char *)LODWORD(v136), SBYTE4(v136));
  LODWORD(v140) = &v131;
  std::string::string(&v131, &a10);
  Technique = Shader::GetTechnique(v131, v132, v133, v134, v135, LODWORD(v136), HIDWORD(v136));
  v23 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = Technique;
  *(_DWORD *)(a1 + 76) = (*(int (__stdcall **)(_DWORD, _DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(v23 + 152) + 16)
                                                                            + 36))(
                           *(_DWORD *)(*(_DWORD *)(v23 + 152) + 16),
                           0,
                           "tDownScale8x");
  v24 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 152) + 16);
  v25 = (*(int (__stdcall **)(int, _DWORD, const char *))(*(_DWORD *)v24 + 36))(v24, 0, "tDownScale4x");
  v26 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 80) = v25;
  v27 = (*(int (__stdcall **)(_DWORD, _DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(v26 + 152) + 16) + 36))(
          *(_DWORD *)(*(_DWORD *)(v26 + 152) + 16),
          0,
          "tDownScale2x");
  HIDWORD(v136) = 0;
  LODWORD(v136) = "MotionBlur_Blur";
  *(_DWORD *)(a1 + 84) = v27;
  if ( std::string::find(&a10, LODWORD(v136), HIDWORD(v136)) != -1 )
  {
    *(_BYTE *)(a1 + 12) = 1;
    *(_BYTE *)(a1 + 14) = 1;
  }
  if ( std::string::find(&a10, "MotionBlur_Velocity", 0) != -1 )
  {
    *(_BYTE *)(a1 + 12) = 1;
    *(_BYTE *)(a1 + 13) = 1;
    if ( !*((_DWORD *)PostProcess::Instance() + 3) )
    {
      v28 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v29 = *v28;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 12;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2);
      v30 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v29 + 92))(
        v28,
        *((_DWORD *)v30 + 1),
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
      v31 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v32 = *v31;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 20;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2);
      v33 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v32 + 92))(
        v31,
        *((_DWORD *)v33 + 1),
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
      v34 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v35 = *v34;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 16;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2);
      v36 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v35 + 92))(
        v34,
        *((_DWORD *)v36 + 1),
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
      v37 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v38 = *v37;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 24;
      v135 = 1;
      v134 = 0;
      v133 = 0;
      v132 = 75;
      v131 = *((_DWORD *)PostProcess::Instance() + 2);
      v39 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v38 + 116))(
        v37,
        *((_DWORD *)v39 + 1),
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
    }
  }
  if ( std::string::find(&a10, "_2xRT", 0) != -1 )
  {
    *(float *)(a1 + 88) = 0.5;
    if ( !*((_DWORD *)PostProcess::Instance() + 13) )
    {
      v40 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v41 = *v40;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 52;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2) >> 1;
      v42 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v41 + 92))(
        v40,
        *((_DWORD *)v42 + 1) >> 1,
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
      v43 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v44 = *v43;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 56;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2) >> 1;
      v45 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v44 + 92))(
        v43,
        *((_DWORD *)v45 + 1) >> 1,
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
    }
    v46 = RenderDevice::Instance();
    v47 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v46 + 296))(v46);
    v48 = (unsigned int)(v47 - *((_DWORD *)PostProcess::Instance() + 1)) >> 1;
    LODWORD(v140) = v48;
    v49 = RenderDevice::Instance();
    v50 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v49 + 300))(v49);
    v51 = (unsigned int)(v50 - *((_DWORD *)PostProcess::Instance() + 2)) >> 1;
    HIDWORD(v140) = v51;
    v141 = v48 + *((_DWORD *)PostProcess::Instance() + 1);
    v142 = v51 + *((_DWORD *)PostProcess::Instance() + 2);
    v52 = RenderDevice::Instance();
    v53 = PostProcess::Instance();
    v54 = *((_DWORD *)v53 + *((_DWORD *)v53 + 15) + 13);
    HIDWORD(v136) = a1 + 92;
    v55 = *(_DWORD *)v52;
    LODWORD(v136) = 0;
    v135 = v54;
    v134 = (int *)&v140;
    v56 = (*(int (__thiscall **)(struct RenderDevice *))(v55 + 204))(v52);
    sub_101056D0(v56, v134, v135, (int *)LODWORD(v136), (float *)HIDWORD(v136));
    v57 = RenderDevice::Instance();
    v58 = RenderDevice::Instance();
    v59 = *(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v57 + 300);
    HIDWORD(v136) = &unk_11240DF8;
    v60 = v59(v57);
    v61 = *(_DWORD *)v58;
    LODWORD(v136) = v60;
    v62 = (*(int (__thiscall **)(struct RenderDevice *))(v61 + 296))(v58);
    sub_101058B0(v62, LODWORD(v136), SHIDWORD(v136));
    goto LABEL_26;
  }
  if ( std::string::find(&a10, "_4xRT", 0) != -1 )
  {
    *(float *)(a1 + 88) = 0.25;
    if ( !*((_DWORD *)PostProcess::Instance() + 10) )
    {
      v63 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v64 = *v63;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 40;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2) >> 2;
      v65 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v64 + 92))(
        v63,
        *((_DWORD *)v65 + 1) >> 2,
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
      v66 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v67 = *v66;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 44;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2) >> 2;
      v68 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v67 + 92))(
        v66,
        *((_DWORD *)v68 + 1) >> 2,
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
    }
    v69 = RenderDevice::Instance();
    v70 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v69 + 296))(v69);
    v71 = (unsigned int)(v70 - *((_DWORD *)PostProcess::Instance() + 1)) >> 2;
    LODWORD(v140) = v71;
    v72 = RenderDevice::Instance();
    v73 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v72 + 300))(v72);
    v74 = (unsigned int)(v73 - *((_DWORD *)PostProcess::Instance() + 2)) >> 2;
    HIDWORD(v140) = v74;
    v141 = v71 + *((_DWORD *)PostProcess::Instance() + 1);
    v142 = v74 + *((_DWORD *)PostProcess::Instance() + 2);
    v75 = RenderDevice::Instance();
    v76 = PostProcess::Instance();
    v77 = *((_DWORD *)v76 + *((_DWORD *)v76 + 12) + 10);
    HIDWORD(v136) = a1 + 92;
    v78 = *(_DWORD *)v75;
    LODWORD(v136) = 0;
    v135 = v77;
    v134 = (int *)&v140;
    v79 = (*(int (__thiscall **)(struct RenderDevice *))(v78 + 204))(v75);
    sub_101056D0(v79, v134, v135, (int *)LODWORD(v136), (float *)HIDWORD(v136));
    v80 = RenderDevice::Instance();
    v81 = RenderDevice::Instance();
    HIDWORD(v136) = &unk_11240E78;
LABEL_24:
    v99 = v81;
    v100 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v80 + 300))(v80);
    v101 = *(_DWORD *)v99;
    LODWORD(v136) = v100;
    v102 = (*(int (__thiscall **)(struct RenderDevice *))(v101 + 296))(v99);
    sub_101055D0(v102, LODWORD(v136), SHIDWORD(v136));
    goto LABEL_26;
  }
  if ( std::string::find(&a10, "_8xRT", 0) != -1 )
  {
    *(float *)(a1 + 88) = 0.125;
    if ( !*((_DWORD *)PostProcess::Instance() + 7) )
    {
      v82 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v83 = *v82;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 28;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2) >> 3;
      v84 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v83 + 92))(
        v82,
        *((_DWORD *)v84 + 1) >> 3,
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
      v85 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
      v86 = *v85;
      HIDWORD(v136) = 0;
      LODWORD(v136) = (char *)PostProcess::Instance() + 32;
      v135 = 0;
      v134 = (int *)v18;
      v133 = 1;
      v132 = 1;
      v131 = *((_DWORD *)PostProcess::Instance() + 2) >> 3;
      v87 = PostProcess::Instance();
      (*(void (__stdcall **)(int *, _DWORD, int, int, int, int *, int, _DWORD, _DWORD))(v86 + 92))(
        v85,
        *((_DWORD *)v87 + 1) >> 3,
        v131,
        v132,
        v133,
        v134,
        v135,
        LODWORD(v136),
        HIDWORD(v136));
    }
    v88 = RenderDevice::Instance();
    v89 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v88 + 296))(v88);
    v90 = (unsigned int)(v89 - *((_DWORD *)PostProcess::Instance() + 1)) >> 3;
    LODWORD(v140) = v90;
    v91 = RenderDevice::Instance();
    v92 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v91 + 300))(v91);
    v93 = (unsigned int)(v92 - *((_DWORD *)PostProcess::Instance() + 2)) >> 3;
    HIDWORD(v140) = v93;
    v141 = v90 + *((_DWORD *)PostProcess::Instance() + 1);
    v142 = v93 + *((_DWORD *)PostProcess::Instance() + 2);
    v94 = RenderDevice::Instance();
    v95 = PostProcess::Instance();
    v96 = *((_DWORD *)v95 + *((_DWORD *)v95 + 9) + 7);
    HIDWORD(v136) = a1 + 92;
    v97 = *(_DWORD *)v94;
    LODWORD(v136) = 0;
    v135 = v96;
    v134 = (int *)&v140;
    v98 = (*(int (__thiscall **)(struct RenderDevice *))(v97 + 204))(v94);
    sub_101056D0(v98, v134, v135, (int *)LODWORD(v136), (float *)HIDWORD(v136));
    v80 = RenderDevice::Instance();
    v81 = RenderDevice::Instance();
    HIDWORD(v136) = &unk_11240EF8;
    goto LABEL_24;
  }
  *(float *)(a1 + 88) = 1.0;
  *(float *)(a1 + 92) = 0.0;
  *(float *)(a1 + 96) = 0.0;
  *(float *)(a1 + 100) = 1.0;
  *(float *)(a1 + 104) = 1.0;
LABEL_26:
  HIDWORD(v136) = 0;
  LODWORD(v136) = "BloomX";
  *(_BYTE *)(a1 + 108) = 0;
  *(_BYTE *)(a1 + 109) = 0;
  *(_BYTE *)(a1 + 110) = 0;
  if ( std::string::find(&a10, LODWORD(v136), HIDWORD(v136)) == -1 )
  {
    if ( std::string::find(&a10, "BloomY", 0) == -1 )
    {
      if ( std::string::find(&a10, "GaussBlur", 0) != -1 )
      {
        *((float *)&v136 + 1) = 1.0;
        LODWORD(v136) = a1 + 240;
        v135 = a1 + 112;
        *(_BYTE *)(a1 + 110) = 1;
        v140 = (__int64)((double)*((unsigned int *)PostProcess::Instance() + 2) * *(float *)(a1 + 88));
        v134 = (int *)v140;
        v129 = (double)*((unsigned int *)PostProcess::Instance() + 1) * *(float *)(a1 + 88);
        LODWORD(v140) = (unsigned __int16)v139 | 0xC00;
        v143 = (__int64)v129;
        sub_10105AC0((__int64)v129, (int)v134, v135, SLODWORD(v136), *((float *)&v136 + 1));
      }
    }
    else
    {
      *((float *)&v136 + 1) = 2.0;
      *(float *)&v136 = 3.0;
      v135 = a1 + 240;
      v134 = v144;
      *(_BYTE *)(a1 + 109) = 1;
      v116 = (double)*((unsigned int *)PostProcess::Instance() + 1) * *(float *)(a1 + 88);
      LODWORD(v140) = (unsigned __int16)v139 | 0xC00;
      v143 = (__int64)v116;
      sub_10105E20((__int64)v116, (float *)v134, v135, v136, v137, v138);
      v117 = 0;
      v118 = a1 + 120;
      *(float *)&v143 = 0.0;
      v119 = 0.0;
      do
      {
        v120 = *(float *)&v144[v117];
        *(float *)(v118 - 8) = v119;
        *((float *)&v143 + 1) = v120;
        v121 = *(float *)&v144[v117 + 1];
        *(_DWORD *)(v118 - 4) = HIDWORD(v143);
        *((float *)&v143 + 1) = v121;
        v122 = *(float *)&v144[v117 + 2];
        *(_DWORD *)(v118 + 4) = HIDWORD(v143);
        *((float *)&v143 + 1) = v122;
        v123 = *(float *)&v144[v117 + 3];
        *(_DWORD *)(v118 + 12) = HIDWORD(v143);
        *((float *)&v143 + 1) = v123;
        v124 = *(float *)&v144[v117 + 4];
        *(_DWORD *)(v118 + 20) = HIDWORD(v143);
        *((float *)&v143 + 1) = v124;
        v125 = *(float *)&v144[v117 + 5];
        *(_DWORD *)(v118 + 28) = HIDWORD(v143);
        *((float *)&v143 + 1) = v125;
        v126 = *(float *)&v144[v117 + 6];
        *(_DWORD *)(v118 + 36) = HIDWORD(v143);
        *((float *)&v143 + 1) = v126;
        v127 = *(float *)&v144[v117 + 7];
        *(_DWORD *)(v118 + 44) = HIDWORD(v143);
        *((float *)&v143 + 1) = v127;
        v128 = HIDWORD(v143);
        *(float *)v118 = v119;
        *(float *)(v118 + 8) = v119;
        *(float *)(v118 + 16) = v119;
        *(float *)(v118 + 24) = v119;
        *(float *)(v118 + 32) = v119;
        *(float *)(v118 + 40) = v119;
        *(float *)(v118 + 48) = v119;
        *(_DWORD *)(v118 + 52) = v128;
        v117 += 8;
        v118 += 64;
      }
      while ( v117 < 16 );
    }
  }
  else
  {
    *((float *)&v136 + 1) = 2.0;
    *(float *)&v136 = 3.0;
    v135 = a1 + 240;
    v134 = v144;
    *(_BYTE *)(a1 + 108) = 1;
    LODWORD(v143) = *((_DWORD *)PostProcess::Instance() + 1);
    v103 = (double)(unsigned int)v143 * *(float *)(a1 + 88);
    LODWORD(v140) = (unsigned __int16)v139 | 0xC00;
    v143 = (__int64)v103;
    sub_10105E20((__int64)v103, (float *)v134, v135, v136, v137, v138);
    v104 = 0;
    v105 = a1 + 120;
    *((float *)&v143 + 1) = 0.0;
    v106 = 0.0;
    do
    {
      v107 = *(float *)&v144[v104];
      *(float *)(v105 - 4) = v106;
      *(float *)&v143 = v107;
      v108 = *(float *)&v144[v104 + 1];
      *(_DWORD *)(v105 - 8) = v143;
      *(float *)&v143 = v108;
      v109 = *(float *)&v144[v104 + 2];
      *(_DWORD *)v105 = v143;
      *(float *)&v143 = v109;
      v110 = *(float *)&v144[v104 + 3];
      *(_DWORD *)(v105 + 8) = v143;
      *(float *)&v143 = v110;
      v111 = *(float *)&v144[v104 + 4];
      *(_DWORD *)(v105 + 16) = v143;
      *(float *)&v143 = v111;
      v112 = *(float *)&v144[v104 + 5];
      *(_DWORD *)(v105 + 24) = v143;
      *(float *)&v143 = v112;
      v113 = *(float *)&v144[v104 + 6];
      *(_DWORD *)(v105 + 32) = v143;
      *(float *)&v143 = v113;
      v114 = *(float *)&v144[v104 + 7];
      *(_DWORD *)(v105 + 40) = v143;
      *(float *)&v143 = v114;
      v115 = v143;
      *(float *)(v105 + 4) = v106;
      *(float *)(v105 + 12) = v106;
      *(float *)(v105 + 20) = v106;
      *(float *)(v105 + 28) = v106;
      *(float *)(v105 + 36) = v106;
      *(float *)(v105 + 44) = v106;
      *(_DWORD *)(v105 + 48) = v115;
      *(float *)(v105 + 52) = v106;
      v104 += 8;
      v105 += 64;
    }
    while ( v104 < 16 );
  }
LABEL_36:
  LOBYTE(v145) = 0;
  std::string::~string(&a3);
  v145 = -1;
  std::string::~string(&a10);
  return a1;
}
