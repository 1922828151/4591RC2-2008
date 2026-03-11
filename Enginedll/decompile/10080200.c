/*
 * func-name: ?CopyPrtFiles@Editor@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AAV?$vector@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
 * func-address: 0x10080200
 * callers: 0x10084160, 0x10087570, 0x10087a10, 0x10088400
 * callees: 0x10009f20, 0x10076ef0
 */

int __stdcall Editor::CopyPrtFiles(
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
        _DWORD *a15)
{
  int v15; // eax
  _DWORD *v16; // esi
  unsigned int i; // ebx
  int last_of; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  const CHAR *v23; // eax
  BOOL v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // ebp
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  const CHAR *v31; // eax
  const CHAR *v33; // [esp-10h] [ebp-B4h]
  int v34; // [esp+8h] [ebp-9Ch]
  _BYTE v35[28]; // [esp+Ch] [ebp-98h] BYREF
  _BYTE v36[28]; // [esp+28h] [ebp-7Ch] BYREF
  _BYTE v37[28]; // [esp+44h] [ebp-60h] BYREF
  _BYTE v38[28]; // [esp+60h] [ebp-44h] BYREF
  _BYTE v39[28]; // [esp+7Ch] [ebp-28h] BYREF
  int v40; // [esp+A0h] [ebp-4h]

  v40 = 1;
  v15 = rand();
  v16 = a15;
  v34 = v15;
  for ( i = 0; i < std::vector<Model *>::size(v16); ++i )
  {
    std::string::string(v36);
    LOBYTE(v40) = 2;
    if ( std::string::find_last_of(&a1, "\\", std::string::npos) != -1 )
    {
      last_of = std::string::find_last_of(&a1, "\\", std::string::npos);
      v19 = std::string::substr(&a1, v35, 0, last_of + 1);
      LOBYTE(v40) = 3;
      std::string::operator=(v36, v19);
      LOBYTE(v40) = 2;
      std::string::~string(v35);
    }
    v20 = v16[1];
    if ( !v20 || i >= (v16[2] - v20) >> 2 )
      invalid_parameter_noinfo();
    v21 = 4 * i;
    v22 = std::operator+<char>(v35, *(_DWORD *)(v16[1] + 4 * i), ".prt");
    LOBYTE(v40) = 4;
    std::string::operator+=(v36, v22);
    LOBYTE(v40) = 2;
    std::string::~string(v35);
    std::string::string(v35, v36);
    LOBYTE(v40) = 5;
    v23 = (const CHAR *)std::string::c_str(v35);
    v24 = PathFileExistsA(v23);
    LOBYTE(v40) = 2;
    std::string::~string(v35);
    if ( v24 )
    {
      std::string::string(v37, &unk_101C32F9);
      LOBYTE(v40) = 6;
      if ( (unsigned __int8)std::operator==<char>(&a8, "MAP NOT LOADED") )
      {
        std::string::operator=(v37, "MAP NOT LOADED\\");
      }
      else if ( std::string::find_last_of(&a8, "\\", std::string::npos) != -1 )
      {
        v25 = std::string::find_last_of(&a8, "\\", std::string::npos);
        v26 = std::string::substr(&a8, v35, 0, v25 + 1);
        LOBYTE(v40) = 7;
        std::string::operator=(v37, v26);
        LOBYTE(v40) = 6;
        std::string::~string(v35);
      }
      v27 = sub_10009F20((int)v35, ++v34);
      v28 = v16[1];
      LOBYTE(v40) = 8;
      if ( !v28 || i >= (v16[2] - v28) >> 2 )
        invalid_parameter_noinfo();
      std::operator+<char>(v38, *(_DWORD *)(v21 + v16[1]), v27);
      LOBYTE(v40) = 10;
      std::string::~string(v35);
      v29 = std::operator+<char>(v39, v38, ".prt");
      LOBYTE(v40) = 11;
      std::string::operator+=(v37, v29);
      LOBYTE(v40) = 10;
      std::string::~string(v39);
      v30 = v16[1];
      if ( !v30 || i >= (v16[2] - v30) >> 2 )
        invalid_parameter_noinfo();
      std::string::operator=(*(_DWORD *)(v21 + v16[1]), v38);
      v33 = (const CHAR *)std::string::c_str(v37);
      v31 = (const CHAR *)std::string::c_str(v36);
      CopyFileA(v31, v33, 1);
      LOBYTE(v40) = 6;
      std::string::~string(v38);
      LOBYTE(v40) = 2;
      std::string::~string(v37);
    }
    LOBYTE(v40) = 1;
    std::string::~string(v36);
  }
  LOBYTE(v40) = 0;
  std::string::~string(&a1);
  v40 = -1;
  return std::string::~string(&a8);
}
