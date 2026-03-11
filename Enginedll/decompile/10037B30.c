/*
 * func-name: sub_10037B30
 * func-address: 0x10037b30
 * callers: none
 * callees: 0x10001720, 0x100017b0, 0x1000d680, 0x1002d760, 0x1003b320, 0x100490f0, 0x100492d0, 0x100497b0, 0x10049a00, 0x1004a5a0, 0x1004a5e0, 0x1004ae30, 0x10097800, 0x100e2550, 0x101189f0, 0x1017a280, 0x1017a7e0, 0x101a24ac, 0x101a253a
 */

int __fastcall sub_10037B30(
        int a1,
        int a2,
        int a3,
        const char *a4,
        char a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int *a17,
        int a18)
{
  bool v19; // zf
  const char *v20; // eax
  struct RenderDevice *v21; // eax
  int v22; // eax
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v24; // ebp
  XMLSystem *v25; // ebx
  int FirstNode; // esi
  int (__thiscall *v27)(int, const wchar_t *, _DWORD); // eax
  char *v28; // edi
  struct xercesc_2_5::DOMNode *v29; // eax
  int (__thiscall *v30)(int); // eax
  int v31; // esi
  int (__thiscall *v32)(int); // eax
  int v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  bool v37; // cf
  int v38; // eax
  int v39; // ebp
  int v40; // eax
  int v41; // edx
  int (__thiscall *v42)(int); // eax
  int (__thiscall *v43)(int, const wchar_t *); // eax
  int v44; // eax
  int Vector; // eax
  float v46; // ecx
  float v47; // edx
  int (__thiscall *v48)(int, const wchar_t *); // edx
  int v49; // eax
  int v50; // eax
  void *v51; // ecx
  float v52; // edx
  float v53; // eax
  int j; // ebp
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // eax
  const char *v62; // eax
  int v63; // eax
  const char *v64; // eax
  int *v65; // ecx
  float v66; // eax
  float v67; // edx
  float v68; // eax
  float v69; // edx
  float v70; // eax
  float v71; // edx
  int v72; // eax
  float v73; // edx
  float v74; // ecx
  float v75; // edx
  float v76; // ecx
  float v77; // edx
  float v78; // ecx
  float v79; // edx
  int v80; // edx
  int (__thiscall *v81)(int *); // eax
  unsigned int v82; // esi
  int v83; // eax
  int v84; // eax
  int v85; // ebp
  int v86; // eax
  _DWORD *v87; // esi
  int (__thiscall *v88)(int); // eax
  int v89; // esi
  int (__thiscall *v90)(int); // edx
  struct xercesc_2_5::DOMNode *v91; // eax
  int (__thiscall *v92)(int, const wchar_t *); // edx
  struct xercesc_2_5::DOMNode *v93; // eax
  int (__thiscall *v94)(int, const wchar_t *); // edx
  struct xercesc_2_5::DOMNode *v95; // eax
  int v96; // eax
  int *v97; // ecx
  _WORD *v98; // edx
  struct xercesc_2_5::DOMNode *v99; // eax
  unsigned __int16 v100; // ax
  int v101; // edx
  struct xercesc_2_5::DOMNode *v102; // eax
  int *v103; // ecx
  int (__thiscall *v104)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v105; // eax
  __int16 v106; // ax
  int (__thiscall *v107)(int); // eax
  unsigned int v108; // esi
  float v109; // ebx
  int v110; // eax
  int *v111; // esi
  float v112; // eax
  int (__thiscall *v113)(int, _DWORD, int *, int, int); // edx
  int v114; // eax
  void *v115; // ebp
  void (__thiscall *v116)(int, char *, void *, _DWORD, int *, _DWORD, int); // edx
  int v117; // ebx
  int v119; // [esp+8h] [ebp-1B8h] BYREF
  int v120; // [esp+Ch] [ebp-1B4h]
  int v121; // [esp+10h] [ebp-1B0h] BYREF
  int v122; // [esp+14h] [ebp-1ACh]
  int v123; // [esp+18h] [ebp-1A8h]
  float v124; // [esp+1Ch] [ebp-1A4h] BYREF
  int *v125; // [esp+20h] [ebp-1A0h]
  int v126; // [esp+24h] [ebp-19Ch]
  int v127; // [esp+28h] [ebp-198h]
  const wchar_t *v128; // [esp+2Ch] [ebp-194h]
  _WORD *i; // [esp+3Ch] [ebp-184h]
  int v130; // [esp+40h] [ebp-180h]
  int *v131; // [esp+44h] [ebp-17Ch]
  int v132; // [esp+48h] [ebp-178h]
  int v133; // [esp+4Ch] [ebp-174h]
  int *v134; // [esp+50h] [ebp-170h]
  int *v135; // [esp+54h] [ebp-16Ch]
  int v136; // [esp+58h] [ebp-168h]
  int v137; // [esp+5Ch] [ebp-164h]
  void *Int; // [esp+60h] [ebp-160h]
  float v139; // [esp+64h] [ebp-15Ch]
  float v140; // [esp+68h] [ebp-158h]
  float v141; // [esp+6Ch] [ebp-154h]
  float v142; // [esp+70h] [ebp-150h]
  float v143; // [esp+74h] [ebp-14Ch]
  float v144; // [esp+78h] [ebp-148h]
  float v145; // [esp+7Ch] [ebp-144h]
  float v146; // [esp+80h] [ebp-140h]
  float v147; // [esp+84h] [ebp-13Ch]
  float v148; // [esp+88h] [ebp-138h]
  float v149; // [esp+8Ch] [ebp-134h]
  int v150; // [esp+90h] [ebp-130h] BYREF
  int v151; // [esp+94h] [ebp-12Ch]
  _BYTE v152[28]; // [esp+98h] [ebp-128h] BYREF
  _BYTE v153[28]; // [esp+B4h] [ebp-10Ch] BYREF
  _BYTE v154[28]; // [esp+D0h] [ebp-F0h] BYREF
  _BYTE v155[28]; // [esp+ECh] [ebp-D4h] BYREF
  _BYTE v156[28]; // [esp+108h] [ebp-B8h] BYREF
  _BYTE v157[28]; // [esp+124h] [ebp-9Ch] BYREF
  char v158[12]; // [esp+140h] [ebp-80h] BYREF
  int v159[3]; // [esp+14Ch] [ebp-74h] BYREF
  _BYTE v160[32]; // [esp+158h] [ebp-68h] BYREF
  char v161[60]; // [esp+178h] [ebp-48h] BYREF
  int v162; // [esp+1BCh] [ebp-4h]

  v141 = *(float *)&a1;
  v162 = 1;
  XMLSystem::XMLSystem((XMLSystem *)v160);
  v134 = &v121;
  LOBYTE(v162) = 2;
  std::string::string(&v121, &a3);
  v19 = (unsigned __int8)XMLSystem::Load(v121, v122, v123, LODWORD(v124), v125, v126, v127) == 0;
  v20 = a4;
  if ( v19 )
  {
    if ( a9 < 0x10 )
      v20 = (const char *)&a4;
    Warning("Couldn't load '%s'", v20);
    LOBYTE(v162) = 1;
    XMLSystem::~XMLSystem((XMLSystem *)v160);
    goto LABEL_59;
  }
  if ( a9 < 0x10 )
    v20 = (const char *)&a4;
  LogPrintf("Loading mesh '%s'", v20);
  v21 = RenderDevice::Instance();
  v22 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v21 + 8))(v21);
  *a17 = v22;
  Walker = XMLSystem::GetWalker((XMLSystem *)v160);
  v24 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 48))(Walker);
  v134 = &v121;
  v133 = v24;
  std::string::string(&v121, "Vertices");
  v25 = (XMLSystem *)(a1 + 84);
  FirstNode = XMLSystem::FindFirstNode(v24, v121, v122, v123, LODWORD(v124), v125, v126, v127);
  v27 = *(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)FirstNode + 164);
  v28 = 0;
  v136 = 56;
  v132 = 0;
  v29 = (struct xercesc_2_5::DOMNode *)v27(FirstNode, L"Count", 0);
  Int = (void *)XMLSystem::GetInt(v25, v29, (bool)v128);
  operator new(56 * (_DWORD)Int);
  v30 = *(int (__thiscall **)(int))(*(_DWORD *)FirstNode + 168);
  v128 = L"Vertex";
  v31 = v30(FirstNode);
  v32 = *(int (__thiscall **)(int))(*(_DWORD *)v31 + 8);
  v135 = (int *)v31;
  if ( v32(v31) )
  {
    v130 = 0;
    v131 = 0;
    while ( 1 )
    {
      v33 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v31 + 4))(v31, v132);
      for ( i = 0; ; i = (_WORD *)((char *)i + 1) )
      {
        v34 = sub_1003B320(v157, i);
        LOBYTE(v162) = 3;
        v35 = std::operator+<char>(v154, "Tex", v34);
        LOBYTE(v162) = 4;
        v36 = sub_1017A280(v153, v35);
        v37 = *(_DWORD *)(v36 + 24) < 8u;
        LOBYTE(v162) = 5;
        v38 = v37 ? v36 + 4 : *(_DWORD *)(v36 + 4);
        v39 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v33 + 164))(v33, v38);
        LOBYTE(v162) = 4;
        std::wstring::~wstring(v153);
        LOBYTE(v162) = 3;
        std::string::~string(v154);
        LOBYTE(v162) = 2;
        std::string::~string(v157);
        if ( !v39 )
          break;
      }
      if ( !v28 )
      {
        if ( i == (_WORD *)1 )
        {
          v136 = 56;
        }
        else if ( i == (_WORD *)2 )
        {
          v136 = 64;
        }
        v28 = (char *)operator new(v136 * v137);
      }
      v40 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v33 + 164))(v33, L"Pos", 0);
      XMLSystem::GetVector(v25, &v150, v40, v128);
      v41 = *(_DWORD *)v33;
      v143 = 0.0;
      v42 = *(int (__thiscall **)(int))(v41 + 164);
      v144 = 0.0;
      v145 = 0.0;
      v128 = L"Norm";
      v139 = 0.0;
      v140 = 0.0;
      v141 = 0.0;
      v146 = 0.0;
      v147 = 0.0;
      v148 = 0.0;
      v149 = 0.0;
      if ( v42(v33) )
      {
        v43 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v33 + 164);
        v127 = 0;
        v44 = v43(v33, L"Norm");
        Vector = XMLSystem::GetVector(v25, v159, v44, v127);
        v46 = *(float *)(Vector + 4);
        v142 = *(float *)Vector;
        v47 = *(float *)(Vector + 8);
        v143 = v46;
        v144 = v47;
      }
      if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v33 + 164))(v33, L"Tangent") )
      {
        v48 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v33 + 164);
        v127 = 0;
        v49 = v48(v33, L"Tangent");
        v50 = XMLSystem::GetVector(v25, v158, v49, v127);
        v51 = *(void **)v50;
        v52 = *(float *)(v50 + 4);
        v53 = *(float *)(v50 + 8);
        Int = v51;
        v139 = v52;
        v140 = v53;
      }
      for ( j = 0; j < (int)i; ++j )
      {
        v55 = sub_1003B320(v153, j);
        LOBYTE(v162) = 6;
        v56 = std::operator+<char>(v154, "Tex", v55);
        LOBYTE(v162) = 7;
        v57 = sub_1017A280(v157, v56);
        v37 = *(_DWORD *)(v57 + 24) < 8u;
        LOBYTE(v162) = 8;
        if ( v37 )
          v58 = v57 + 4;
        else
          v58 = *(_DWORD *)(v57 + 4);
        v59 = *(_DWORD *)v33;
        v127 = 0;
        v60 = (*(int (__thiscall **)(int, int))(v59 + 164))(v33, v58);
        XMLSystem::GetString(v152, v60, v127);
        LOBYTE(v162) = 10;
        std::wstring::~wstring(v157);
        LOBYTE(v162) = 11;
        std::string::~string(v154);
        LOBYTE(v162) = 12;
        std::string::~string(v153);
        v127 = 0;
        v126 = 0;
        v134 = &v119;
        std::string::string(&v119, v152);
        v61 = sub_1017A7E0(v156, v119, v120, v121, v122, v123, LODWORD(v124), v125, v126);
        if ( *(_DWORD *)(v61 + 24) < 0x10u )
          v62 = (const char *)(v61 + 4);
        else
          v62 = *(const char **)(v61 + 4);
        *(&v145 + 2 * j) = strtod(v62, (char **)v127);
        std::string::~string(v156);
        v127 = 0;
        v126 = 1;
        v134 = &v119;
        std::string::string(&v119, v152);
        v63 = sub_1017A7E0(v156, v119, v120, v121, v122, v123, LODWORD(v124), v125, v126);
        if ( *(_DWORD *)(v63 + 24) < 0x10u )
          v64 = (const char *)(v63 + 4);
        else
          v64 = *(const char **)(v63 + 4);
        *(&v146 + 2 * j) = strtod(v64, (char **)v127);
        std::string::~string(v156);
        LOBYTE(v162) = 2;
        std::string::~string(v152);
      }
      if ( v136 == 56 )
      {
        v65 = v131;
        *(float *)&v28[(_DWORD)v131] = v149;
        *(_DWORD *)&v28[(_DWORD)v65 + 4] = v150;
        v66 = v142;
        *(_DWORD *)&v28[(_DWORD)v65 + 8] = v151;
        v67 = v143;
        *(float *)&v28[(_DWORD)v65 + 12] = v66;
        v68 = v144;
        *(float *)&v28[(_DWORD)v65 + 16] = v67;
        *(_DWORD *)&v28[(_DWORD)v65 + 24] = Int;
        v69 = v140;
        *(float *)&v28[(_DWORD)v65 + 20] = v68;
        *(float *)&v28[(_DWORD)v65 + 28] = v139;
        v70 = v145;
        *(float *)&v28[(_DWORD)v65 + 32] = v69;
        v71 = v146;
        *(float *)&v28[(_DWORD)v65 + 48] = v70;
        *(float *)&v28[(_DWORD)v65 + 52] = v71;
      }
      else
      {
        if ( v136 == 64 )
        {
          v72 = v130;
          *(float *)&v28[v130] = v149;
          *(_DWORD *)&v28[v72 + 4] = v150;
          v73 = v142;
          *(_DWORD *)&v28[v72 + 8] = v151;
          v74 = v143;
          *(float *)&v28[v72 + 12] = v73;
          v75 = v144;
          *(float *)&v28[v72 + 16] = v74;
          *(_DWORD *)&v28[v72 + 24] = Int;
          v76 = v140;
          *(float *)&v28[v72 + 20] = v75;
          *(float *)&v28[v72 + 28] = v139;
          v77 = v145;
          *(float *)&v28[v72 + 32] = v76;
          *(float *)&v28[v72 + 52] = v146;
          v78 = v148;
          *(float *)&v28[v72 + 48] = v77;
          v79 = v147;
          *(float *)&v28[v72 + 60] = v78;
          v65 = v131;
          *(float *)&v28[v72 + 56] = v79;
          goto LABEL_43;
        }
        v65 = v131;
      }
      v72 = v130;
LABEL_43:
      v131 = v65 + 14;
      v80 = *v135;
      v130 = v72 + 64;
      v81 = *(int (__thiscall **)(int *))(v80 + 8);
      v82 = ++v132;
      if ( v82 >= v81(v135) )
      {
        v24 = v133;
        break;
      }
      v31 = (int)v135;
    }
  }
  v134 = &v121;
  std::string::string(&v121, "Faces");
  v83 = XMLSystem::FindFirstNode(v24, v121, v122, v123, LODWORD(v124), v125, v126, v127);
  v84 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v83 + 168))(v83, L"Face");
  v85 = v84;
  v130 = 2;
  if ( v137 > 0xFFFF )
    v130 = 4;
  v86 = (*(int (__thiscall **)(int))(*(_DWORD *)v84 + 8))(v84);
  v87 = operator new(3 * v130 * v86);
  v88 = *(int (__thiscall **)(int))(*(_DWORD *)v85 + 8);
  v134 = v87;
  v132 = 0;
  if ( v88(v85) )
  {
    i = v87 + 1;
    v131 = v87 + 2;
    do
    {
      v89 = (*(int (__thiscall **)(int, int, const wchar_t *))(*(_DWORD *)v85 + 4))(v85, v132, v128);
      v90 = *(int (__thiscall **)(int))(*(_DWORD *)v89 + 164);
      v128 = 0;
      if ( v131 == (int *)4 )
      {
        v127 = (int)L"v2";
        v91 = (struct xercesc_2_5::DOMNode *)v90(v89);
        v133 = XMLSystem::GetInt(v25, v91, v127);
        v92 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v89 + 164);
        v127 = 0;
        v93 = (struct xercesc_2_5::DOMNode *)v92(v89, L"v1");
        v135 = (int *)XMLSystem::GetInt(v25, v93, v127);
        v94 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v89 + 164);
        v127 = 0;
        v95 = (struct xercesc_2_5::DOMNode *)v94(v89, L"v0");
        v96 = XMLSystem::GetInt(v25, v95, v127);
        v97 = v131;
        *(v131 - 2) = v133;
        *(v97 - 1) = (int)v135;
        v98 = i;
        *v97 = v96;
      }
      else
      {
        v127 = (int)L"v2";
        v99 = (struct xercesc_2_5::DOMNode *)v90(v89);
        v100 = XMLSystem::GetInt(v25, v99, v127);
        v101 = *(_DWORD *)v89;
        v127 = 0;
        v133 = v100;
        v102 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *))(v101 + 164))(v89, L"v1");
        v103 = (int *)(unsigned __int16)XMLSystem::GetInt(v25, v102, v127);
        v104 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v89 + 164);
        v127 = 0;
        v135 = v103;
        v105 = (struct xercesc_2_5::DOMNode *)v104(v89, L"v0");
        v106 = XMLSystem::GetInt(v25, v105, v127);
        v98 = i;
        *(i - 2) = v133;
        *(v98 - 1) = (_WORD)v135;
        v97 = v131;
        *v98 = v106;
      }
      i = v98 + 3;
      v107 = *(int (__thiscall **)(int))(*(_DWORD *)v85 + 8);
      v131 = v97 + 3;
      v108 = ++v132;
    }
    while ( v108 < v107(v85) );
  }
  v109 = v141;
  *(_DWORD *)(LODWORD(v141) + 4) += v137;
  *(_DWORD *)(LODWORD(v109) + 8) += 3 * (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 8))(v85);
  std::string::string(v155);
  v110 = *(_DWORD *)(LODWORD(v109) + 176);
  LOBYTE(v162) = 13;
  if ( v110 )
    v127 = v110 + 3188;
  else
    v127 = *(_DWORD *)(LODWORD(v109) + 180) + 320;
  std::string::operator=(v155, v127);
  v133 = (int)&v124;
  std::vector<Material *>::vector<Material *>(&v124, a18);
  v111 = a17;
  v112 = *(float *)*a17;
  v113 = *(int (__thiscall **)(int, _DWORD, int *, int, int))(*(_DWORD *)v85 + 8);
  LOBYTE(v162) = 14;
  v141 = v112;
  v114 = v113(v85, LODWORD(v124), v125, v126, v127);
  v115 = Int;
  v127 = 3 * v114;
  v126 = LODWORD(v141);
  v125 = v134;
  v124 = v140;
  v116 = *(void (__thiscall **)(int, char *, void *, _DWORD, int *, _DWORD, int))(LODWORD(v145) + 72);
  a5 = 13;
  v116(*v111, v28, Int, LODWORD(v140), v134, LODWORD(v141), 3 * v114);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)*v111 + 56))(*v111, 1);
  v117 = *(_DWORD *)(LODWORD(v109) + 176);
  if ( v117 )
    PRTSettings::operator=((char *)(*v111 + 120), (char *)(v117 + 896));
  operator delete[](v28);
  operator delete[](v115);
  XMLSystem::Destroy((XMLSystem *)v160);
  LOBYTE(v162) = 2;
  std::string::~string(v155);
  LOBYTE(v162) = 15;
  std::string::~string(v161);
  LOBYTE(v162) = 1;
  std::string::~string(v160);
LABEL_59:
  LOBYTE(v162) = 0;
  std::string::~string(&a3);
  v162 = -1;
  return std::string::~string(&a10);
}
