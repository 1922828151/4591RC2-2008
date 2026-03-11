/*
 * func-name: ?Initialize@Engine@@QAEXAAVConfigFile@@PAUHWND__@@1PAUHINSTANCE__@@PBDV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N4@Z
 * func-address: 0x10097ea0
 * callers: none
 * callees: 0x1000a0a0, 0x100116a0, 0x1001bda0, 0x10029ca0, 0x1002dcb0, 0x10054c00, 0x1007bd80, 0x1007ec70, 0x1007ef60, 0x100956d0, 0x10095720, 0x10095d70, 0x10096800, 0x10096b90, 0x10096e60, 0x10097220, 0x100977a0, 0x10097910, 0x100993b0, 0x10099880, 0x100d6d20, 0x100dad30, 0x100dd6c0, 0x100e1d90, 0x100e1dc0, 0x100e2270, 0x100e23a0, 0x100e2400, 0x100e2410, 0x100e2550, 0x101189f0, 0x10119430, 0x10119cc0, 0x10122da0, 0x10126010, 0x10143fd0, 0x10145800, 0x1016ed30, 0x1016f9a0, 0x10172f00, 0x1017a310, 0x1017a390, 0x1017a4a0, 0x1017a670, 0x1017aa70, 0x1017b280, 0x1017bd50, 0x1017bd60, 0x1017bd70, 0x1017c0d0, 0x1017c260, 0x1017c4e0, 0x1017cbd0, 0x1017cd10, 0x1017e0a0, 0x101a2500, 0x101a2534
 */

int __thiscall Engine::Initialize(
        Engine *this,
        char *a2,
        int a3,
        int a4,
        HINSTANCE a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        char a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  Engine *v21; // ebp
  _DWORD *v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  EngineLog *v27; // eax
  struct EventAttemper *v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // edi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  const char *v35; // eax
  _BYTE *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // esi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  signed int v50; // esi
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  void *v57; // eax
  const char *v58; // eax
  const char *v59; // eax
  int v60; // ebx
  int v61; // esi
  unsigned int v62; // ebx
  int *v63; // ebp
  int v64; // esi
  int v65; // edi
  char *v66; // ecx
  unsigned int v67; // esi
  int v68; // edi
  const CHAR *v69; // eax
  char *v70; // esi
  char *v71; // edi
  int v72; // eax
  const char *v73; // eax
  LODManager *v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // ecx
  ShaderManager *v79; // eax
  struct RenderDevice *v80; // eax
  struct RenderDevice *v81; // esi
  struct AudioDevice *v82; // eax
  const char *v83; // eax
  struct AudioDevice *v84; // eax
  int v85; // esi
  struct Input *v86; // eax
  struct LCDDevice *v87; // eax
  struct GUISystem *v88; // eax
  Editor *v89; // eax
  NxPhysics *v90; // eax
  char *v91; // esi
  char *v92; // ebx
  int v94; // [esp-20h] [ebp-258h] BYREF
  int v95; // [esp-1Ch] [ebp-254h]
  int v96; // [esp-18h] [ebp-250h]
  int v97; // [esp-14h] [ebp-24Ch]
  int v98; // [esp-10h] [ebp-248h]
  int v99; // [esp-Ch] [ebp-244h]
  void *v100; // [esp-8h] [ebp-240h]
  int v101; // [esp-4h] [ebp-23Ch] BYREF
  int v102; // [esp+0h] [ebp-238h]
  int v103; // [esp+4h] [ebp-234h]
  int v104; // [esp+8h] [ebp-230h]
  int v105; // [esp+Ch] [ebp-22Ch]
  DWORD v106; // [esp+10h] [ebp-228h]
  char *v107; // [esp+14h] [ebp-224h]
  int v108; // [esp+18h] [ebp-220h]
  int v109; // [esp+1Ch] [ebp-21Ch]
  int *v110; // [esp+28h] [ebp-210h]
  int *v111; // [esp+2Ch] [ebp-20Ch]
  Engine *v112; // [esp+30h] [ebp-208h]
  int v113; // [esp+34h] [ebp-204h] BYREF
  void *v114; // [esp+38h] [ebp-200h]
  char *v115; // [esp+3Ch] [ebp-1FCh]
  int v116; // [esp+40h] [ebp-1F8h]
  _BYTE v117[4]; // [esp+44h] [ebp-1F4h] BYREF
  void *v118; // [esp+48h] [ebp-1F0h]
  char *v119; // [esp+4Ch] [ebp-1ECh]
  int v120; // [esp+50h] [ebp-1E8h]
  _BYTE v121[28]; // [esp+60h] [ebp-1D8h] BYREF
  _BYTE v122[28]; // [esp+7Ch] [ebp-1BCh] BYREF
  _BYTE v123[28]; // [esp+98h] [ebp-1A0h] BYREF
  _BYTE v124[28]; // [esp+B4h] [ebp-184h] BYREF
  _BYTE v125[28]; // [esp+D0h] [ebp-168h] BYREF
  _BYTE v126[28]; // [esp+ECh] [ebp-14Ch] BYREF
  _BYTE v127[28]; // [esp+108h] [ebp-130h] BYREF
  _BYTE v128[28]; // [esp+124h] [ebp-114h] BYREF
  _BYTE v129[28]; // [esp+140h] [ebp-F8h] BYREF
  _BYTE v130[28]; // [esp+15Ch] [ebp-DCh] BYREF
  int v131[24]; // [esp+178h] [ebp-C0h] BYREF
  _BYTE v132[28]; // [esp+1D8h] [ebp-60h] BYREF
  _DWORD v133[7]; // [esp+1F4h] [ebp-44h] BYREF
  _BYTE v134[28]; // [esp+210h] [ebp-28h] BYREF
  int v135; // [esp+234h] [ebp-4h]

  v21 = this;
  v112 = this;
  v135 = 1;
  v22 = operator new(4u);
  if ( v22 )
    *v22 = &CEngineMsg::`vftable';
  else
    v22 = 0;
  dword_11249F38 = v22;
  *((_DWORD *)v21 + 35) = a4;
  *((_DWORD *)v21 + 36) = a3;
  hInst = a5;
  std::string::operator=(&unk_10285830, a6);
  v23 = std::string::string(v122, ".log");
  LOBYTE(v135) = 2;
  v24 = std::string::string(v117, a6);
  LOBYTE(v135) = 3;
  v25 = std::operator+<char>(v125, "..//", v24);
  LOBYTE(v135) = 4;
  v26 = std::operator+<char>(v121, v25, v23);
  LOBYTE(v135) = 5;
  v107 = (char *)std::string::c_str(v26);
  v27 = EngineLog::Instance();
  EngineLog::Init(v27, v107);
  LOBYTE(v135) = 4;
  std::string::~string(v121);
  LOBYTE(v135) = 3;
  std::string::~string(v125);
  LOBYTE(v135) = 2;
  std::string::~string(v117);
  LOBYTE(v135) = 1;
  std::string::~string(v122);
  if ( !EventAttemper::CreateInstance() )
    goto LABEL_105;
  v28 = EventAttemper::Instance();
  if ( !(*(unsigned __int8 (__thiscall **)(struct EventAttemper *))(*(_DWORD *)v28 + 4))(v28) )
    goto LABEL_105;
  v29 = sub_1017BD50(a2);
  std::string::string(v124, v29);
  LOBYTE(v135) = 6;
  std::string::string(v128, v124);
  LOBYTE(v135) = 7;
  v30 = sub_1017A310(v122, v124);
  LOBYTE(v135) = 8;
  std::string::operator=(v124, v30);
  LOBYTE(v135) = 7;
  std::string::~string(v122);
  v31 = 0;
  v32 = std::string::find(v124, ".ini", 0);
  v33 = std::string::substr(v124, v121, 0, v32);
  LOBYTE(v135) = 9;
  v34 = std::operator+<char>(v122, v33, "_backup.ini");
  LOBYTE(v135) = 10;
  std::string::operator=(v124, v34);
  LOBYTE(v135) = 9;
  std::string::~string(v122);
  LOBYTE(v135) = 7;
  std::string::~string(v121);
  if ( (unsigned __int8)sub_1017BD60(a2) )
  {
    v110 = &v101;
    std::string::string(&v101, v124);
    sub_1017CBD0(v101, v102, v103, v104, v105, v106, v107);
  }
  else
  {
    v35 = (const char *)std::string::c_str(v124);
    LogPrintf("WARNING: The config file \"%s\" was not closed properly, trying backup copy ...", v35);
    v110 = &v101;
    std::string::string(&v101, v124);
    if ( !sub_1007BD80(v101) )
    {
      SeriousWarning((char *)&byte_101C3E80);
      exit(0);
    }
    v110 = &v101;
    std::string::string(&v101, v124);
    if ( !(unsigned __int8)sub_1017E0A0(v101, v102, v103, v104, v105, v106, v107) )
    {
      SeriousWarning((char *)&byte_101C3EA4);
      exit(0);
    }
    if ( !(unsigned __int8)sub_1017BD60(a2) )
    {
      SeriousWarning((char *)&byte_101C3EC8);
      exit(0);
    }
    v110 = &v101;
    std::string::string(&v101, v128);
    sub_1017CBD0(v101, v102, v103, v104, v105, v106, v107);
    v110 = &v101;
    std::string::string(&v101, v128);
    if ( !(unsigned __int8)sub_1017E0A0(v101, v102, v103, v104, v105, v106, v107) )
    {
      SeriousWarning((char *)&byte_101C3EE8);
      exit(0);
    }
  }
  CreateDirectoryA("..\\Materials\\", 0);
  v110 = (int *)operator new(0x60u);
  LOBYTE(v135) = 11;
  if ( v110 )
    v36 = (_BYTE *)sub_1017CD10(v108, v109);
  else
    v36 = 0;
  v107 = a2;
  LOBYTE(v135) = 7;
  *((_DWORD *)v21 + 29) = v36;
  sub_1002DCB0(v36, (int)v107);
  v110 = &v101;
  std::string::string(&v101, &unk_101C3A49);
  v111 = &v94;
  LOBYTE(v135) = 12;
  std::string::string(&v94, "LogLevel");
  LOBYTE(v135) = 7;
  v37 = sub_1017C260(v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
  *((_DWORD *)v21 + 1) = v37;
  if ( v37 > 3 )
    *((_DWORD *)v21 + 1) = 3;
  v110 = &v101;
  std::string::string(&v101, &unk_101C3A4A);
  v111 = &v94;
  LOBYTE(v135) = 13;
  std::string::string(&v94, "UseModuleTags");
  LOBYTE(v135) = 7;
  if ( (unsigned __int8)sub_1017BD70(v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107) )
  {
    v110 = &v101;
    std::string::string(&v101, &unk_101C3A4B);
    v111 = &v94;
    LOBYTE(v135) = 14;
    std::string::string(&v94, "UseModuleTags");
    LOBYTE(v135) = 7;
    *((_BYTE *)v21 + 1) = sub_1017C0D0(v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
  }
  else
  {
    *((_BYTE *)v21 + 1) = 1;
  }
  v110 = (int *)operator new(0x60u);
  LOBYTE(v135) = 15;
  if ( v110 )
    v38 = sub_1017CD10(v108, v109);
  else
    v38 = 0;
  v110 = &v101;
  v100 = &unk_101C3A57;
  LOBYTE(v135) = 7;
  *((_DWORD *)v21 + 30) = v38;
  std::string::string(&v101, v100);
  v111 = &v94;
  LOBYTE(v135) = 16;
  std::string::string(&v94, "SearchPath");
  LOBYTE(v135) = 7;
  v39 = sub_1017C4E0(v122, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
  LOBYTE(v135) = 17;
  std::string::operator=(&unk_10285868, v39);
  LOBYTE(v135) = 7;
  std::string::~string(v122);
  std::string::operator=(&unk_102858CC, &unk_10285868);
  std::string::operator=(&unk_102858EC, &unk_10285868);
  byte_102858E8 = 1;
  if ( !std::string::length(&a15) )
  {
    if ( std::string::find(&a7, "module:", 0) == -1 )
    {
      v110 = &v101;
      std::string::string(&v101, &unk_101C3A63);
      v111 = &v94;
      LOBYTE(v135) = 20;
      std::string::string(&v94, "GameModule");
      LOBYTE(v135) = 7;
      v43 = sub_1017C4E0(v122, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
      LOBYTE(v135) = 21;
    }
    else
    {
      v107 = (char *)std::string::npos;
      v40 = std::string::find(&a7, "module:", 0);
      v41 = std::string::substr(&a7, v122, v40 + 7, v107);
      LOBYTE(v135) = 18;
      std::string::operator=(&unk_1028584C, v41);
      LOBYTE(v135) = 7;
      std::string::~string(v122);
      if ( std::string::find(&unk_1028584C, "-", 0) == -1 )
        goto LABEL_34;
      v42 = std::string::find(&unk_1028584C, "-", 0);
      v43 = std::string::substr(&unk_1028584C, v122, 0, v42 - 1);
      LOBYTE(v135) = 19;
    }
    std::string::operator=(&unk_1028584C, v43);
    LOBYTE(v135) = 7;
    std::string::~string(v122);
    goto LABEL_34;
  }
  std::string::operator=(&unk_1028584C, &a15);
LABEL_34:
  std::string::string(v126);
  LOBYTE(v135) = 22;
  std::string::string(v127);
  LOBYTE(v135) = 23;
  if ( std::string::length(&unk_1028584C) )
  {
    sub_1017A390(&unk_1028584C, v108);
    sub_1017A4A0(&unk_1028584C, v107);
    v44 = std::string::string(v130, "\\");
    LOBYTE(v135) = 24;
    v45 = std::string::string(v129, "\\");
    LOBYTE(v135) = 25;
    v46 = std::operator+<char>(v132, &unk_10285868, v45);
    LOBYTE(v135) = 26;
    v47 = std::operator+<char>(v134, v46, &unk_1028584C);
    LOBYTE(v135) = 27;
    v48 = std::operator+<char>(v133, v47, v44);
    LOBYTE(v135) = 28;
    v49 = std::operator+<char>(v122, v48, &unk_1028584C);
    LOBYTE(v135) = 29;
    std::operator+<char>(v125, v49, ".ini");
    LOBYTE(v135) = 31;
    std::string::~string(v122);
    LOBYTE(v135) = 32;
    std::string::~string(v133);
    LOBYTE(v135) = 33;
    std::string::~string(v134);
    LOBYTE(v135) = 34;
    std::string::~string(v132);
    LOBYTE(v135) = 35;
    std::string::~string(v129);
    LOBYTE(v135) = 36;
    std::string::~string(v130);
    sub_1017CD10(v108, v109);
    LOBYTE(v135) = 37;
    v110 = &v101;
    std::string::string(&v101, v125);
    sub_1017E0A0(v101, v102, v103, v104, v105, v106, v107);
    v110 = &v101;
    std::string::string(&v101, &unk_101C3A6F);
    v111 = &v94;
    LOBYTE(v135) = 38;
    std::string::string(&v94, "AdditionalMediaDirectories");
    LOBYTE(v135) = 37;
    if ( (unsigned __int8)sub_1017BD70(v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107) )
    {
      v110 = &v101;
      std::string::string(&v101, &unk_101C3A7D);
      v111 = &v94;
      LOBYTE(v135) = 39;
      std::string::string(&v94, "AdditionalMediaDirectories");
      LOBYTE(v135) = 37;
      sub_1017C4E0(v117, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
      LOBYTE(v135) = 40;
      if ( std::string::length(v117) )
      {
        std::string::string(v121, ",");
        LOBYTE(v135) = 41;
        sub_10096800((int)v117, (int)v121, (_DWORD *)v21 + 31);
        if ( !sub_100993B0((char *)v21 + 124) )
          sub_100116A0((_DWORD *)v21 + 31, v117);
        v50 = 0;
        dword_10285828 = sub_100993B0((char *)v21 + 124);
        if ( dword_10285828 > 0 )
        {
          do
          {
            v51 = sub_1000A0A0((_DWORD *)v21 + 31, v50);
            sub_1017A390(v51, v108);
            v52 = sub_1000A0A0((_DWORD *)v21 + 31, v50);
            sub_1017A4A0(v52, v108);
            v53 = sub_1000A0A0((_DWORD *)v21 + 31, v50);
            v107 = (char *)sub_1017A670(v123, v53);
            LOBYTE(v135) = 42;
            v54 = sub_1000A0A0((_DWORD *)v21 + 31, v50);
            std::string::operator=(v54, v107);
            LOBYTE(v135) = 41;
            std::string::~string(v123);
            ++v50;
          }
          while ( v50 < dword_10285828 );
        }
        LOBYTE(v135) = 40;
        std::string::~string(v121);
      }
      LOBYTE(v135) = 37;
      std::string::~string(v117);
    }
    v110 = &v101;
    std::string::string(&v101, "Localization");
    v111 = &v94;
    LOBYTE(v135) = 43;
    std::string::string(&v94, "LanguageFile");
    LOBYTE(v135) = 37;
    if ( (unsigned __int8)sub_1017BD70(v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107) )
    {
      v110 = &v101;
      std::string::string(&v101, "Localization");
      v111 = &v94;
      LOBYTE(v135) = 44;
      std::string::string(&v94, "LanguageFile");
      LOBYTE(v135) = 37;
      v55 = sub_1017C4E0(v123, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
      LOBYTE(v135) = 45;
      std::string::operator=(v126, v55);
      LOBYTE(v135) = 37;
      std::string::~string(v123);
    }
    v110 = &v101;
    std::string::string(&v101, "Localization");
    v111 = &v94;
    LOBYTE(v135) = 46;
    std::string::string(&v94, "LanguageCharset");
    LOBYTE(v135) = 37;
    if ( (unsigned __int8)sub_1017BD70(v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107) )
    {
      v110 = &v101;
      std::string::string(&v101, "Localization");
      v111 = &v94;
      LOBYTE(v135) = 47;
      std::string::string(&v94, "LanguageCharset");
      LOBYTE(v135) = 37;
      v56 = sub_1017C4E0(v123, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106, v107);
      LOBYTE(v135) = 48;
      std::string::operator=(v127, v56);
      LOBYTE(v135) = 37;
      std::string::~string(v123);
    }
    ++dword_10285828;
    v57 = (void *)sub_1017A670(v123, &unk_1028584C);
    LOBYTE(v135) = 49;
    sub_100116A0((_DWORD *)v21 + 31, v57);
    LOBYTE(v135) = 37;
    std::string::~string(v123);
    v110 = &v101;
    std::string::string(&v101, v125);
    sub_1017E0A0(v101, v102, v103, v104, v105, v106, v107);
    LOBYTE(v135) = 36;
    sub_10029CA0(v131);
    LOBYTE(v135) = 23;
    std::string::~string(v125);
    v31 = 0;
  }
  sub_1017AA70();
  sub_10097910((int)&unk_102858A0);
  if ( std::string::length(v126) )
  {
    if ( FindMedia((int)v126, (int)"Texts", 0, 0) )
    {
      v110 = &v101;
      std::string::string(&v101, v126);
      Engine::LoadGameTexts(v21, v101, v102, v103, v104, v105, v106, (int)v107);
    }
    else
    {
      v58 = (const char *)std::string::c_str(v126);
      LogPrintf("WARNING: LanguageFile \"%s\" was not found", v58);
    }
  }
  if ( std::string::length(v127) )
  {
    if ( FindMedia((int)v127, (int)"Texts", 0, 0) )
    {
      v110 = &v101;
      std::string::string(&v101, v127);
      Engine::LoadCharset((char *)v21, v101, v102, v103, v104, v105, v106, (int)v107);
    }
    else
    {
      v59 = (const char *)std::string::c_str(v127);
      LogPrintf("WARNING: LanguageCharset \"%s\" was not found", v59);
    }
  }
  sub_1017AA70();
  v114 = 0;
  v115 = 0;
  v116 = 0;
  LOBYTE(v135) = 50;
  std::string::string(v121, "..\\Fonts");
  LOBYTE(v135) = 51;
  sub_100116A0(&v113, v121);
  LOBYTE(v135) = 50;
  std::string::~string(v121);
  if ( dword_10285828 > 0 )
  {
    v60 = 0;
    do
    {
      std::string::string(v121, "Fonts");
      LOBYTE(v135) = 52;
      if ( !dword_102858A4 || v31 >= (dword_102858A8 - dword_102858A4) / 104 )
        invalid_parameter_noinfo();
      v61 = sub_10099880(v121);
      LOBYTE(v135) = 50;
      std::string::~string(v121);
      if ( v61 )
        sub_100116A0(&v113, (void *)(v61 + 44));
      ++v31;
      v60 += 104;
    }
    while ( (int)v31 < dword_10285828 );
  }
  v62 = 0;
  v110 = 0;
  v111 = 0;
  while ( v114 && v62 < (v115 - (_BYTE *)v114) / 28 )
  {
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v63 = v111;
    LOBYTE(v135) = 53;
    v64 = std::string::c_str((char *)v111 + (_DWORD)v114);
    sub_1017B280(v64, v117, 2, ".ttf", 0);
    sub_1017B280(v64, v117, 2, ".fon", 0);
    sub_1017B280(v64, v117, 2, ".fnt", 0);
    sub_1017B280(v64, v117, 2, ".ttc", 0);
    sub_1017B280(v64, v117, 2, ".fot", 0);
    sub_1017B280(v64, v117, 2, ".otf", 0);
    v65 = std::string::string(v123, "\\");
    v66 = (char *)v114;
    LOBYTE(v135) = 54;
    if ( !v114 || v62 >= (v115 - (_BYTE *)v114) / 28 )
    {
      invalid_parameter_noinfo();
      v66 = (char *)v114;
    }
    std::operator+<char>(v125, (char *)v63 + (_DWORD)v66, v65);
    LOBYTE(v135) = 56;
    std::string::~string(v123);
    v67 = 0;
    v68 = 0;
    while ( v118 && v67 < (v119 - (_BYTE *)v118) / 28 )
    {
      std::operator+<char>(v121, v125, (char *)v118 + v68);
      v107 = 0;
      v106 = 16;
      LOBYTE(v135) = 57;
      v69 = (const CHAR *)std::string::c_str(v121);
      AddFontResourceExA(v69, v106, v107);
      LOBYTE(v135) = 56;
      std::string::~string(v121);
      ++v67;
      v68 += 28;
    }
    LOBYTE(v135) = 53;
    std::string::~string(v125);
    v70 = (char *)v118;
    LOBYTE(v135) = 50;
    if ( v118 )
    {
      v71 = v119;
      if ( v118 != v119 )
      {
        do
        {
          std::string::~string(v70);
          v70 += 28;
        }
        while ( v70 != v71 );
        v70 = (char *)v118;
      }
      operator delete(v70);
    }
    v110 = (int *)((char *)v110 + 1);
    v111 += 7;
    v21 = v112;
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v62 = (unsigned int)v110;
  }
  Engine::LoadPlugins(v21);
  LogPushPrefix("Init:\t");
  v72 = sub_10095D70((int)v123);
  LOBYTE(v135) = 58;
  v73 = (const char *)std::string::c_str(v72);
  LogPrintf(v73);
  LOBYTE(v135) = 50;
  std::string::~string(v123);
  *((_BYTE *)v21 + 112) = 0;
  v74 = LODManager::Instance();
  LODManager::Initialize(v74);
  v75 = std::string::string(v129, "\\");
  LOBYTE(v135) = 59;
  v76 = std::operator+<char>(v130, &unk_10285868, v75);
  LOBYTE(v135) = 60;
  v77 = std::operator+<char>(v123, v76, &unk_1028584C);
  v101 = v78;
  v112 = (Engine *)&v101;
  LOBYTE(v135) = 61;
  std::operator+<char>(&v101, v77, "\\Scripts\\");
  LOBYTE(v135) = 62;
  sub_10119CC0();
  LOBYTE(v135) = 61;
  sub_10119430(v101, v102, v103, v104, v105, v106, v107);
  LOBYTE(v135) = 60;
  std::string::~string(v123);
  LOBYTE(v135) = 59;
  std::string::~string(v130);
  LOBYTE(v135) = 50;
  std::string::~string(v129);
  v79 = ShaderManager::Instance();
  ShaderManager::Initialize(v79);
  if ( !*(_BYTE *)v21 )
  {
    AsyncLoader::CreateInstance();
    if ( !AsyncLoader::Initialize(AsyncLoader::s_pInstance) )
      LogPrintf("Initialize AsyncLoader failed.");
    if ( RenderDevice::Instance() )
    {
      LogPrintf("Initializing Rendering System");
      v80 = RenderDevice::Instance();
      v112 = (Engine *)&v101;
      v81 = v80;
      std::string::string(&v101, &a7);
      (*(void (__thiscall **)(struct RenderDevice *, HINSTANCE, _DWORD, int, int, int, int, int, DWORD, char *))(*(_DWORD *)v81 + 36))(
        v81,
        a5,
        *((_DWORD *)v21 + 35),
        v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107);
    }
    if ( AudioDevice::Instance() )
    {
      v82 = AudioDevice::Instance();
      (*(void (__thiscall **)(struct AudioDevice *, _BYTE *))(*(_DWORD *)v82 + 48))(v82, v121);
      LOBYTE(v135) = 63;
      v83 = (const char *)std::string::c_str(v121);
      LogPrintf("Initializing Audio System: %s", v83);
      v84 = AudioDevice::Instance();
      (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v84 + 24))(v84, *((_DWORD *)v21 + 35));
      LOBYTE(v135) = 50;
      std::string::~string(v121);
    }
    if ( Input::Instance() )
    {
      LogPrintf("Initializing Input System");
      v112 = (Engine *)operator new(0x60u);
      LOBYTE(v135) = 64;
      if ( v112 )
        v85 = sub_1017CD10(v108, v109);
      else
        v85 = 0;
      v112 = (Engine *)&v101;
      LOBYTE(v135) = 50;
      std::string::string(&v101, "InputConfig_Default.ini");
      if ( !(unsigned __int8)sub_1017E0A0(v101, v102, v103, v104, v105, v106, v107) )
        Error("Can't find default input config file.");
      v86 = Input::Instance();
      (**(void (__thiscall ***)(struct Input *, int, int, _DWORD))v86)(v86, v85, a3, 0);
    }
    if ( LCDDevice::Instance() )
    {
      LogPrintf("Initializing LCD System");
      v87 = LCDDevice::Instance();
      (**(void (__thiscall ***)(struct LCDDevice *))v87)(v87);
    }
    if ( RenderDevice::Instance() )
    {
      v88 = GUISystem::Instance();
      (*(void (__thiscall **)(struct GUISystem *))(*(_DWORD *)v88 + 4))(v88);
    }
    v89 = Editor::Instance();
    Editor::Intialize(v89);
  }
  v90 = NxPhysics::Instance();
  NxPhysics::Initialize(v90);
  LogPopPrefix();
  v91 = (char *)v114;
  LOBYTE(v135) = 23;
  if ( v114 )
  {
    v92 = v115;
    if ( v114 != v115 )
    {
      do
      {
        std::string::~string(v91);
        v91 += 28;
      }
      while ( v91 != v92 );
      v91 = (char *)v114;
    }
    operator delete(v91);
  }
  v114 = 0;
  v115 = 0;
  v116 = 0;
  LOBYTE(v135) = 22;
  std::string::~string(v127);
  LOBYTE(v135) = 7;
  std::string::~string(v126);
  LOBYTE(v135) = 6;
  std::string::~string(v128);
  LOBYTE(v135) = 1;
  std::string::~string(v124);
LABEL_105:
  LOBYTE(v135) = 0;
  std::string::~string(&a7);
  v135 = -1;
  return std::string::~string(&a15);
}
