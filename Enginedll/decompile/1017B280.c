/*
 * func-name: sub_1017B280
 * func-address: 0x1017b280
 * callers: 0x10010390, 0x10083770, 0x1008b740, 0x10097ea0, 0x10125860, 0x1017b280
 * callees: 0x100116a0, 0x1017a610, 0x1017b280, 0x101a2c8e
 */

int __cdecl sub_1017B280(const char *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  const CHAR *v7; // eax
  HANDLE FirstFileA; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int last_of; // eax
  int v14; // eax
  void *v15; // eax
  _BYTE *v16; // ecx
  int v17; // [esp-4h] [ebp-288h]
  HANDLE v18; // [esp+18h] [ebp-26Ch]
  _BYTE v19[28]; // [esp+1Ch] [ebp-268h] BYREF
  _BYTE v20[28]; // [esp+38h] [ebp-24Ch] BYREF
  _BYTE v21[28]; // [esp+54h] [ebp-230h] BYREF
  _BYTE v22[28]; // [esp+70h] [ebp-214h] BYREF
  _BYTE v23[28]; // [esp+8Ch] [ebp-1F8h] BYREF
  _BYTE v24[28]; // [esp+A8h] [ebp-1DCh] BYREF
  _BYTE v25[28]; // [esp+C4h] [ebp-1C0h] BYREF
  _BYTE v26[28]; // [esp+E0h] [ebp-1A4h] BYREF
  _BYTE v27[28]; // [esp+FCh] [ebp-188h] BYREF
  _BYTE v28[28]; // [esp+118h] [ebp-16Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+134h] [ebp-150h] BYREF
  int v30; // [esp+280h] [ebp-4h]
  int v31; // [esp+290h] [ebp+Ch]

  v31 = a3 - 1;
  std::string::string(v23, a1);
  v30 = 0;
  if ( std::string::find(v23, &unk_101CE7F4, 0) != strlen(a1) - 1
    || std::string::find(v23, &unk_101CE7F8, 0) != strlen(a1) - 1 )
  {
    std::string::operator+=(v23, &unk_101CE7FC);
  }
  std::string::string(v26, a4);
  LOBYTE(v30) = 1;
  if ( *(_BYTE *)std::string::operator[](v26, 0) == 42 )
  {
    v5 = std::string::substr(v26, v20, 1, std::string::npos);
    LOBYTE(v30) = 2;
    std::string::operator=(v26, v5);
    LOBYTE(v30) = 1;
    std::string::~string(v20);
  }
  v6 = std::string::string(v22, &unk_101CE800);
  LOBYTE(v30) = 3;
  std::operator+<char>(v28, v23, v6);
  LOBYTE(v30) = 5;
  std::string::~string(v22);
  FindFileData.dwFileAttributes = 0;
  v7 = (const CHAR *)std::string::c_str(v28);
  FirstFileA = FindFirstFileA(v7, &FindFileData);
  v18 = FirstFileA;
  do
  {
    if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
    {
      if ( FindFileData.cFileName[0] != 46 )
      {
        if ( v31 >= 0 )
        {
          v9 = std::string::string(v19, FindFileData.cFileName);
          LOBYTE(v30) = 6;
          v10 = std::operator+<char>(v21, v23, v9);
          LOBYTE(v30) = 7;
          std::operator+<char>(v27, v10, &unk_101CE804);
          LOBYTE(v30) = 9;
          std::string::~string(v21);
          LOBYTE(v30) = 10;
          std::string::~string(v19);
          v11 = std::string::c_str(v27);
          sub_1017B280(v11, a2, v31, a4, a5);
          LOBYTE(v30) = 5;
          std::string::~string(v27);
        }
        FirstFileA = v18;
      }
    }
    else if ( FindFileData.dwFileAttributes )
    {
      std::string::string(v24, FindFileData.cFileName);
      LOBYTE(v30) = 11;
      v17 = std::string::length(v24);
      last_of = std::string::find_last_of(v24, 46, std::string::npos);
      v14 = std::string::substr(v24, v19, last_of, v17);
      LOBYTE(v30) = 12;
      std::string::operator=(v24, v14);
      LOBYTE(v30) = 11;
      std::string::~string(v19);
      sub_1017A610((int)v24);
      std::string::string(v25, a4);
      LOBYTE(v30) = 13;
      sub_1017A610((int)v25);
      if ( (unsigned __int8)std::operator==<char>(v24, v25)
        || (unsigned __int8)std::operator==<char>(v25, &unk_101CE808) )
      {
        if ( (_BYTE)a5 )
        {
          v15 = (void *)std::operator+<char>(v19, v23, FindFileData.cFileName);
          LOBYTE(v30) = 14;
          sub_100116A0(a2, v15);
          v16 = v19;
        }
        else
        {
          std::string::string(v20, FindFileData.cFileName);
          LOBYTE(v30) = 15;
          sub_100116A0(a2, v20);
          v16 = v20;
        }
        LOBYTE(v30) = 13;
        std::string::~string(v16);
      }
      LOBYTE(v30) = 11;
      std::string::~string(v25);
      LOBYTE(v30) = 5;
      std::string::~string(v24);
    }
  }
  while ( FirstFileA && FindNextFileA(FirstFileA, &FindFileData) );
  FindClose(FirstFileA);
  LOBYTE(v30) = 1;
  std::string::~string(v28);
  LOBYTE(v30) = 0;
  std::string::~string(v26);
  v30 = -1;
  return std::string::~string(v23);
}
