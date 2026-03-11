/*
 * func-name: ?loadResource@Robot@GameClient@@IAE_NXZ_0
 * func-address: 0x1017c390
 * callers: 0x1000773e
 * callees: 0x100013c0, 0x100019fb, 0x100029cd, 0x100036b1, 0x10004ff2, 0x100057f4, 0x10006947, 0x10008765, 0x1000ad76, 0x1000aff6, 0x1000b96f, 0x1000cc84, 0x1000dc4c, 0x1000dcba, 0x1000dd7d, 0x1000f1dc, 0x10011437, 0x1001247c, 0x100124ae, 0x10012c29, 0x10012c74, 0x10013b5b, 0x10014655, 0x10016a4f, 0x10016f95, 0x1001789b, 0x10018cff, 0x10018e71, 0x10018f6b, 0x100195e7, 0x102c0750, 0x102c0ed0, 0x102c0f00, 0x102c71e0, 0x102c9d62, 0x102c9d98, 0x102c9dbc, 0x102c9e3e, 0x102c9f53, 0x102ca0d8
 */

char __thiscall GameClient::Robot::loadResource(GameClient::Robot *this)
{
  unsigned int v2; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // ecx
  int v7; // edx
  _DWORD *v8; // eax
  void *v9; // eax
  int Flyweight; // esi
  int v11; // eax
  _DWORD *v12; // ecx
  unsigned __int8 (__thiscall **v13)(_DWORD, int, int, float); // edi
  int FrameworkModelName; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // esi
  _DWORD *v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // edi
  int v28; // ecx
  void (__thiscall *v29)(int); // eax
  unsigned int v30; // esi
  float j; // ebx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int BoneName; // eax
  int *v36; // ecx
  int v37; // edx
  void (__thiscall *v38)(int *, int, _DWORD); // eax
  int v39; // eax
  _DWORD *v40; // esi
  int v41; // ecx
  void (__thiscall *v42)(int, _BYTE *); // edx
  int v43; // ecx
  void (__thiscall *v44)(int, _BYTE *); // eax
  int v45; // ebx
  float v46; // eax
  int v47; // ebx
  bool v48; // cc
  unsigned int v49; // ebx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  unsigned int v56; // edi
  int m; // ebx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  GameClient::FlyweightManager *v64; // eax
  struct GameClient::Flyweight *v65; // ebx
  unsigned int v66; // edi
  int v67; // eax
  int v68; // eax
  int v69; // eax
  unsigned int v70; // ebx
  int v71; // eax
  int v72; // eax
  int v73; // edi
  int v74; // eax
  int v75; // eax
  int *v76; // ecx
  int v77; // edx
  void (__thiscall *v78)(int *, int, int); // eax
  int v79; // esi
  unsigned int v80; // edi
  int v81; // esi
  unsigned int v82; // ebx
  unsigned int v83; // esi
  int v84; // ecx
  int v85; // eax
  int v86; // edx
  _DWORD *v87; // esi
  int v88; // eax
  int v89; // eax
  int v90; // eax
  _DWORD *AnimHandle; // edi
  void (__thiscall *v92)(_DWORD *, _DWORD *); // edx
  _DWORD *v93; // esi
  int v94; // eax
  int v95; // eax
  int v96; // eax
  _DWORD *v97; // edi
  void (__thiscall *v98)(_DWORD *, _DWORD *); // edx
  unsigned int v99; // esi
  int v100; // ecx
  int v101; // eax
  int v102; // eax
  int *v103; // esi
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int *v107; // edi
  int v108; // eax
  void (__thiscall *v109)(int *, int *); // edx
  _DWORD *v110; // esi
  int v111; // eax
  int v112; // eax
  int v113; // eax
  _DWORD *v114; // edi
  void (__thiscall *v115)(_DWORD *, _DWORD *); // edx
  bool v116; // zf
  int v117; // edx
  int v118; // eax
  struct NxActor **v119; // ebx
  struct GameClient::Function *Function; // esi
  int v121; // eax
  NxPhysics *v122; // eax
  float v123; // edx
  float v124; // eax
  int v125; // ecx
  int v126; // eax
  double v127; // st7
  float v128; // ecx
  int v129; // ecx
  NxPhysics *v130; // eax
  double v131; // st7
  int v132; // eax
  double v133; // st7
  int v134; // eax
  float *v135; // eax
  double v136; // st7
  double v137; // st7
  int v138; // eax
  double v139; // st7
  int v140; // eax
  int v141; // eax
  int v142; // eax
  char FPVHandModel; // bl
  int v144; // eax
  float v145; // esi
  unsigned int v146; // edi
  unsigned int v147; // ebx
  float v148; // edi
  int v149; // ebx
  unsigned int v150; // ebx
  int v151; // edi
  int v152; // eax
  int v153; // eax
  int v154; // edi
  int v155; // eax
  int v156; // ecx
  float v157; // edi
  int v158; // eax
  int v159; // eax
  int v160; // eax
  int v161; // edx
  int v162; // eax
  int v163; // [esp+0h] [ebp-5D0h] BYREF
  int v164; // [esp+4h] [ebp-5CCh]
  int v165; // [esp+8h] [ebp-5C8h]
  int v166; // [esp+Ch] [ebp-5C4h]
  int v167; // [esp+10h] [ebp-5C0h]
  int v168; // [esp+14h] [ebp-5BCh]
  int v169; // [esp+18h] [ebp-5B8h]
  int v170; // [esp+1Ch] [ebp-5B4h]
  int v171; // [esp+20h] [ebp-5B0h]
  int v172; // [esp+24h] [ebp-5ACh]
  int v173; // [esp+28h] [ebp-5A8h]
  int v174; // [esp+2Ch] [ebp-5A4h]
  int v175; // [esp+30h] [ebp-5A0h]
  int v176; // [esp+34h] [ebp-59Ch] BYREF
  _BYTE *v177; // [esp+38h] [ebp-598h]
  int v178; // [esp+3Ch] [ebp-594h]
  int v179; // [esp+40h] [ebp-590h]
  int v180; // [esp+44h] [ebp-58Ch]
  int AnimationFileName; // [esp+48h] [ebp-588h]
  float v182; // [esp+4Ch] [ebp-584h]
  struct NxActor **v183; // [esp+50h] [ebp-580h]
  int v184; // [esp+54h] [ebp-57Ch]
  const struct BBox *v185; // [esp+58h] [ebp-578h]
  const struct Matrix *v186; // [esp+5Ch] [ebp-574h]
  float k; // [esp+64h] [ebp-56Ch]
  unsigned int n; // [esp+68h] [ebp-568h]
  float v189; // [esp+6Ch] [ebp-564h] BYREF
  int v190; // [esp+70h] [ebp-560h]
  float v191; // [esp+74h] [ebp-55Ch]
  int v192; // [esp+78h] [ebp-558h]
  float v193; // [esp+7Ch] [ebp-554h]
  float i; // [esp+80h] [ebp-550h]
  int v195; // [esp+84h] [ebp-54Ch] BYREF
  int v196; // [esp+88h] [ebp-548h]
  float v197; // [esp+8Ch] [ebp-544h]
  float v198[7]; // [esp+90h] [ebp-540h] BYREF
  float v199[16]; // [esp+ACh] [ebp-524h] BYREF
  _DWORD v200[3]; // [esp+ECh] [ebp-4E4h] BYREF
  _BYTE v201[4]; // [esp+F8h] [ebp-4D8h] BYREF
  _BYTE v202[48]; // [esp+FCh] [ebp-4D4h] BYREF
  _BYTE v203[12]; // [esp+12Ch] [ebp-4A4h] BYREF
  _BYTE v204[28]; // [esp+138h] [ebp-498h] BYREF
  _BYTE v205[28]; // [esp+154h] [ebp-47Ch] BYREF
  _BYTE v206[28]; // [esp+170h] [ebp-460h] BYREF
  _BYTE v207[28]; // [esp+18Ch] [ebp-444h] BYREF
  _BYTE v208[28]; // [esp+1A8h] [ebp-428h] BYREF
  _BYTE v209[28]; // [esp+1C4h] [ebp-40Ch] BYREF
  _BYTE v210[20]; // [esp+1E0h] [ebp-3F0h] BYREF
  float v211; // [esp+1F4h] [ebp-3DCh]
  int v212; // [esp+1F8h] [ebp-3D8h]
  float v213[7]; // [esp+1FCh] [ebp-3D4h] BYREF
  _BYTE v214[4]; // [esp+218h] [ebp-3B8h] BYREF
  _BYTE v215[464]; // [esp+21Ch] [ebp-3B4h] BYREF
  _BYTE v216[4]; // [esp+3ECh] [ebp-1E4h] BYREF
  _BYTE v217[464]; // [esp+3F0h] [ebp-1E0h] BYREF
  int v218; // [esp+5CCh] [ebp-4h]

  v2 = 0;
  if ( !*((_DWORD *)this + 50) )
    return 0;
  v4 = (_DWORD *)sub_102C0ED0(&v195);
  v5 = (_DWORD *)(*((_DWORD *)this + 43) + 1440);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  *(float *)(*((_DWORD *)this + 43) + 1444) = 0.0;
  sub_100029CD();
  v6 = (_DWORD *)*((_DWORD *)this + 43);
  v7 = v6[360];
  v8 = v6 + 360;
  v6 += 363;
  *v6 = v7;
  v6[1] = v8[1];
  v6[2] = v8[2];
  v9 = (void *)(*(_DWORD *)(*((_DWORD *)this + 50) + 8) + 396);
  v189 = COERCE_FLOAT(&v176);
  std::string::string(&v176, v9);
  v218 = 0;
  GameClient::FlyweightManager::Instance();
  v218 = -1;
  Flyweight = GameClient::FlyweightManager::GetFlyweight(
                v176,
                (int)v177,
                v178,
                v179,
                v180,
                AnimationFileName,
                SLODWORD(v182));
  v11 = *((_DWORD *)this + 49);
  if ( !v11 || v11 != Flyweight )
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 43) + 132))(*((_DWORD *)this + 43));
    v12 = (_DWORD *)*((_DWORD *)this + 43);
    *((_DWORD *)this + 49) = Flyweight;
    v13 = (unsigned __int8 (__thiscall **)(_DWORD, int, int, float))(*v12 + 108);
    v182 = COERCE_FLOAT(GameClient::FRobotFramework::GetAnimFilePath());
    AnimationFileName = GameClient::FRobotFramework::GetAnimationFileName();
    FrameworkModelName = GameClient::FRobotFramework::GetFrameworkModelName();
    if ( (*v13)(*((_DWORD *)this + 43), FrameworkModelName, AnimationFileName, COERCE_FLOAT(LODWORD(v182))) )
    {
      for ( i = 0.0; ; LODWORD(i) += 28 )
      {
        v15 = *((_DWORD *)this + 49);
        v16 = *(_DWORD *)(v15 + 476);
        if ( !v16 || v2 >= (*(_DWORD *)(v15 + 480) - v16) / 28 )
          break;
        v17 = *(_DWORD *)(v15 + 476);
        if ( !v17 || v2 >= (*(_DWORD *)(v15 + 480) - v17) / 28 )
          _invalid_parameter_noinfo();
        v18 = *(_DWORD *)(v15 + 476);
        v19 = *((_DWORD *)this + 49);
        v20 = *(_DWORD *)(v19 + 476);
        v21 = LODWORD(i) + v18;
        v22 = v19 + 472;
        if ( !v20 || v2 >= (*(_DWORD *)(v22 + 8) - v20) / 28 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, int, int, _DWORD))(**((_DWORD **)this + 43) + 124))(
          *((_DWORD *)this + 43),
          LODWORD(i) + *(_DWORD *)(v22 + 4),
          v21,
          *(_DWORD *)(*((_DWORD *)this + 43) + 716));
        ++v2;
      }
    }
    v23 = (_DWORD *)*((_DWORD *)this + 49);
    *((_DWORD *)this + 105) = v23[32];
    *((_DWORD *)this + 106) = v23[33];
    *((_DWORD *)this + 107) = v23[34];
    *((_DWORD *)this + 108) = v23[35];
    *((_DWORD *)this + 109) = v23[36];
    v24 = v23[37];
    v23 += 31;
    *((_DWORD *)this + 110) = v24;
    *((_DWORD *)this + 111) = v23[7];
    *((_DWORD *)this + 112) = v23[8];
    *((_DWORD *)this + 113) = v23[9];
    *((_DWORD *)this + 115) = *((_DWORD *)this + 105);
    *((_DWORD *)this + 116) = *((_DWORD *)this + 106);
    *((_DWORD *)this + 117) = *((_DWORD *)this + 107);
    *((_DWORD *)this + 118) = *((_DWORD *)this + 108);
    *((_DWORD *)this + 119) = *((_DWORD *)this + 109);
    *((_DWORD *)this + 120) = *((_DWORD *)this + 110);
    *((_DWORD *)this + 121) = *((_DWORD *)this + 111);
    *((_DWORD *)this + 122) = *((_DWORD *)this + 112);
    *((_DWORD *)this + 123) = *((_DWORD *)this + 113);
    v25 = *((_DWORD *)this + 49);
    *((float *)this + 122) = *((float *)this + 119) + *(float *)(v25 + 164);
    *((float *)this + 163) = *(float *)(v25 + 120);
  }
  v26 = *((_DWORD *)this + 50);
  v27 = *(_DWORD **)(v26 + 8);
  HIBYTE(v193) = 0;
  LODWORD(i) = v27;
  if ( v26 && *(_DWORD *)(v26 + 4) != *((_DWORD *)this + 60) )
  {
    v28 = *((_DWORD *)this + 43);
    v29 = *(void (__thiscall **)(int))(*(_DWORD *)v28 + 148);
    HIBYTE(v193) = 1;
    v29(v28);
    v30 = 0;
    for ( j = 0.0; ; LODWORD(j) = LODWORD(k) + 56 )
    {
      v32 = v27[107];
      k = j;
      if ( !v32 || v30 >= (v27[108] - v32) / 56 )
        break;
      v33 = v27[107];
      if ( !v33 || v30 >= (v27[108] - v33) / 56 )
        _invalid_parameter_noinfo();
      v189 = COERCE_FLOAT(std::operator+<char>(v208, LODWORD(j) + v27[107] + 28, ".reb"));
      v34 = v27[107];
      v218 = 1;
      if ( !v34 || v30 >= (v27[108] - v34) / 56 )
        _invalid_parameter_noinfo();
      BoneName = GameClient::FRobotFramework::GetBoneName(v198, LODWORD(j) + v27[107]);
      v36 = (int *)*((_DWORD *)this + 43);
      v37 = *v36;
      v182 = v189;
      AnimationFileName = BoneName;
      v38 = *(void (__thiscall **)(int *, int, _DWORD))(v37 + 140);
      LOBYTE(v218) = 2;
      v38(v36, AnimationFileName, LODWORD(v189));
      LOBYTE(v218) = 1;
      std::string::~string(v198);
      v218 = -1;
      std::string::~string(v208);
      ++v30;
    }
    *((_DWORD *)this + 60) = v27[12];
  }
  v39 = *((_DWORD *)this + 51);
  v40 = *(_DWORD **)(v39 + 8);
  if ( v39 && *(_DWORD *)(v39 + 4) != *((_DWORD *)this + 61) )
  {
    std::string::string(v207, "BackPoint0");
    v41 = *((_DWORD *)this + 43);
    v42 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v41 + 128);
    v218 = 3;
    v42(v41, v207);
    v218 = -1;
    std::string::~string(v207);
    std::string::string(v207, "BackPoint1");
    v43 = *((_DWORD *)this + 43);
    v44 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v43 + 128);
    v218 = 4;
    v44(v43, v207);
    v218 = -1;
    std::string::~string(v207);
    v45 = *((_DWORD *)this + 43);
    v46 = *(float *)(v45 + 1376);
    v47 = v45 + 1368;
    v48 = *(_DWORD *)(v47 + 4) <= LODWORD(v46);
    v189 = v46;
    if ( !v48 )
      _invalid_parameter_noinfo();
    v48 = *(_DWORD *)(v47 + 4) <= *(_DWORD *)(v47 + 8);
    v192 = *(int *)(v47 + 4);
    if ( !v48 )
      _invalid_parameter_noinfo();
    sub_1001247C((int)&v189, v47, v192, v47, SLODWORD(v189));
    sub_10008765((int)v183, v184);
    v49 = 0;
    v218 = 5;
    n = 0;
    for ( k = 0.0; ; LODWORD(k) += 56 )
    {
      v50 = v27[119];
      if ( !v50 || v49 >= (v27[120] - v50) / 56 )
        break;
      v51 = sub_100195E7((int)v208, n);
      LOBYTE(v218) = 6;
      v52 = std::operator+<char>(v198, "BackPoint", v51);
      LOBYTE(v218) = 7;
      std::string::operator=(v209, v52);
      LOBYTE(v218) = 6;
      std::string::~string(v198);
      LOBYTE(v218) = 5;
      std::string::~string(v208);
      v53 = v27[119];
      if ( !v53 || v49 >= (v27[120] - v53) / 56 )
        _invalid_parameter_noinfo();
      v54 = GameClient::FRobotFramework::GetBoneName(v198, LODWORD(k) + v27[119]);
      LOBYTE(v218) = 8;
      std::string::operator=(v210, v54);
      LOBYTE(v218) = 5;
      std::string::~string(v198);
      v55 = v27[119];
      if ( !v55 || v49 >= (v27[120] - v55) / 56 )
        _invalid_parameter_noinfo();
      std::string::operator=(v213, LODWORD(k) + v27[119] + 28);
      sub_100019FB(v209);
      ++n;
      ++v49;
    }
    v56 = 0;
    for ( m = 0; ; m += 56 )
    {
      v58 = v40[107];
      if ( !v58 || v56 >= (v40[108] - v58) / 56 )
        break;
      v59 = sub_100195E7((int)v208, n);
      LOBYTE(v218) = 9;
      v60 = std::operator+<char>(v198, "BackPoint", v59);
      LOBYTE(v218) = 10;
      std::string::operator=(v209, v60);
      LOBYTE(v218) = 9;
      std::string::~string(v198);
      LOBYTE(v218) = 5;
      std::string::~string(v208);
      v61 = v40[107];
      if ( !v61 || v56 >= (v40[108] - v61) / 56 )
        _invalid_parameter_noinfo();
      v62 = GameClient::FRobotFramework::GetBoneName(v198, m + v40[107]);
      LOBYTE(v218) = 11;
      std::string::operator=(v210, v62);
      LOBYTE(v218) = 5;
      std::string::~string(v198);
      v63 = v40[107];
      if ( !v63 || v56 >= (v40[108] - v63) / 56 )
        _invalid_parameter_noinfo();
      std::string::operator=(v213, m + v40[107] + 28);
      sub_100019FB(v209);
      ++n;
      ++v56;
    }
    v218 = 13;
    std::string::~string(v213);
    LOBYTE(v218) = 12;
    std::string::~string(v210);
    v218 = -1;
    std::string::~string(v209);
    if ( !HIBYTE(v193) )
    {
      v182 = *((float *)this + 61);
      v64 = GameClient::FlyweightManager::Instance();
      v65 = GameClient::FlyweightManager::GetFlyweight(v64, LODWORD(v182));
      if ( v65 )
      {
        v66 = 0;
        for ( k = 0.0; ; LODWORD(k) += 56 )
        {
          v67 = *((_DWORD *)v65 + 95);
          n = v66;
          if ( !v67 || v66 >= (*((_DWORD *)v65 + 96) - v67) / 56 )
            break;
          v68 = *((_DWORD *)v65 + 95);
          if ( !v68 || v66 >= (*((_DWORD *)v65 + 96) - v68) / 56 )
            _invalid_parameter_noinfo();
          v189 = COERCE_FLOAT(GameClient::FRobotFramework::GetBoneName(v198, LODWORD(k) + *((_DWORD *)v65 + 95)));
          v69 = *((_DWORD *)v65 + 95);
          v218 = 14;
          if ( !v69 || v66 >= (*((_DWORD *)v65 + 96) - v69) / 56 )
            _invalid_parameter_noinfo();
          (*(void (__thiscall **)(_DWORD, float, int))(**((_DWORD **)this + 43) + 144))(
            *((_DWORD *)this + 43),
            COERCE_FLOAT(LODWORD(v189)),
            LODWORD(k) + *((_DWORD *)v65 + 95) + 28);
          v218 = -1;
          std::string::~string(v198);
          v66 = n + 1;
        }
      }
    }
    v70 = 0;
    for ( k = 0.0; ; LODWORD(k) += 56 )
    {
      v71 = v40[95];
      if ( !v71 || v70 >= (v40[96] - v71) / 56 )
        break;
      v72 = v40[95];
      if ( !v72 || v70 >= (v40[96] - v72) / 56 )
        _invalid_parameter_noinfo();
      *(float *)&v73 = COERCE_FLOAT(std::operator+<char>(v208, LODWORD(k) + v40[95] + 28, ".reb"));
      v74 = v40[95];
      v218 = 15;
      if ( !v74 || v70 >= (v40[96] - v74) / 56 )
        _invalid_parameter_noinfo();
      v75 = GameClient::FRobotFramework::GetBoneName(v198, LODWORD(k) + v40[95]);
      v76 = (int *)*((_DWORD *)this + 43);
      v77 = *v76;
      v182 = *(float *)&v73;
      AnimationFileName = v75;
      v78 = *(void (__thiscall **)(int *, int, int))(v77 + 140);
      LOBYTE(v218) = 16;
      v78(v76, AnimationFileName, v73);
      LOBYTE(v218) = 15;
      std::string::~string(v198);
      v218 = -1;
      std::string::~string(v208);
      ++v70;
    }
    *((_DWORD *)this + 61) = v40[12];
  }
  v79 = *((_DWORD *)this + 43);
  v80 = *(_DWORD *)(v79 + 1752);
  v81 = v79 + 1744;
  if ( *(_DWORD *)(v81 + 4) > v80 )
    _invalid_parameter_noinfo();
  v82 = *(_DWORD *)(v81 + 4);
  if ( v82 > *(_DWORD *)(v81 + 8) )
    _invalid_parameter_noinfo();
  sub_1000DC4C((int)&v189, v81, v82, v81, v80);
  v83 = 0;
  for ( n = 0; ; v83 = n )
  {
    v84 = *((_DWORD *)this + 63);
    if ( !v84 || v83 >= (*((_DWORD *)this + 64) - v84) >> 2 )
      break;
    `eh vector constructor iterator'(v214, 0x34u, 9, sub_1000840E, (void (__thiscall *)(void *))sub_1000B451);
    v218 = 17;
    `eh vector constructor iterator'(v216, 0x34u, 9, sub_1000840E, (void (__thiscall *)(void *))sub_1000B451);
    v85 = *((_DWORD *)this + 63);
    v218 = 18;
    if ( !v85 || v83 >= (*((_DWORD *)this + 64) - v85) >> 2 )
      _invalid_parameter_noinfo();
    v86 = *((_DWORD *)this + 63);
    if ( *(_DWORD *)(v86 + 4 * v83) )
    {
      if ( !v86 || n >= (*((_DWORD *)this + 64) - v86) >> 2 )
        _invalid_parameter_noinfo();
      v189 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 63) + 4 * n) + 8);
      v87 = v215;
      LODWORD(k) = LODWORD(v189) + 1124;
      v192 = 9;
      do
      {
        v182 = COERCE_FLOAT(sub_102C71E0(v198, LODWORD(k)));
        LOBYTE(v218) = 19;
        v88 = GameClient::FRobotFramework::GetAnimationFileName();
        std::operator+<char>(v207, v88, LODWORD(v182));
        LOBYTE(v218) = 21;
        std::string::~string(v198);
        v89 = std::string::length(v207);
        std::string::substr(v207, v208, 0, v89 - 2);
        LOBYTE(v218) = 22;
        v90 = std::operator+<char>(v199, "U", v208);
        LOBYTE(v218) = 23;
        AnimHandle = (_DWORD *)GameClient::CombinRobot::GetAnimHandle((int)v201, v90);
        v92 = *(void (__thiscall **)(_DWORD *, _DWORD *))(*v87 + 4);
        *(v87 - 1) = *AnimHandle;
        LOBYTE(v218) = 24;
        v92(v87, AnimHandle + 1);
        v87[11] = AnimHandle[12];
        LOBYTE(v218) = 23;
        AnimationSet::~AnimationSet((AnimationSet *)v202);
        LOBYTE(v218) = 22;
        std::string::~string(v199);
        LOBYTE(v218) = 21;
        std::string::~string(v208);
        LOBYTE(v218) = 18;
        std::string::~string(v207);
        LODWORD(k) += 28;
        v87 += 13;
        --v192;
      }
      while ( *(float *)&v192 != 0.0 );
      if ( *(_BYTE *)(LODWORD(v189) + 1628) )
      {
        v93 = v217;
        LODWORD(k) = LODWORD(v189) + 1376;
        LODWORD(v189) = 9;
        do
        {
          v182 = COERCE_FLOAT(sub_102C71E0(v199, LODWORD(k)));
          LOBYTE(v218) = 25;
          v94 = GameClient::FRobotFramework::GetAnimationFileName();
          std::operator+<char>(v207, v94, LODWORD(v182));
          LOBYTE(v218) = 27;
          std::string::~string(v199);
          v95 = std::string::length(v207);
          std::string::substr(v207, v208, 0, v95 - 2);
          LOBYTE(v218) = 28;
          v96 = std::operator+<char>(v198, "D", v208);
          LOBYTE(v218) = 29;
          v97 = (_DWORD *)GameClient::CombinRobot::GetAnimHandle((int)v201, v96);
          v98 = *(void (__thiscall **)(_DWORD *, _DWORD *))(*v93 + 4);
          *(v93 - 1) = *v97;
          LOBYTE(v218) = 30;
          v98(v93, v97 + 1);
          v93[11] = v97[12];
          LOBYTE(v218) = 29;
          AnimationSet::~AnimationSet((AnimationSet *)v202);
          LOBYTE(v218) = 28;
          std::string::~string(v198);
          LOBYTE(v218) = 27;
          std::string::~string(v208);
          LOBYTE(v218) = 18;
          std::string::~string(v207);
          LODWORD(k) += 28;
          v93 += 13;
          --LODWORD(v189);
        }
        while ( v189 != 0.0 );
      }
    }
    sub_1000B96F(v214);
    v218 = 31;
    `eh vector destructor iterator'(v216, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
    v218 = -1;
    `eh vector destructor iterator'(v214, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
    ++n;
  }
  v99 = 0;
  for ( n = 0; ; v99 = n )
  {
    v100 = *((_DWORD *)this + 67);
    if ( !v100 || v99 >= (*((_DWORD *)this + 68) - v100) >> 2 )
      break;
    `eh vector constructor iterator'(v214, 0x34u, 9, sub_1000840E, (void (__thiscall *)(void *))sub_1000B451);
    v218 = 32;
    `eh vector constructor iterator'(v216, 0x34u, 9, sub_1000840E, (void (__thiscall *)(void *))sub_1000B451);
    v101 = *((_DWORD *)this + 67);
    v218 = 33;
    if ( !v101 || v99 >= (*((_DWORD *)this + 68) - v101) >> 2 )
      _invalid_parameter_noinfo();
    v102 = *((_DWORD *)this + 67);
    if ( *(_DWORD *)(v102 + 4 * v99) )
    {
      if ( !v102 || n >= (*((_DWORD *)this + 68) - v102) >> 2 )
        _invalid_parameter_noinfo();
      v192 = *(int *)(*(_DWORD *)(*((_DWORD *)this + 67) + 4 * n) + 8);
      v103 = (int *)v215;
      LODWORD(k) = v192 + 1124;
      LODWORD(v189) = 9;
      do
      {
        v182 = COERCE_FLOAT(sub_102C71E0(v199, LODWORD(k)));
        LOBYTE(v218) = 34;
        v104 = GameClient::FRobotFramework::GetAnimationFileName();
        std::operator+<char>(v207, v104, LODWORD(v182));
        LOBYTE(v218) = 36;
        std::string::~string(v199);
        v105 = std::string::length(v207);
        std::string::substr(v207, v208, 0, v105 - 2);
        LOBYTE(v218) = 37;
        v106 = std::operator+<char>(v198, "U", v208);
        LOBYTE(v218) = 38;
        v107 = (int *)GameClient::CombinRobot::GetAnimHandle((int)v201, v106);
        v108 = *v103;
        *(v103 - 1) = *v107;
        v109 = *(void (__thiscall **)(int *, int *))(v108 + 4);
        LOBYTE(v218) = 39;
        v109(v103, v107 + 1);
        v103[11] = v107[12];
        LOBYTE(v218) = 38;
        AnimationSet::~AnimationSet((AnimationSet *)v202);
        LOBYTE(v218) = 37;
        std::string::~string(v198);
        LOBYTE(v218) = 36;
        std::string::~string(v208);
        LOBYTE(v218) = 33;
        std::string::~string(v207);
        LODWORD(k) += 28;
        v103 += 13;
        --LODWORD(v189);
      }
      while ( v189 != 0.0 );
      if ( *(_BYTE *)(v192 + 1628) )
      {
        v110 = v217;
        LODWORD(k) = v192 + 1376;
        LODWORD(v189) = 9;
        do
        {
          v182 = COERCE_FLOAT(sub_102C71E0(v199, LODWORD(k)));
          LOBYTE(v218) = 40;
          v111 = GameClient::FRobotFramework::GetAnimationFileName();
          std::operator+<char>(v207, v111, LODWORD(v182));
          LOBYTE(v218) = 42;
          std::string::~string(v199);
          v112 = std::string::length(v207);
          std::string::substr(v207, v208, 0, v112 - 2);
          LOBYTE(v218) = 43;
          v113 = std::operator+<char>(v198, "D", v208);
          LOBYTE(v218) = 44;
          v114 = (_DWORD *)GameClient::CombinRobot::GetAnimHandle((int)v201, v113);
          v115 = *(void (__thiscall **)(_DWORD *, _DWORD *))(*v110 + 4);
          *(v110 - 1) = *v114;
          LOBYTE(v218) = 45;
          v115(v110, v114 + 1);
          v110[11] = v114[12];
          LOBYTE(v218) = 44;
          AnimationSet::~AnimationSet((AnimationSet *)v202);
          LOBYTE(v218) = 43;
          std::string::~string(v198);
          LOBYTE(v218) = 42;
          std::string::~string(v208);
          LOBYTE(v218) = 33;
          std::string::~string(v207);
          LODWORD(k) += 28;
          v110 += 13;
          --LODWORD(v189);
        }
        while ( v189 != 0.0 );
      }
    }
    sub_1000B96F(v214);
    v218 = 46;
    `eh vector destructor iterator'(v216, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
    v218 = -1;
    `eh vector destructor iterator'(v214, 0x34u, 9, (void (__thiscall *)(void *))sub_1000B451);
    ++n;
  }
  v116 = *((_DWORD *)this + 44) == 0;
  v117 = *((_DWORD *)this + 7);
  v118 = *((_DWORD *)this + 8);
  v119 = (struct NxActor **)((char *)this + 176);
  v200[0] = *((_DWORD *)this + 6);
  v200[1] = v117;
  v200[2] = v118;
  if ( !v116 )
  {
    if ( *((_DWORD *)this + 226) != -1 )
    {
      if ( (`GameClient::FuncManager::Instance'::`2'::`local static guard' & 1) == 0 )
      {
        `GameClient::FuncManager::Instance'::`2'::`local static guard' |= 1u;
        v218 = 47;
        GameClient::FuncManager::FuncManager((GameClient::FuncManager *)&`GameClient::FuncManager::Instance'::`2'::fm);
        atexit(sub_10018142);
        v218 = -1;
      }
      Function = GameClient::FuncManager::GetFunction(
                   (GameClient::FuncManager *)&`GameClient::FuncManager::Instance'::`2'::fm,
                   *((_DWORD *)this + 226));
      if ( Function )
      {
        v121 = sub_10016A4F(*((_DWORD *)this + 226));
        if ( v121 )
          (*(void (__thiscall **)(struct GameClient::Function *, int))(*(_DWORD *)Function + 44))(Function, v121);
      }
    }
    v122 = (NxPhysics *)NxPhysics::Instance((char *)this + 176, v183, v184, v185, v186);
    NxPhysics::DestroyControllerActor(v122, v183);
    *v119 = 0;
  }
  if ( *((_DWORD *)this + 90) <= 1u && (*((_DWORD *)this + 92) & 0x20) == 0 )
  {
    v123 = *((float *)this + 6);
    v124 = *((float *)this + 7);
    qmemcpy(v199, (char *)this + 36, sizeof(v199));
    v199[14] = *((float *)this + 8);
    v125 = *((_DWORD *)this + 43);
    v199[12] = v123;
    v199[13] = v124;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v125 + 36))(v125, v199);
    v126 = *((_DWORD *)this + 3);
    v127 = (double)*((int *)this + 182);
    v182 = v128;
    v129 = *((_DWORD *)this + 47);
    v182 = v127;
    AnimationFileName = v129;
    *(float *)&v180 = (float)*((int *)this + 84);
    v130 = (NxPhysics *)NxPhysics::Instance(*((_DWORD *)this + 43), v126, (char *)this + 416, v199, v180);
    *v119 = NxPhysics::CreateControllerActor(v130, (struct Actor *)v183, v184, v185, v186);
    *((_DWORD *)this + 135) = *((_DWORD *)this + 105);
    *((_DWORD *)this + 136) = *((_DWORD *)this + 106);
    *((_DWORD *)this + 137) = *((_DWORD *)this + 107);
    *((_DWORD *)this + 138) = *((_DWORD *)this + 108);
    *((_DWORD *)this + 139) = *((_DWORD *)this + 109);
    *((_DWORD *)this + 140) = *((_DWORD *)this + 110);
    *((_DWORD *)this + 141) = *((_DWORD *)this + 111);
    *((_DWORD *)this + 142) = *((_DWORD *)this + 112);
    *((_DWORD *)this + 143) = *((_DWORD *)this + 113);
  }
  GameClient::Robot::UpdatePhysicsController(this);
  if ( *v119 )
  {
    (*(void (__thiscall **)(GameClient::Robot *, _DWORD *))(*(_DWORD *)this + 36))(this, v200);
    if ( !*((_DWORD *)this + 45) && *((_DWORD *)this + 90) == 1 )
    {
      sub_1000F1DC();
      v199[7] = *((float *)this + 111);
      v131 = *((float *)this + 112);
      v182 = COERCE_FLOAT(&v195);
      v218 = 48;
      v199[8] = v131 * 0.2000000029802322;
      v199[9] = *((float *)this + 112);
      v199[4] = *((float *)this + 108);
      v199[5] = 0.2000000029802322 * *((float *)this + 109);
      v199[6] = *((float *)this + 109);
      sub_102C0ED0(&v195);
      v132 = *((_DWORD *)this + 89);
      switch ( v132 )
      {
        case 2:
          v189 = -*(float *)&v195;
          *(float *)&v192 = -*(float *)&v196;
          v133 = v197;
LABEL_135:
          k = -v133;
          *(float *)&v195 = v189;
          v190 = v192;
          v196 = v192;
          v191 = k;
          v197 = k;
          break;
        case 4:
          v134 = sub_102C0F00(&v189);
          v195 = *(int *)v134;
          v196 = *(int *)(v134 + 4);
          v197 = *(float *)(v134 + 8);
          break;
        case 3:
          v135 = (float *)sub_102C0F00(v203);
          v189 = -*v135;
          *(float *)&v192 = -v135[1];
          v133 = v135[2];
          goto LABEL_135;
      }
      *(float *)&v196 = 0.0;
      v189 = *(float *)&v195 * *(float *)&v195 + 0.0 * 0.0 + v197 * v197;
      if ( v189 >= 0.0000000099999999 )
      {
        v189 = sqrt(v189);
        v189 = 1.0 / v189;
        *(float *)&v195 = v189 * *(float *)&v195;
        *(float *)&v196 = 0.0 * v189;
        v197 = v189 * v197;
      }
      sub_10018E71(v209, (int)&v195);
      v136 = *((float *)this + 111) - *((float *)this + 108);
      v182 = 0.0;
      AnimationFileName = 0;
      v189 = v136;
      v180 = 5;
      v137 = v189;
      v189 = v189 * *(float *)&v195;
      *(float *)&v192 = v137 * *(float *)&v196;
      k = v137 * v197;
      v189 = v189 * 0.5;
      *(float *)&v192 = *(float *)&v192 * 0.5;
      k = 0.5 * k;
      v189 = v189 + *((float *)this + 6);
      *(float *)&v192 = *((float *)this + 7) + *(float *)&v192;
      k = *((float *)this + 8) + k;
      v211 = v189;
      v138 = *((_DWORD *)this + 3);
      v190 = v192;
      v179 = v192;
      v191 = k;
      v139 = (double)*((int *)this + 84);
      v212 = v192;
      *(float *)&v179 = v139;
      v178 = 0;
      v177 = v209;
      v213[0] = k;
      v140 = NxPhysics::Instance(*((_DWORD *)this + 43), v138, v199, v209, 0);
      *((_DWORD *)this + 45) = NxPhysics::CreateBoxActor(v140);
      v218 = -1;
      sub_102C0750(v199);
    }
  }
  if ( *((_DWORD *)this + 43) )
  {
    v141 = *((_DWORD *)this + 5);
    if ( v141 )
    {
      if ( *(_BYTE *)(v141 + 212) )
      {
        v142 = sub_102C71E0(v199, *((_DWORD *)this + 49) + 368);
        v218 = 49;
        FPVHandModel = GameClient::CombinRobot::LoadFPVHandModel(v142);
        v218 = -1;
        std::string::~string(v199);
        if ( FPVHandModel )
          GameClient::CombinRobot::LoadFPVHandAnim(*((_DWORD *)this + 49) + 396);
        if ( *((_DWORD *)this + 372) )
        {
          v145 = i;
        }
        else
        {
          v189 = COERCE_FLOAT(operator new(0x254u));
          v218 = 50;
          if ( v189 == 0.0 )
            v144 = 0;
          else
            v144 = sub_1000DCBA((int)v183, v184);
          v182 = COERCE_FLOAT("RobotStadia.dds");
          v218 = -1;
          *((_DWORD *)this + 372) = v144;
          std::string::string(v198, LODWORD(v182));
          v218 = 51;
          std::string::string(v207, "RobotViewDirection.dds");
          LOBYTE(v218) = 52;
          std::string::string(v208, "RobotView.dds");
          v145 = i;
          LOBYTE(v218) = 53;
          sub_10018CFF((int)v208, (int)v207, (int)v198, LODWORD(i) + 988);
          LOBYTE(v218) = 52;
          std::string::~string(v208);
          LOBYTE(v218) = 51;
          std::string::~string(v207);
          v218 = -1;
          std::string::~string(v198);
        }
        LODWORD(v182) = LODWORD(v145) + 560;
        *((_BYTE *)this + 1112) = 0;
        std::string::operator=((char *)this + 1048, LODWORD(v182));
        sub_10004FF2((char *)this + 1048);
        LODWORD(v182) = LODWORD(v145) + 640;
        *((_BYTE *)this + 1192) = 0;
        std::string::operator=((char *)this + 1128, LODWORD(v182));
        sub_10004FF2((char *)this + 1128);
        LODWORD(v182) = LODWORD(v145) + 720;
        *((_BYTE *)this + 1272) = 0;
        std::string::operator=((char *)this + 1208, LODWORD(v182));
        *((float *)this + 317) = *(float *)(LODWORD(v145) + 780);
        sub_10004FF2((char *)this + 1208);
        v182 = COERCE_FLOAT("Alarm.wav");
        *((_BYTE *)this + 1352) = 0;
        std::string::operator=((char *)this + 1288, LODWORD(v182));
        sub_10004FF2((char *)this + 1288);
        v116 = *((_DWORD *)this + 50) == 0;
        *((_DWORD *)this + 366) = -1;
        if ( !v116 && HIBYTE(v193) )
        {
          v146 = *((_DWORD *)this + 370);
          if ( *((_DWORD *)this + 369) > v146 )
            _invalid_parameter_noinfo();
          v147 = *((_DWORD *)this + 369);
          if ( v147 > *((_DWORD *)this + 370) )
            _invalid_parameter_noinfo();
          sub_100036B1((int)&v189, (int)this + 1472, v147, (int)this + 1472, v146);
          v148 = i;
          *((float *)this + 367) = *(float *)(LODWORD(i) + 556);
          v149 = *(_DWORD *)(LODWORD(v148) + 548);
          v189 = COERCE_FLOAT(&v163);
          sub_100057F4(v163, v164);
          sub_10018F6B(
            v149,
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
            (int)v177,
            v178,
            v179,
            v180,
            AnimationFileName,
            SLODWORD(v182));
          v150 = 0;
          if ( *(int *)(LODWORD(v148) + 548) > 0 )
          {
            v189 = 0.0;
            do
            {
              v151 = std::string::string(v201, ".wav");
              v218 = 54;
              v152 = sub_100195E7((int)v206, v150);
              LOBYTE(v218) = 55;
              v153 = std::operator+<char>(v205, LODWORD(i) + 520, v152);
              LOBYTE(v218) = 56;
              *(float *)&v154 = COERCE_FLOAT(std::operator+<char>(v204, v153, v151));
              v155 = *((_DWORD *)this + 369);
              LOBYTE(v218) = 57;
              if ( !v155 || v150 >= (*((_DWORD *)this + 370) - v155) / 80 )
                _invalid_parameter_noinfo();
              v156 = *((_DWORD *)this + 369);
              v182 = *(float *)&v154;
              v157 = v189;
              std::string::operator=(LODWORD(v189) + v156, LODWORD(v182));
              LOBYTE(v218) = 56;
              std::string::~string(v204);
              LOBYTE(v218) = 55;
              std::string::~string(v205);
              LOBYTE(v218) = 54;
              std::string::~string(v206);
              v218 = -1;
              std::string::~string(v201);
              v158 = *((_DWORD *)this + 369);
              if ( !v158 || v150 >= (*((_DWORD *)this + 370) - v158) / 80 )
                _invalid_parameter_noinfo();
              *(float *)(*((_DWORD *)this + 369) + LODWORD(v157) + 60) = (float)*(int *)(LODWORD(i) + 552);
              v159 = *((_DWORD *)this + 369);
              if ( !v159 || v150 >= (*((_DWORD *)this + 370) - v159) / 80 )
                _invalid_parameter_noinfo();
              *(_BYTE *)(*((_DWORD *)this + 369) + LODWORD(v157) + 64) = 0;
              v160 = *((_DWORD *)this + 369);
              if ( !v160 || v150 >= (*((_DWORD *)this + 370) - v160) / 80 )
                _invalid_parameter_noinfo();
              sub_10004FF2((void *)(LODWORD(v157) + *((_DWORD *)this + 369)));
              v48 = (int)++v150 < *(_DWORD *)(LODWORD(i) + 548);
              LODWORD(v189) = LODWORD(v157) + 80;
            }
            while ( v48 );
          }
        }
      }
    }
  }
  GameClient::Robot::ChangeViewMode(this, 1);
  v161 = *((_DWORD *)this + 7);
  v162 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 183) = *((_DWORD *)this + 6);
  *((_DWORD *)this + 184) = v161;
  *((_DWORD *)this + 185) = v162;
  return 1;
}
