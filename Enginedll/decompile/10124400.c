/*
 * func-name: ?CompileEffect@Shader@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00_N11AAKAAV23@1@Z
 * func-address: 0x10124400
 * callers: 0x10125020
 * callees: 0x100971c0, 0x1011fde0, 0x10122da0, 0x101781be, 0x1017a720, 0x1017aa70, 0x1017c0d0
 */

char __cdecl Shader::CompileEffect(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
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
        int a21,
        const CHAR *a22,
        const CHAR *a23,
        UINT a24,
        _DWORD *a25,
        int a26,
        char a27)
{
  _DWORD *v27; // esi
  const CHAR *v28; // ebx
  int v29; // esi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  const CHAR *v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  struct Engine *v37; // eax
  int v38; // eax
  _BYTE *v39; // ecx
  const char *v40; // eax
  int v41; // eax
  unsigned __int8 v42; // bl
  BOOL v43; // esi
  BOOL v44; // ecx
  int v45; // eax
  struct Engine *v46; // eax
  int v47; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  char v52[4]; // [esp+14h] [ebp-26Ch] BYREF
  int v53; // [esp+18h] [ebp-268h]
  int v54; // [esp+1Ch] [ebp-264h]
  int v55; // [esp+20h] [ebp-260h] BYREF
  int v56; // [esp+24h] [ebp-25Ch]
  int v57; // [esp+28h] [ebp-258h]
  int v58; // [esp+2Ch] [ebp-254h]
  int v59; // [esp+30h] [ebp-250h] BYREF
  int v60; // [esp+34h] [ebp-24Ch]
  void *v61; // [esp+38h] [ebp-248h]
  int v62; // [esp+3Ch] [ebp-244h] BYREF
  int v63; // [esp+40h] [ebp-240h]
  _DWORD *v64; // [esp+44h] [ebp-23Ch]
  int v65; // [esp+48h] [ebp-238h]
  LPCSTR v66; // [esp+4Ch] [ebp-234h]
  LPCSTR v67; // [esp+50h] [ebp-230h]
  UINT v68; // [esp+54h] [ebp-22Ch]
  int v69; // [esp+68h] [ebp-218h] BYREF
  int v70; // [esp+6Ch] [ebp-214h] BYREF
  bool v71; // [esp+73h] [ebp-20Dh]
  int *v72; // [esp+74h] [ebp-20Ch]
  int v73; // [esp+78h] [ebp-208h] BYREF
  int *v74; // [esp+7Ch] [ebp-204h]
  _BYTE v75[28]; // [esp+80h] [ebp-200h] BYREF
  _BYTE v76[28]; // [esp+9Ch] [ebp-1E4h] BYREF
  _BYTE v77[28]; // [esp+B8h] [ebp-1C8h] BYREF
  _BYTE v78[28]; // [esp+D4h] [ebp-1ACh] BYREF
  _BYTE v79[28]; // [esp+F0h] [ebp-190h] BYREF
  _DWORD v80[14]; // [esp+10Ch] [ebp-174h] BYREF
  _BYTE v81[28]; // [esp+144h] [ebp-13Ch] BYREF
  _BYTE v82[28]; // [esp+160h] [ebp-120h] BYREF
  _BYTE v83[28]; // [esp+17Ch] [ebp-104h] BYREF
  _BYTE v84[28]; // [esp+198h] [ebp-E8h] BYREF
  _BYTE v85[28]; // [esp+1B4h] [ebp-CCh] BYREF
  _BYTE v86[28]; // [esp+1D0h] [ebp-B0h] BYREF
  _BYTE v87[136]; // [esp+1ECh] [ebp-94h] BYREF
  int v88; // [esp+27Ch] [ebp-4h]

  v27 = a25;
  v74 = &v62;
  v61 = &unk_101C9D57;
  v88 = 2;
  *a25 = 32;
  std::string::string(&v62, v61);
  v72 = &v55;
  LOBYTE(v88) = 3;
  std::string::string(&v55, "ShaderPrecomputing");
  LOBYTE(v88) = 4;
  Engine::Instance();
  LOBYTE(v88) = 2;
  if ( !(unsigned __int8)sub_1017C0D0(v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68) )
    *v27 &= 0x100u;
  std::string::string(v77);
  v28 = a22;
  LOBYTE(v88) = 5;
  if ( (_BYTE)a22 )
    v68 = (UINT)"HDR_ENABLED";
  else
    v68 = (UINT)"HDR_DISABLED";
  std::string::operator=(v77, v68);
  sub_1017AA70();
  std::string::string(v75, &a8);
  LOBYTE(v88) = 6;
  std::string::string(v76, &a15);
  LOBYTE(v88) = 7;
  if ( std::string::find(v75, "1_", 0) != -1 )
    std::string::operator=(v75, "ps_2_0");
  if ( (unsigned __int8)std::operator!=<char>(v75, "ps_2_0")
    && (unsigned __int8)std::operator!=<char>(v75, "ps_2_a")
    && (unsigned __int8)std::operator!=<char>(v75, "ps_2_b")
    && (unsigned __int8)std::operator!=<char>(v75, "ps_3_0") )
  {
    std::string::operator=(v75, "ps_3_0");
  }
  v29 = a26;
  if ( (unsigned __int8)std::operator==<char>(a26, &unk_101C9D63) )
  {
    v68 = a24;
    v67 = a23;
    v66 = v28;
    v72 = &v59;
    std::string::string(&v59, v75);
    v74 = (int *)v52;
    LOBYTE(v88) = 8;
    std::string::string(v52, &a1);
    LOBYTE(v88) = 7;
    v30 = sub_1011FDE0(
            (int)v79,
            v52[0],
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            (int)v61,
            v62,
            v63,
            (int)v64,
            v65,
            (char)v66,
            (char)v67,
            v68);
    LOBYTE(v88) = 9;
    std::string::operator=(v29, v30);
    LOBYTE(v88) = 7;
    std::string::~string(v79);
  }
  v72 = &v62;
  std::string::string(&v62, v75);
  v31 = sub_1017A720(v84, v62);
  LOBYTE(v88) = 10;
  std::operator+<char>(v81, "VERSION_", v31);
  LOBYTE(v88) = 12;
  std::string::~string(v84);
  v72 = &v62;
  std::string::string(&v62, v76);
  v32 = sub_1017A720(v85, v62);
  LOBYTE(v88) = 13;
  std::operator+<char>(v82, "VERSION_", v32);
  LOBYTE(v88) = 15;
  std::string::~string(v85);
  if ( std::string::find(v75, "3_", 0) != -1 )
    std::string::operator=(v75, "ps_2_a");
  if ( std::string::find(v76, "3_", 0) != -1 )
    std::string::operator=(v76, "vs_2_0");
  v80[0] = std::string::c_str(v81);
  v80[1] = &unk_101C9D85;
  v80[2] = std::string::c_str(v82);
  v80[3] = &unk_101C9D86;
  v80[4] = "PS_COMPILER_TARGET";
  v80[5] = std::string::c_str(v75);
  v80[6] = "VS_COMPILER_TARGET";
  v80[7] = std::string::c_str(v76);
  v80[8] = std::string::c_str(v77);
  v80[9] = &unk_101C9D87;
  v80[10] = "LOADEDBYREALITY";
  v80[11] = &unk_101C9D8F;
  v80[12] = 0;
  v80[13] = 0;
  ShaderManager::Instance();
  while ( 1 )
  {
    while ( 1 )
    {
      v68 = (UINT)&v70;
      v33 = (const CHAR *)*a25;
      v67 = (LPCSTR)&v69;
      v66 = v33;
      v65 = 0;
      v64 = v80;
      v34 = std::string::c_str(&a1);
      if ( D3DXCreateEffectCompilerFromFileA(v34, v64, v65, v66, v67, v68) >= 0 )
        break;
      if ( a27 )
        goto LABEL_49;
      std::string::string(v78);
      LOBYTE(v88) = 16;
      std::string::operator+=(v78, "Error creating effect compiler from file, ");
      v35 = std::operator+<char>(v86, &a1, "\n");
      LOBYTE(v88) = 17;
      std::string::operator+=(v78, v35);
      LOBYTE(v88) = 16;
      std::string::~string(v86);
      if ( v70 && (unsigned int)(*(int (__stdcall **)(int))(*(_DWORD *)v70 + 16))(v70) > 1 )
      {
        v36 = (*(int (__stdcall **)(int))(*(_DWORD *)v70 + 12))(v70);
        std::string::operator+=(v78, v36);
        if ( v70 )
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v70 + 8))(v70);
          v70 = 0;
        }
      }
      std::string::operator+=(v78, "\nClick 'Retry' to recompile again, or 'Cancel' to abort");
      v68 = 5;
      v67 = "Error Compiling Shader";
      v66 = (LPCSTR)std::string::c_str(v78);
      v37 = Engine::Instance();
      v38 = MessageBoxA(*((HWND *)v37 + 35), v66, v67, v68);
      LOBYTE(v88) = 15;
      v39 = v78;
      if ( v38 == 2 )
        goto LABEL_48;
      std::string::~string(v78);
    }
    v72 = &v62;
    std::string::string(&v62, &unk_101C9D9D);
    v74 = &v55;
    LOBYTE(v88) = 18;
    std::string::string(&v55, "ForceDynamicVars");
    LOBYTE(v88) = 19;
    Engine::Instance();
    LOBYTE(v88) = 15;
    v71 = (unsigned __int8)sub_1017C0D0(v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68) == 0;
    std::string::substr(v75, v79, 3, 1);
    LOBYTE(v88) = 20;
    v40 = (const char *)std::string::c_str(v79);
    v41 = atoi(v40);
    if ( !(_BYTE)a23 )
      goto LABEL_31;
    if ( v41 >= 2 )
      v42 = 1;
    else
LABEL_31:
      v42 = 0;
    v43 = v71;
    (*(void (__stdcall **)(int, const char *, bool))(*(_DWORD *)v69 + 228))(v69, "SwizzleBump", v71);
    (*(void (__stdcall **)(int, const char *, BOOL))(*(_DWORD *)v69 + 228))(v69, "CalcBumpZ", v43);
    (*(void (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)v69 + 88))(v69, "CalcBumpZ", v42);
    v44 = v42 && !(_BYTE)a24;
    (*(void (__stdcall **)(int, const char *, BOOL))(*(_DWORD *)v69 + 88))(v69, "SwizzleBump", v44);
    if ( (*(int (__stdcall **)(int, _DWORD, int *, int *))(*(_DWORD *)v69 + 236))(v69, *a25, &v73, &v70) >= 0 )
      break;
    if ( v69 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)v69 + 8))(v69);
      v69 = 0;
    }
    if ( a27 )
      goto LABEL_47;
    std::string::string(v83);
    LOBYTE(v88) = 21;
    std::string::operator+=(v83, "Error compiling effect\n");
    if ( v70 )
    {
      if ( (unsigned int)(*(int (__stdcall **)(int))(*(_DWORD *)v70 + 16))(v70) > 1 )
      {
        v45 = (*(int (__stdcall **)(int))(*(_DWORD *)v70 + 12))(v70);
        std::string::operator+=(v83, v45);
        if ( v70 )
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v70 + 8))(v70);
          v70 = 0;
        }
      }
    }
    std::string::operator+=(v83, "\nClick 'Retry' to recompile again, or 'Cancel' to abort");
    v68 = 5;
    v67 = "Error Compiling Shader";
    v66 = (LPCSTR)std::string::c_str(v83);
    v46 = Engine::Instance();
    v47 = MessageBoxA(*((HWND *)v46 + 35), v66, v67, v68);
    LOBYTE(v88) = 20;
    if ( v47 == 2 )
    {
      std::string::~string(v83);
LABEL_47:
      LOBYTE(v88) = 15;
      v39 = v79;
LABEL_48:
      std::string::~string(v39);
LABEL_49:
      LOBYTE(v88) = 12;
      std::string::~string(v82);
      LOBYTE(v88) = 7;
      std::string::~string(v81);
      LOBYTE(v88) = 6;
      std::string::~string(v76);
      LOBYTE(v88) = 5;
      std::string::~string(v75);
      LOBYTE(v88) = 2;
      std::string::~string(v77);
      LOBYTE(v88) = 1;
      std::string::~string(&a1);
      LOBYTE(v88) = 0;
      std::string::~string(&a8);
      v88 = -1;
      std::string::~string(&a15);
      return 0;
    }
    std::string::~string(v83);
    LOBYTE(v88) = 15;
    std::string::~string(v79);
  }
  LOBYTE(v88) = 15;
  std::string::~string(v79);
  std::ofstream::ofstream(1);
  v68 = 64;
  v67 = (LPCSTR)32;
  LOBYTE(v88) = 22;
  v49 = std::string::c_str(a26);
  std::ofstream::open(v49, v67, v68);
  v50 = (*(int (__cdecl **)(int))(*(_DWORD *)v73 + 16))(v73);
  v51 = (*(int (__stdcall **)(int *, int))(*v72 + 12))(v72, v50);
  std::ostream::write(v87, v51, v68);
  std::ofstream::close(v87);
  if ( v73 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v73 + 8))(v73);
    v73 = 0;
  }
  if ( v69 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v69 + 8))(v69);
    v69 = 0;
  }
  LOBYTE(v88) = 15;
  std::ofstream::`vbase destructor'(v87);
  LOBYTE(v88) = 12;
  std::string::~string(v82);
  LOBYTE(v88) = 7;
  std::string::~string(v81);
  LOBYTE(v88) = 6;
  std::string::~string(v76);
  LOBYTE(v88) = 5;
  std::string::~string(v75);
  LOBYTE(v88) = 2;
  std::string::~string(v77);
  LOBYTE(v88) = 1;
  std::string::~string(&a1);
  LOBYTE(v88) = 0;
  std::string::~string(&a8);
  v88 = -1;
  std::string::~string(&a15);
  return 1;
}
