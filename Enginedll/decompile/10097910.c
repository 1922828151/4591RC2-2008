/*
 * func-name: sub_10097910
 * func-address: 0x10097910
 * callers: 0x10097910, 0x10097e80, 0x10097ea0
 * callees: 0x10051d20, 0x100971c0, 0x10097910, 0x100999b0, 0x1009a050, 0x1009aed0, 0x1009af40, 0x1009afc0, 0x1009bb80, 0x1009bc30, 0x1017a670
 */

int __cdecl sub_10097910(int a1)
{
  const CHAR *v1; // eax
  HANDLE FirstFileA; // eax
  unsigned int v3; // edi
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // edi
  bool v7; // cc
  unsigned int v8; // edi
  void *v9; // eax
  unsigned int v10; // ebx
  int v11; // ebp
  struct Engine *v12; // edi
  int v13; // eax
  char *v14; // edi
  int v15; // edi
  int v16; // eax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  int v22; // eax
  bool v23; // bl
  int v24; // eax
  void (__cdecl *v25)(); // ebp
  int v26; // ebx
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ebx
  unsigned int v30; // edi
  HANDLE hFindFile; // [esp+10h] [ebp-2D4h]
  char *hFindFilea; // [esp+10h] [ebp-2D4h]
  _DWORD v34[2]; // [esp+14h] [ebp-2D0h] BYREF
  _BYTE v35[28]; // [esp+1Ch] [ebp-2C8h] BYREF
  _BYTE v36[28]; // [esp+38h] [ebp-2ACh] BYREF
  _BYTE v37[28]; // [esp+54h] [ebp-290h] BYREF
  _BYTE v38[8]; // [esp+70h] [ebp-274h] BYREF
  _BYTE v39[12]; // [esp+78h] [ebp-26Ch] BYREF
  unsigned int v40; // [esp+84h] [ebp-260h]
  _BYTE v41[28]; // [esp+88h] [ebp-25Ch] BYREF
  _BYTE v42[16]; // [esp+A4h] [ebp-240h] BYREF
  _BYTE v43[28]; // [esp+B4h] [ebp-230h] BYREF
  _BYTE v44[32]; // [esp+D0h] [ebp-214h] BYREF
  _BYTE v45[28]; // [esp+F0h] [ebp-1F4h] BYREF
  _BYTE v46[28]; // [esp+10Ch] [ebp-1D8h] BYREF
  _BYTE v47[28]; // [esp+128h] [ebp-1BCh] BYREF
  _BYTE v48[28]; // [esp+144h] [ebp-1A0h] BYREF
  _BYTE v49[28]; // [esp+160h] [ebp-184h] BYREF
  _BYTE v50[28]; // [esp+17Ch] [ebp-168h] BYREF
  _WIN32_FIND_DATAA FindFileData; // [esp+198h] [ebp-14Ch] BYREF
  int v52; // [esp+2E0h] [ebp-4h]

  std::string::string(v36, a1 + 44);
  v52 = 0;
  if ( std::string::length(v36) )
    std::string::operator+=(v36, "\\");
  std::operator+<char>(v41, v36, "*.*");
  LOBYTE(v52) = 1;
  v1 = (const CHAR *)std::string::c_str(v41);
  FirstFileA = FindFirstFileA(v1, &FindFileData);
  v3 = *(_DWORD *)(a1 + 8);
  hFindFile = FirstFileA;
  if ( *(_DWORD *)(a1 + 4) > v3 )
    invalid_parameter_noinfo();
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  sub_1009AF40(v34, a1, v4, a1, v3);
  while ( 1 )
  {
    if ( (FindFileData.dwFileAttributes & 0x10) != 0 && FindFileData.cFileName[0] != 46 )
    {
      v5 = std::string::string(v37, FindFileData.cFileName);
      LOBYTE(v52) = 2;
      std::operator+<char>(v35, v36, v5);
      LOBYTE(v52) = 4;
      std::string::~string(v37);
      sub_1009A050(v42);
      LOBYTE(v52) = 5;
      std::string::operator=(v43, FindFileData.cFileName);
      std::string::operator=(v44, v35);
      sub_1009BC30(v42);
      v6 = *(_DWORD *)(a1 + 8);
      if ( *(_DWORD *)(a1 + 4) > v6 )
        invalid_parameter_noinfo();
      v7 = v6 - 104 <= *(_DWORD *)(a1 + 8);
      v34[1] = v6;
      if ( !v7 || v6 - 104 < *(_DWORD *)(a1 + 4) )
        invalid_parameter_noinfo();
      v8 = v6 - 104;
      if ( v8 >= *(_DWORD *)(a1 + 8) )
        invalid_parameter_noinfo();
      sub_10097910(v8);
      LOBYTE(v52) = 4;
      sub_100999B0(v42);
      LOBYTE(v52) = 1;
      std::string::~string(v35);
    }
    v9 = hFindFile;
    if ( !hFindFile )
      break;
    if ( !FindNextFileA(hFindFile, &FindFileData) )
    {
      v9 = hFindFile;
      break;
    }
  }
  FindClose(v9);
  if ( *(_BYTE *)(a1 + 72) )
  {
    if ( std::string::length(&unk_1028584C) )
    {
      v10 = 0;
      v34[0] = 0;
      if ( dword_10285828 > 0 )
      {
        hFindFilea = 0;
        do
        {
          v11 = std::string::string(v48, "\\");
          LOBYTE(v52) = 6;
          v12 = Engine::Instance();
          v13 = *((_DWORD *)v12 + 32);
          v14 = (char *)v12 + 124;
          if ( !v13 || v10 >= (*((_DWORD *)v14 + 2) - v13) / 28 )
            invalid_parameter_noinfo();
          v15 = sub_1017A670(v49, &hFindFilea[*((_DWORD *)v14 + 1)]);
          LOBYTE(v52) = 7;
          v16 = std::string::string(v50, "\\");
          LOBYTE(v52) = 8;
          v17 = std::operator+<char>(v37, v16, v15);
          LOBYTE(v52) = 9;
          std::operator+<char>(v35, v17, v11);
          LOBYTE(v52) = 11;
          std::string::~string(v37);
          LOBYTE(v52) = 12;
          std::string::~string(v50);
          LOBYTE(v52) = 13;
          std::string::~string(v49);
          LOBYTE(v52) = 14;
          std::string::~string(v48);
          v18 = 0;
          if ( sub_10051D20((_DWORD *)a1) )
          {
            v19 = 0;
            while ( 1 )
            {
              v20 = *(_DWORD *)(a1 + 4);
              if ( !v20 || v18 >= (*(_DWORD *)(a1 + 8) - v20) / 104 )
                invalid_parameter_noinfo();
              v21 = std::operator+<char>(v47, v19 + *(_DWORD *)(a1 + 4) + 44, "\\");
              LOBYTE(v52) = 15;
              v22 = sub_1017A670(v46, v21);
              LOBYTE(v52) = 16;
              v23 = std::string::find(v22, v35, 0) != -1;
              LOBYTE(v52) = 15;
              std::string::~string(v46);
              LOBYTE(v52) = 14;
              std::string::~string(v47);
              if ( v23 )
                break;
              ++v18;
              v19 += 104;
              if ( v18 >= sub_10051D20((_DWORD *)a1) )
                goto LABEL_51;
            }
            v24 = *(_DWORD *)(a1 + 4);
            if ( v24 && v18 < (*(_DWORD *)(a1 + 8) - v24) / 104 )
            {
              v25 = invalid_parameter_noinfo;
            }
            else
            {
              v25 = invalid_parameter_noinfo;
              invalid_parameter_noinfo();
            }
            v26 = 104 * v18;
            sub_1009AFC0(104 * v18 + *(_DWORD *)(a1 + 4));
            v27 = *(_DWORD *)(a1 + 4);
            LOBYTE(v52) = 17;
            if ( !v27 || v18 >= (*(_DWORD *)(a1 + 8) - v27) / 104 )
              v25();
            std::string::operator=(v45, v26 + *(_DWORD *)(a1 + 4) + 44);
            v28 = *(_DWORD *)(a1 + 4);
            if ( v28 > *(_DWORD *)(a1 + 8) )
              v25();
            v29 = v28 + v26;
            v7 = v29 <= *(_DWORD *)(a1 + 8);
            v40 = v28;
            if ( !v7 || v29 < *(_DWORD *)(a1 + 4) )
              v25();
            sub_1009AED0(v38, a1, v29);
            v30 = *(_DWORD *)(a1 + 4);
            if ( v30 > *(_DWORD *)(a1 + 8) )
              v25();
            sub_1009BB80(v39, a1, v30, v42);
            LOBYTE(v52) = 14;
            sub_100999B0(v42);
          }
LABEL_51:
          LOBYTE(v52) = 1;
          std::string::~string(v35);
          hFindFilea += 28;
          v10 = ++v34[0];
        }
        while ( v34[0] < dword_10285828 );
      }
    }
  }
  LOBYTE(v52) = 0;
  std::string::~string(v41);
  v52 = -1;
  return std::string::~string(v36);
}
