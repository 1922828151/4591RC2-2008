/*
 * func-name: sub_1011FDE0
 * func-address: 0x1011fde0
 * callers: 0x10124400, 0x10125a30
 * callees: 0x10097220, 0x1017a370, 0x1017aa70
 */

int __cdecl sub_1011FDE0(
        int a1,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char a16,
        char a17,
        char a18)
{
  char Media; // bl
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  _BYTE *v33; // ecx
  int v34; // eax
  int v35; // eax
  const CHAR *v36; // eax
  const CHAR *v37; // eax
  int last_of; // eax
  int v39; // eax
  _BYTE v41[28]; // [esp+4h] [ebp-1B0h] BYREF
  _BYTE v42[28]; // [esp+20h] [ebp-194h] BYREF
  _BYTE v43[28]; // [esp+3Ch] [ebp-178h] BYREF
  _BYTE v44[28]; // [esp+58h] [ebp-15Ch] BYREF
  _BYTE v45[28]; // [esp+74h] [ebp-140h] BYREF
  _BYTE v46[28]; // [esp+90h] [ebp-124h] BYREF
  _BYTE v47[28]; // [esp+ACh] [ebp-108h] BYREF
  _BYTE v48[28]; // [esp+C8h] [ebp-ECh] BYREF
  _BYTE v49[28]; // [esp+E4h] [ebp-D0h] BYREF
  _BYTE v50[28]; // [esp+100h] [ebp-B4h] BYREF
  _BYTE v51[28]; // [esp+11Ch] [ebp-98h] BYREF
  _BYTE v52[28]; // [esp+138h] [ebp-7Ch] BYREF
  _BYTE v53[28]; // [esp+154h] [ebp-60h] BYREF
  _BYTE v54[28]; // [esp+170h] [ebp-44h] BYREF
  _BYTE v55[28]; // [esp+18Ch] [ebp-28h] BYREF
  int v56; // [esp+1B0h] [ebp-4h]

  v56 = 2;
  sub_1017AA70();
  if ( std::string::find(&a9, "1_", 0) != -1 )
    std::string::operator=(&a9, "ps_2_0");
  if ( (unsigned __int8)std::operator!=<char>(&a9, "ps_2_0")
    && (unsigned __int8)std::operator!=<char>(&a9, "ps_2_a")
    && (unsigned __int8)std::operator!=<char>(&a9, "ps_2_b")
    && (unsigned __int8)std::operator!=<char>(&a9, "ps_3_0") )
  {
    std::string::operator=(&a9, "ps_3_0");
  }
  std::string::string(v44);
  LOBYTE(v56) = 3;
  if ( a16 )
    std::string::operator=(v44, "HDR");
  else
    std::string::operator=(v44, "NHDR");
  std::string::string(v43);
  LOBYTE(v56) = 4;
  if ( a17 )
    std::string::operator=(v43, "CNMaps");
  else
    std::string::operator=(v43, "NCNMaps");
  std::string::string(v45);
  LOBYTE(v56) = 5;
  if ( a18 )
    std::string::operator=(v45, "s3DC");
  else
    std::string::operator=(v45, "Ns3DC");
  std::string::string(v47, &a2);
  LOBYTE(v56) = 6;
  Media = FindMedia((int)&a2, (int)"Shaders", 0, 0);
  std::string::string(a1);
  if ( Media )
    std::string::operator=(a1, &a2);
  else
    std::string::operator=(a1, v47);
  v19 = sub_1017A370(a1);
  v20 = std::operator+<char>(v49, "Comp_", &a9);
  LOBYTE(v56) = 7;
  v21 = std::operator+<char>(v52, v20, "_");
  LOBYTE(v56) = 8;
  v22 = std::operator+<char>(v54, v21, v44);
  LOBYTE(v56) = 9;
  v23 = std::operator+<char>(v50, v22, "_");
  LOBYTE(v56) = 10;
  v24 = std::operator+<char>(v55, v23, v43);
  LOBYTE(v56) = 11;
  v25 = std::operator+<char>(v48, v24, "_");
  LOBYTE(v56) = 12;
  v26 = std::operator+<char>(v53, v25, v45);
  LOBYTE(v56) = 13;
  std::operator+<char>(v41, v26, "\\");
  LOBYTE(v56) = 15;
  std::string::~string(v53);
  LOBYTE(v56) = 16;
  std::string::~string(v48);
  LOBYTE(v56) = 17;
  std::string::~string(v55);
  LOBYTE(v56) = 18;
  std::string::~string(v50);
  LOBYTE(v56) = 19;
  std::string::~string(v54);
  LOBYTE(v56) = 20;
  std::string::~string(v52);
  LOBYTE(v56) = 21;
  std::string::~string(v49);
  if ( v19 == -1 )
  {
    v34 = std::operator+<char>(v42, "..\\Shaders\\Compiled\\", v41);
    LOBYTE(v56) = 27;
    std::string::operator=(v41, v34);
    LOBYTE(v56) = 21;
    std::string::~string(v42);
    v35 = std::operator+<char>(v42, v41, a1);
    LOBYTE(v56) = 28;
    std::string::operator=(a1, v35);
    v33 = v42;
  }
  else
  {
    v27 = v19 + 1;
    v28 = std::string::substr(a1, v42, 0, v27);
    LOBYTE(v56) = 22;
    v29 = std::operator+<char>(v46, v28, "Compiled\\");
    LOBYTE(v56) = 23;
    v30 = std::operator+<char>(v51, v29, v41);
    LOBYTE(v56) = 24;
    std::string::operator=(v41, v30);
    LOBYTE(v56) = 23;
    std::string::~string(v51);
    LOBYTE(v56) = 22;
    std::string::~string(v46);
    LOBYTE(v56) = 21;
    std::string::~string(v42);
    v31 = std::string::substr(a1, v46, v27, std::string::npos);
    LOBYTE(v56) = 25;
    v32 = std::operator+<char>(v42, v41, v31);
    LOBYTE(v56) = 26;
    std::string::operator=(a1, v32);
    LOBYTE(v56) = 25;
    std::string::~string(v42);
    v33 = v46;
  }
  LOBYTE(v56) = 21;
  std::string::~string(v33);
  v36 = (const CHAR *)std::string::c_str(v41);
  if ( !PathIsDirectoryA(v36) )
  {
    v37 = (const CHAR *)std::string::c_str(v41);
    CreateDirectoryA(v37, 0);
  }
  last_of = std::string::find_last_of(a1, ".", std::string::npos);
  v39 = std::string::substr(a1, v42, 0, last_of);
  LOBYTE(v56) = 29;
  std::string::operator=(a1, v39);
  LOBYTE(v56) = 21;
  std::string::~string(v42);
  std::string::operator+=(a1, ".fxc");
  LOBYTE(v56) = 6;
  std::string::~string(v41);
  LOBYTE(v56) = 5;
  std::string::~string(v47);
  LOBYTE(v56) = 4;
  std::string::~string(v45);
  LOBYTE(v56) = 3;
  std::string::~string(v43);
  LOBYTE(v56) = 2;
  std::string::~string(v44);
  LOBYTE(v56) = 1;
  std::string::~string(&a2);
  LOBYTE(v56) = 0;
  std::string::~string(&a9);
  return a1;
}
