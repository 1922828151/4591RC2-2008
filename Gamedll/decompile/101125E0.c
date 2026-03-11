/*
 * func-name: ?LoadAnimHandle@CombinRobot@GameClient@@UAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z_0
 * func-address: 0x101125e0
 * callers: 0x1000137a
 * callees: 0x10009052, 0x1000ab4b, 0x1000b7d0, 0x1000e598, 0x1000e845, 0x10014d3a, 0x1001684c, 0x102c71e0, 0x102c7580, 0x102c7980, 0x102c8190, 0x102c9d50, 0x102c9d62
 */

void __thiscall GameClient::CombinRobot::LoadAnimHandle(_DWORD *this, int a2, void *a3)
{
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  bool v11; // cc
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  int v14; // eax
  char *v15; // ebp
  char *v16; // ebx
  char *v17; // ebp
  char *v18; // ebx
  char *v19; // ebp
  char *v20; // ebx
  char *v21; // ebp
  void *v22; // eax
  char *v23; // ebx
  char *v24; // edi
  int i; // ebx
  void *v26; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  const char *v33; // eax
  int v34; // eax
  const char *v35; // eax
  int v36; // ebp
  bool v37; // zf
  char *v38; // ecx
  int v39; // ebp
  const char *v40; // eax
  int v41; // eax
  _DWORD **v42; // ecx
  int v43; // eax
  int *v44; // ebp
  void (__thiscall *v45)(int *, _BYTE *); // edx
  char *v46; // ecx
  int v47; // ebp
  const char *v48; // eax
  int v49; // eax
  _DWORD **v50; // ecx
  int v51; // eax
  int *v52; // ebp
  void (__thiscall *v53)(int *, _BYTE *); // eax
  int v54; // ebp
  char *v55; // ecx
  int v56; // ebp
  const char *v57; // eax
  int v58; // eax
  _DWORD **v59; // ecx
  int v60; // eax
  int *v61; // eax
  char *v62; // ecx
  const char *v63; // eax
  int v64; // eax
  _DWORD **v65; // eax
  int v66; // eax
  int *v67; // ebp
  void (__thiscall *v68)(int *, _BYTE *); // eax
  int v69; // ebp
  char *v70; // ecx
  int v71; // ebp
  const char *v72; // eax
  int v73; // eax
  _DWORD **v74; // ecx
  int v75; // eax
  int *v76; // ebp
  char *v77; // ecx
  int v78; // ebp
  const char *v79; // eax
  int v80; // edx
  void *Key; // eax
  int v82; // eax
  int *v83; // ebp
  void (__thiscall *v84)(int *, _BYTE *); // edx
  _DWORD *v85; // eax
  char *v86; // ecx
  int v87; // ebp
  const char *v88; // eax
  int v89; // eax
  void *v90; // eax
  int v91; // eax
  int *v92; // ebp
  void (__thiscall *v93)(int *, _BYTE *); // edx
  int *v94; // ecx
  char *v95; // ecx
  int v96; // ebp
  const char *v97; // eax
  int v98; // eax
  void *v99; // eax
  int v100; // eax
  int *v101; // ebp
  void (__thiscall *v102)(int *, _BYTE *); // edx
  char *v103; // ecx
  int v104; // ebp
  const char *v105; // eax
  int v106; // ecx
  void *v107; // eax
  int v108; // eax
  void (__thiscall *v109)(int *, _BYTE *); // edx
  char *v110; // ecx
  int v111; // ebp
  const char *v112; // eax
  int v113; // edx
  void *v114; // eax
  int v115; // eax
  void (__thiscall *v116)(int *, _BYTE *); // edx
  char *v117; // esi
  char *v118; // edi
  char *v119; // esi
  char *v120; // edi
  char *v121; // esi
  int v122; // [esp+10h] [ebp-208h]
  int v123; // [esp+10h] [ebp-208h]
  int v124; // [esp+10h] [ebp-208h]
  int v125; // [esp+10h] [ebp-208h]
  int v126; // [esp+10h] [ebp-208h]
  int v127; // [esp+18h] [ebp-200h]
  int v128; // [esp+18h] [ebp-200h]
  int v129; // [esp+1Ch] [ebp-1FCh]
  int v130; // [esp+1Ch] [ebp-1FCh]
  void *Animation; // [esp+2Ch] [ebp-1ECh] BYREF
  unsigned int v132; // [esp+30h] [ebp-1E8h]
  int *v133; // [esp+34h] [ebp-1E4h]
  char v134[4]; // [esp+38h] [ebp-1E0h] BYREF
  void *v135; // [esp+3Ch] [ebp-1DCh]
  char *v136; // [esp+40h] [ebp-1D8h]
  int v137; // [esp+44h] [ebp-1D4h]
  _DWORD v138[2]; // [esp+48h] [ebp-1D0h] BYREF
  int v139; // [esp+50h] [ebp-1C8h] BYREF
  void *v140; // [esp+54h] [ebp-1C4h]
  char *v141; // [esp+58h] [ebp-1C0h]
  int v142; // [esp+5Ch] [ebp-1BCh]
  void *v143; // [esp+64h] [ebp-1B4h]
  char *v144; // [esp+68h] [ebp-1B0h]
  int v145; // [esp+6Ch] [ebp-1ACh]
  _BYTE v146[28]; // [esp+70h] [ebp-1A8h] BYREF
  char v147[4]; // [esp+8Ch] [ebp-18Ch] BYREF
  void *v148; // [esp+90h] [ebp-188h]
  char *v149; // [esp+94h] [ebp-184h]
  int v150; // [esp+98h] [ebp-180h]
  char v151[4]; // [esp+9Ch] [ebp-17Ch] BYREF
  void *v152; // [esp+A0h] [ebp-178h]
  char *v153; // [esp+A4h] [ebp-174h]
  int v154; // [esp+A8h] [ebp-170h]
  _BYTE v155[28]; // [esp+ACh] [ebp-16Ch] BYREF
  int v156; // [esp+C8h] [ebp-150h] BYREF
  void *v157; // [esp+CCh] [ebp-14Ch]
  char *v158; // [esp+D0h] [ebp-148h]
  int v159; // [esp+D4h] [ebp-144h]
  int v160; // [esp+D8h] [ebp-140h] BYREF
  void *v161; // [esp+DCh] [ebp-13Ch]
  char *v162; // [esp+E0h] [ebp-138h]
  int v163; // [esp+E4h] [ebp-134h]
  char v164[4]; // [esp+E8h] [ebp-130h] BYREF
  int v165; // [esp+ECh] [ebp-12Ch]
  int v166; // [esp+F4h] [ebp-124h]
  int v167; // [esp+FCh] [ebp-11Ch]
  int v168; // [esp+104h] [ebp-114h]
  int v169; // [esp+10Ch] [ebp-10Ch]
  _BYTE v170[28]; // [esp+110h] [ebp-108h] BYREF
  int v171; // [esp+12Ch] [ebp-ECh]
  _BYTE v172[44]; // [esp+130h] [ebp-E8h] BYREF
  int v173; // [esp+15Ch] [ebp-BCh]
  _BYTE v174[28]; // [esp+160h] [ebp-B8h] BYREF
  _BYTE v175[28]; // [esp+17Ch] [ebp-9Ch] BYREF
  _BYTE v176[28]; // [esp+198h] [ebp-80h] BYREF
  _BYTE v177[28]; // [esp+1B4h] [ebp-64h] BYREF
  _BYTE v178[28]; // [esp+1D0h] [ebp-48h] BYREF
  _BYTE v179[28]; // [esp+1ECh] [ebp-2Ch] BYREF
  int v180; // [esp+214h] [ebp-4h]

  Animation = a3;
  this[366] = -1;
  this[367] = -1;
  this[368] = -1;
  this[374] = -1;
  v4 = this + 395;
  v5 = 3;
  do
  {
    v6 = 5;
    do
    {
      *(v4 - 15) = -1;
      *v4++ = -1;
      --v6;
    }
    while ( v6 );
    --v5;
  }
  while ( v5 );
  v7 = this + 418;
  v8 = 8;
  do
  {
    *(v7 - 8) = -1;
    *v7++ = -1;
    --v8;
  }
  while ( v8 );
  sub_1000E845(v127, v129);
  v9 = this[428];
  v138[0] = this + 427;
  v10 = this[432];
  v11 = this[431] <= v10;
  v138[1] = v9;
  if ( !v11 )
    _invalid_parameter_noinfo();
  v12 = this[431];
  if ( v12 > this[432] )
    _invalid_parameter_noinfo();
  sub_1000E598((int)v164, (int)(this + 430), v12, (int)(this + 430), v10);
  v13 = this[431];
  if ( v13 > this[432] )
    _invalid_parameter_noinfo();
  sub_10009052((int)(this + 430), v13, 9, (int)v138);
  this[434] = 1;
  this[435] = 1;
  if ( this[179] )
  {
    std::string::string(v176, Animation);
    v180 = 0;
    sub_102C7980(v128, v130);
    v135 = 0;
    v136 = 0;
    v137 = 0;
    LOBYTE(v180) = 1;
    v14 = std::string::c_str(v176);
    sub_102C8190(v14, v134, 0, ".x", 0);
    v148 = 0;
    v149 = 0;
    v150 = 0;
    v152 = 0;
    v153 = 0;
    v154 = 0;
    v15 = (char *)v135;
    LOBYTE(v180) = 3;
    if ( v135 && (v136 - (_BYTE *)v135) / 28 )
    {
      v140 = 0;
      v141 = 0;
      v142 = 0;
      v143 = 0;
      v144 = 0;
      v145 = 0;
      v157 = 0;
      v158 = 0;
      v159 = 0;
      v161 = 0;
      v162 = 0;
      v163 = 0;
      LOBYTE(v180) = 7;
      std::string::string(v174, "Bip01_Spine");
      LOBYTE(v180) = 8;
      sub_1000AB4B(&v139, v174);
      LOBYTE(v180) = 7;
      std::string::~string(v174);
      std::string::string(v174, "Bip01_L_Thigh");
      LOBYTE(v180) = 9;
      sub_1000AB4B(&v156, v174);
      LOBYTE(v180) = 7;
      std::string::~string(v174);
      std::string::string(v174, "Bip01_R_Thigh");
      LOBYTE(v180) = 10;
      sub_1000AB4B(&v156, v174);
      LOBYTE(v180) = 7;
      std::string::~string(v174);
      std::string::string(v174, "Bip01_Pelvis");
      LOBYTE(v180) = 11;
      sub_1000AB4B(&v160, v174);
      LOBYTE(v180) = 7;
      std::string::~string(v174);
      std::string::string(v174, "Bip01");
      LOBYTE(v180) = 12;
      sub_1000AB4B(&v160, v174);
      LOBYTE(v180) = 7;
      std::string::~string(v174);
      Precacher::GetBoneNodes(this[179], &v139, v147);
      Precacher::GetBoneNodes(this[179], &v156, v151);
      v16 = (char *)v161;
      LOBYTE(v180) = 13;
      if ( v161 )
      {
        v17 = v162;
        if ( v161 != v162 )
        {
          do
          {
            std::string::~string(v16);
            v16 += 28;
          }
          while ( v16 != v17 );
          v16 = (char *)v161;
        }
        operator delete(v16);
      }
      v18 = (char *)v157;
      v161 = 0;
      v162 = 0;
      v163 = 0;
      LOBYTE(v180) = 5;
      if ( v157 )
      {
        v19 = v158;
        if ( v157 != v158 )
        {
          do
          {
            std::string::~string(v18);
            v18 += 28;
          }
          while ( v18 != v19 );
          v18 = (char *)v157;
        }
        operator delete(v18);
      }
      v157 = 0;
      v158 = 0;
      v159 = 0;
      v20 = (char *)v143;
      LOBYTE(v180) = 14;
      if ( v143 )
      {
        v21 = v144;
        if ( v143 != v144 )
        {
          do
          {
            std::string::~string(v20);
            v20 += 28;
          }
          while ( v20 != v21 );
          v20 = (char *)v143;
        }
        operator delete(v20);
      }
      v22 = v140;
      v143 = 0;
      v144 = 0;
      v145 = 0;
      LOBYTE(v180) = 3;
      if ( v140 )
      {
        v23 = v141;
        v24 = (char *)v140;
        if ( v140 != v141 )
        {
          do
          {
            std::string::~string(v24);
            v24 += 28;
          }
          while ( v24 != v23 );
          v22 = v140;
        }
        operator delete(v22);
      }
      v15 = (char *)v135;
    }
    v132 = 0;
    for ( i = 0; ; i += 28 )
    {
      if ( !v15 || v132 >= (v136 - v15) / 28 )
      {
        v117 = (char *)v152;
        LOBYTE(v180) = 2;
        if ( v152 )
        {
          v118 = v153;
          if ( v152 != v153 )
          {
            do
            {
              std::string::~string(v117);
              v117 += 28;
            }
            while ( v117 != v118 );
            v117 = (char *)v152;
          }
          operator delete(v117);
          v15 = (char *)v135;
        }
        v119 = (char *)v148;
        v152 = 0;
        v153 = 0;
        v154 = 0;
        LOBYTE(v180) = 1;
        if ( v148 )
        {
          v120 = v149;
          if ( v148 != v149 )
          {
            do
            {
              std::string::~string(v119);
              v119 += 28;
            }
            while ( v119 != v120 );
            v119 = (char *)v148;
          }
          operator delete(v119);
          v15 = (char *)v135;
        }
        v148 = 0;
        v149 = 0;
        v150 = 0;
        LOBYTE(v180) = 0;
        if ( v15 )
        {
          v121 = v136;
          if ( v15 != v136 )
          {
            do
            {
              std::string::~string(v15);
              v15 += 28;
            }
            while ( v15 != v121 );
            v15 = (char *)v135;
          }
          operator delete(v15);
        }
        v135 = 0;
        v136 = 0;
        v137 = 0;
        v180 = -1;
        std::string::~string(v176);
        return;
      }
      v26 = (void *)sub_102C71E0(v170, &v15[i]);
      LOBYTE(v180) = 15;
      sub_102C7580(v179, v26);
      LOBYTE(v180) = 17;
      std::string::~string(v170);
      v27 = std::string::length(v179);
      std::string::string(v175);
      LOBYTE(v180) = 18;
      std::string::string(v177);
      LOBYTE(v180) = 19;
      std::string::string(v178);
      LOBYTE(v180) = 20;
      std::string::string(v174);
      LOBYTE(v180) = 21;
      v28 = std::string::substr(v179, v146, v27 - 1, std::string::npos);
      LOBYTE(v180) = 22;
      std::string::operator=(v178, v28);
      LOBYTE(v180) = 21;
      std::string::~string(v146);
      v29 = std::string::substr(v179, v146, v27 - 2, 1);
      LOBYTE(v180) = 23;
      std::string::operator=(v177, v29);
      LOBYTE(v180) = 21;
      std::string::~string(v146);
      v30 = std::string::substr(v179, v146, v27 - 4, 1);
      LOBYTE(v180) = 24;
      std::string::operator=(v174, v30);
      LOBYTE(v180) = 21;
      std::string::~string(v146);
      v31 = std::string::substr(v179, v146, 0, v27 - 2);
      LOBYTE(v180) = 25;
      std::string::operator=(v175, v31);
      LOBYTE(v180) = 21;
      std::string::~string(v146);
      v133 = 0;
      Animation = 0;
      if ( *(_BYTE *)std::string::operator[](v174, 0) == 49 || *(_BYTE *)std::string::operator[](v174, 0) == 48 )
      {
        v32 = std::string::substr(v179, v146, v27 - 4, 2);
        LOBYTE(v180) = 26;
        v33 = (const char *)std::string::c_str(v32);
        Animation = (void *)(atoi(v33) - 10);
        LOBYTE(v180) = 21;
        std::string::~string(v146);
        v34 = std::string::substr(v179, v155, v27 - 6, 2);
        LOBYTE(v180) = 27;
        v35 = (const char *)std::string::c_str(v34);
        v36 = atoi(v35) - 10;
        LOBYTE(v180) = 21;
        std::string::~string(v155);
        if ( (int)Animation >= 0 )
        {
          v133 = &this[(_DWORD)Animation + 4 * v36 + v36 + 380];
          Animation = &this[(_DWORD)Animation + 4 * v36 + v36 + 395];
        }
        else
        {
          v133 = &this[v36 + 410];
          Animation = &this[v36 + 418];
        }
      }
      AnimationSet::AnimationSet((AnimationSet *)v172);
      v171 = 0;
      v173 = -1;
      v37 = *((_BYTE *)this + 1108) == 0;
      LOBYTE(v180) = 28;
      if ( v37 )
      {
        if ( *(_BYTE *)std::string::operator[](v178, 0) == 117 )
        {
          Animation = (void *)std::operator+<char>(v146, v176, "\\");
          v77 = (char *)v135;
          LOBYTE(v180) = 49;
          if ( !v135 || v132 >= (v136 - (_BYTE *)v135) / 28 )
          {
            _invalid_parameter_noinfo();
            v77 = (char *)v135;
          }
          v78 = std::operator+<char>(v155, Animation, &v77[i]);
          LOBYTE(v180) = 50;
          Animation = (void *)std::operator+<char>(&v139, "U", v175);
          LOBYTE(v180) = 51;
          v79 = (const char *)std::string::c_str(v177);
          LOBYTE(v80) = atoi(v79) != 0;
          AnimationSet::Load(v172, Animation, v78, v80, v147, 0);
          LOBYTE(v180) = 50;
          std::string::~string(&v139);
          LOBYTE(v180) = 49;
          std::string::~string(v155);
          LOBYTE(v180) = 28;
          std::string::~string(v146);
          v173 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 116))(this, v172);
          v171 = 0;
          Key = (void *)AnimationSet::GetKey(v172);
          v82 = sub_102C7580(&v139, Key);
          LOBYTE(v180) = 52;
          v83 = (int *)sub_10014D3A(v82);
          v84 = *(void (__thiscall **)(int *, _BYTE *))(v83[1] + 4);
          *v83 = v171;
          v84(v83 + 1, v172);
          v83[12] = v173;
          LOBYTE(v180) = 28;
          std::string::~string(&v139);
          v85 = v133;
        }
        else
        {
          if ( *(_BYTE *)std::string::operator[](v178, 0) == 100 )
          {
            v133 = (int *)std::operator+<char>(v146, v176, "\\");
            v86 = (char *)v135;
            LOBYTE(v180) = 53;
            if ( !v135 || v132 >= (v136 - (_BYTE *)v135) / 28 )
            {
              _invalid_parameter_noinfo();
              v86 = (char *)v135;
            }
            v87 = std::operator+<char>(v155, v133, &v86[i]);
            LOBYTE(v180) = 54;
            v133 = (int *)std::operator+<char>(&v139, "D", v175);
            LOBYTE(v180) = 55;
            v88 = (const char *)std::string::c_str(v177);
            v89 = atoi(v88);
            LOBYTE(v89) = v89 != 0;
            AnimationSet::Load(v172, v133, v87, v89, v151, 0);
            LOBYTE(v180) = 54;
            std::string::~string(&v139);
            LOBYTE(v180) = 53;
            std::string::~string(v155);
            LOBYTE(v180) = 28;
            std::string::~string(v146);
            v173 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 116))(this, v172);
            v171 = 1;
            v90 = (void *)AnimationSet::GetKey(v172);
            v91 = sub_102C7580(&v139, v90);
            LOBYTE(v180) = 56;
            v92 = (int *)sub_10014D3A(v91);
            v93 = *(void (__thiscall **)(int *, _BYTE *))(v92[1] + 4);
            *v92 = v171;
            v93(v92 + 1, v172);
            v94 = &v139;
          }
          else if ( *(_BYTE *)std::string::operator[](v178, 0) == 97 )
          {
            v138[0] = std::operator+<char>(v146, v176, "\\");
            v95 = (char *)v135;
            LOBYTE(v180) = 57;
            if ( !v135 || v132 >= (v136 - (_BYTE *)v135) / 28 )
            {
              _invalid_parameter_noinfo();
              v95 = (char *)v135;
            }
            v96 = std::operator+<char>(v155, v138[0], &v95[i]);
            LOBYTE(v180) = 58;
            v138[0] = std::operator+<char>(&v139, "U", v175);
            LOBYTE(v180) = 59;
            v97 = (const char *)std::string::c_str(v177);
            v98 = atoi(v97);
            LOBYTE(v98) = v98 != 0;
            AnimationSet::Load(v172, v138[0], v96, v98, v147, 0);
            LOBYTE(v180) = 58;
            std::string::~string(&v139);
            LOBYTE(v180) = 57;
            std::string::~string(v155);
            LOBYTE(v180) = 28;
            std::string::~string(v146);
            v173 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 116))(this, v172);
            v171 = 0;
            v99 = (void *)AnimationSet::GetKey(v172);
            v100 = sub_102C7580(&v139, v99);
            LOBYTE(v180) = 60;
            v101 = (int *)sub_10014D3A(v100);
            v102 = *(void (__thiscall **)(int *, _BYTE *))(v101[1] + 4);
            *v101 = v171;
            v102(v101 + 1, v172);
            v101[12] = v173;
            LOBYTE(v180) = 28;
            std::string::~string(&v139);
            if ( v133 )
              *v133 = v173;
            v138[0] = std::operator+<char>(v146, v176, "\\");
            v103 = (char *)v135;
            LOBYTE(v180) = 61;
            if ( !v135 || v132 >= (v136 - (_BYTE *)v135) / 28 )
            {
              _invalid_parameter_noinfo();
              v103 = (char *)v135;
            }
            v104 = std::operator+<char>(v155, v138[0], &v103[i]);
            LOBYTE(v180) = 62;
            v138[0] = std::operator+<char>(&v139, "D", v175);
            LOBYTE(v180) = 63;
            v105 = (const char *)std::string::c_str(v177);
            LOBYTE(v106) = atoi(v105) != 0;
            AnimationSet::Load(v172, v138[0], v104, v106, v151, 0);
            LOBYTE(v180) = 62;
            std::string::~string(&v139);
            LOBYTE(v180) = 61;
            std::string::~string(v155);
            LOBYTE(v180) = 28;
            std::string::~string(v146);
            v173 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 116))(this, v172);
            v171 = 1;
            v107 = (void *)AnimationSet::GetKey(v172);
            v108 = sub_102C7580(&v139, v107);
            LOBYTE(v180) = 64;
            v92 = (int *)sub_10014D3A(v108);
            v109 = *(void (__thiscall **)(int *, _BYTE *))(v92[1] + 4);
            *v92 = v171;
            v109(v92 + 1, v172);
            v94 = &v139;
          }
          else
          {
            if ( *(_BYTE *)std::string::operator[](v178, 0) != 122 )
              goto LABEL_97;
            v138[0] = std::operator+<char>(v146, v176, "\\");
            v110 = (char *)v135;
            LOBYTE(v180) = 65;
            if ( !v135 || v132 >= (v136 - (_BYTE *)v135) / 28 )
            {
              _invalid_parameter_noinfo();
              v110 = (char *)v135;
            }
            v111 = std::operator+<char>(v155, v138[0], &v110[i]);
            LOBYTE(v180) = 66;
            v138[0] = std::operator+<char>(&v139, "D", v175);
            LOBYTE(v180) = 67;
            v112 = (const char *)std::string::c_str(v177);
            LOBYTE(v113) = atoi(v112) != 0;
            AnimationSet::Load(v172, v138[0], v111, v113, 0, 0);
            LOBYTE(v180) = 66;
            std::string::~string(&v139);
            LOBYTE(v180) = 65;
            std::string::~string(v155);
            LOBYTE(v180) = 28;
            std::string::~string(v146);
            v173 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 116))(this, v172);
            v171 = 2;
            v114 = (void *)AnimationSet::GetKey(v172);
            v115 = sub_102C7580(&v156, v114);
            LOBYTE(v180) = 68;
            v92 = (int *)sub_10014D3A(v115);
            v116 = *(void (__thiscall **)(int *, _BYTE *))(v92[1] + 4);
            *v92 = v171;
            v116(v92 + 1, v172);
            v94 = &v156;
          }
          v92[12] = v173;
          LOBYTE(v180) = 28;
          std::string::~string(v94);
          v85 = Animation;
        }
        if ( v85 )
          *v85 = v173;
      }
      else if ( *(_BYTE *)std::string::operator[](v178, 0) == 117 )
      {
        Animation = (void *)std::operator+<char>(&v139, v176, "\\");
        v38 = (char *)v135;
        LOBYTE(v180) = 29;
        if ( !v135 || v132 >= (v136 - (_BYTE *)v135) / 28 )
        {
          _invalid_parameter_noinfo();
          v38 = (char *)v135;
        }
        v39 = std::operator+<char>(v146, Animation, &v38[i]);
        LOBYTE(v180) = 30;
        Animation = (void *)std::operator+<char>(v155, "U", v175);
        LOBYTE(v180) = 31;
        v40 = (const char *)std::string::c_str(v177);
        atoi(v40);
        v41 = AsyncLoader::Instance(Animation, v39);
        Animation = (void *)AsyncLoader::SubmitLoadAnimation(v41);
        v122 = *(_DWORD *)(this[310] + 4);
        v168 = this[310];
        Animation = (void *)sub_1001684C(v168, v122, (int)&Animation);
        sub_1000B7D0(1);
        v42 = (_DWORD **)Animation;
        *(_DWORD *)(v168 + 4) = Animation;
        *v42[1] = v42;
        LOBYTE(v180) = 30;
        std::string::~string(v155);
        LOBYTE(v180) = 29;
        std::string::~string(v146);
        LOBYTE(v180) = 28;
        std::string::~string(&v139);
        v171 = 0;
        v43 = std::operator+<char>(&v139, "u", v175);
        LOBYTE(v180) = 32;
        v44 = (int *)sub_10014D3A(v43);
        v45 = *(void (__thiscall **)(int *, _BYTE *))(v44[1] + 4);
        *v44 = v171;
        v45(v44 + 1, v172);
        v44[12] = v173;
        LOBYTE(v180) = 28;
        std::string::~string(&v139);
      }
      else if ( *(_BYTE *)std::string::operator[](v178, 0) == 100 )
      {
        Animation = (void *)std::operator+<char>(v146, v176, "\\");
        v46 = (char *)v135;
        LOBYTE(v180) = 33;
        if ( !v135 || v132 >= (v136 - (_BYTE *)v135) / 28 )
        {
          _invalid_parameter_noinfo();
          v46 = (char *)v135;
        }
        v47 = std::operator+<char>(v155, Animation, &v46[i]);
        LOBYTE(v180) = 34;
        Animation = (void *)std::operator+<char>(&v139, "D", v175);
        LOBYTE(v180) = 35;
        v48 = (const char *)std::string::c_str(v177);
        atoi(v48);
        v49 = AsyncLoader::Instance(Animation, v47);
        Animation = (void *)AsyncLoader::SubmitLoadAnimation(v49);
        v123 = *(_DWORD *)(this[310] + 4);
        v166 = this[310];
        Animation = (void *)sub_1001684C(v166, v123, (int)&Animation);
        sub_1000B7D0(1);
        v50 = (_DWORD **)Animation;
        *(_DWORD *)(v166 + 4) = Animation;
        *v50[1] = v50;
        LOBYTE(v180) = 34;
        std::string::~string(&v139);
        LOBYTE(v180) = 33;
        std::string::~string(v155);
        LOBYTE(v180) = 28;
        std::string::~string(v146);
        v171 = 1;
        v51 = std::operator+<char>(&v139, "d", v175);
        LOBYTE(v180) = 36;
        v52 = (int *)sub_10014D3A(v51);
        v53 = *(void (__thiscall **)(int *, _BYTE *))(v52[1] + 4);
        *v52 = v171;
        v53(v52 + 1, v172);
        v52[12] = v173;
        LOBYTE(v180) = 28;
        std::string::~string(&v139);
      }
      else if ( *(_BYTE *)std::string::operator[](v178, 0) == 97 )
      {
        v54 = std::operator+<char>(v146, v176, "\\");
        v55 = (char *)v135;
        LOBYTE(v180) = 37;
        if ( !v135 || (Animation = (void *)(v136 - (_BYTE *)v135), v132 >= (v136 - (_BYTE *)v135) / 28) )
        {
          _invalid_parameter_noinfo();
          v55 = (char *)v135;
        }
        v56 = std::operator+<char>(v155, v54, &v55[i]);
        LOBYTE(v180) = 38;
        Animation = (void *)std::operator+<char>(&v139, "U", v175);
        LOBYTE(v180) = 39;
        v57 = (const char *)std::string::c_str(v177);
        atoi(v57);
        v58 = AsyncLoader::Instance(Animation, v56);
        Animation = (void *)AsyncLoader::SubmitLoadAnimation(v58);
        v124 = *(_DWORD *)(this[310] + 4);
        v169 = this[310];
        Animation = (void *)sub_1001684C(v169, v124, (int)&Animation);
        sub_1000B7D0(1);
        v59 = (_DWORD **)Animation;
        *(_DWORD *)(v169 + 4) = Animation;
        *v59[1] = v59;
        LOBYTE(v180) = 38;
        std::string::~string(&v139);
        LOBYTE(v180) = 37;
        std::string::~string(v155);
        LOBYTE(v180) = 28;
        std::string::~string(v146);
        v171 = 0;
        v60 = std::operator+<char>(&v139, "u", v175);
        LOBYTE(v180) = 40;
        v61 = (int *)sub_10014D3A(v60);
        Animation = v61;
        *v61 = v171;
        (*(void (__thiscall **)(int *, _BYTE *))(v61[1] + 4))(v61 + 1, v172);
        *((_DWORD *)Animation + 12) = v173;
        LOBYTE(v180) = 28;
        std::string::~string(&v139);
        v133 = (int *)std::operator+<char>(v146, v176, "\\");
        v62 = (char *)v135;
        LOBYTE(v180) = 41;
        if ( !v135 || (Animation = (void *)(v136 - (_BYTE *)v135), v132 >= (v136 - (_BYTE *)v135) / 28) )
        {
          _invalid_parameter_noinfo();
          v62 = (char *)v135;
        }
        Animation = (void *)std::operator+<char>(v155, v133, &v62[i]);
        LOBYTE(v180) = 42;
        v133 = (int *)std::operator+<char>(&v139, "D", v175);
        LOBYTE(v180) = 43;
        v63 = (const char *)std::string::c_str(v177);
        atoi(v63);
        v64 = AsyncLoader::Instance(v133, Animation);
        Animation = (void *)AsyncLoader::SubmitLoadAnimation(v64);
        v125 = *(_DWORD *)(this[310] + 4);
        v167 = this[310];
        Animation = (void *)sub_1001684C(v167, v125, (int)&Animation);
        sub_1000B7D0(1);
        v65 = (_DWORD **)Animation;
        *(_DWORD *)(v167 + 4) = Animation;
        *v65[1] = v65;
        LOBYTE(v180) = 42;
        std::string::~string(&v139);
        LOBYTE(v180) = 41;
        std::string::~string(v155);
        LOBYTE(v180) = 28;
        std::string::~string(v146);
        v171 = 1;
        v66 = std::operator+<char>(&v139, "d", v175);
        LOBYTE(v180) = 44;
        v67 = (int *)sub_10014D3A(v66);
        v68 = *(void (__thiscall **)(int *, _BYTE *))(v67[1] + 4);
        *v67 = v171;
        v68(v67 + 1, v172);
        v67[12] = v173;
        LOBYTE(v180) = 28;
        std::string::~string(&v139);
      }
      else if ( *(_BYTE *)std::string::operator[](v178, 0) == 122 )
      {
        v69 = std::operator+<char>(v146, v176, "\\");
        v70 = (char *)v135;
        LOBYTE(v180) = 45;
        if ( !v135 || (Animation = (void *)(v136 - (_BYTE *)v135), v132 >= (v136 - (_BYTE *)v135) / 28) )
        {
          _invalid_parameter_noinfo();
          v70 = (char *)v135;
        }
        v71 = std::operator+<char>(v155, v69, &v70[i]);
        LOBYTE(v180) = 46;
        Animation = (void *)std::operator+<char>(&v139, "D", v175);
        LOBYTE(v180) = 47;
        v72 = (const char *)std::string::c_str(v177);
        atoi(v72);
        v73 = AsyncLoader::Instance(Animation, v71);
        Animation = (void *)AsyncLoader::SubmitLoadAnimation(v73);
        v126 = *(_DWORD *)(this[310] + 4);
        v165 = this[310];
        Animation = (void *)sub_1001684C(v165, v126, (int)&Animation);
        sub_1000B7D0(1);
        v74 = (_DWORD **)Animation;
        *(_DWORD *)(v165 + 4) = Animation;
        *v74[1] = v74;
        LOBYTE(v180) = 46;
        std::string::~string(&v139);
        LOBYTE(v180) = 45;
        std::string::~string(v155);
        LOBYTE(v180) = 28;
        std::string::~string(v146);
        v171 = 2;
        v75 = std::operator+<char>(&v139, "d", v175);
        LOBYTE(v180) = 48;
        v76 = (int *)sub_10014D3A(v75);
        *v76 = v171;
        (*(void (__thiscall **)(int *, _BYTE *))(v76[1] + 4))(v76 + 1, v172);
        v76[12] = v173;
        LOBYTE(v180) = 28;
        std::string::~string(&v139);
      }
LABEL_97:
      LOBYTE(v180) = 21;
      AnimationSet::~AnimationSet((AnimationSet *)v172);
      LOBYTE(v180) = 20;
      std::string::~string(v174);
      LOBYTE(v180) = 19;
      std::string::~string(v178);
      LOBYTE(v180) = 18;
      std::string::~string(v177);
      LOBYTE(v180) = 17;
      std::string::~string(v175);
      LOBYTE(v180) = 3;
      std::string::~string(v179);
      ++v132;
      v15 = (char *)v135;
    }
  }
}
