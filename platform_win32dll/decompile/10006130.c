/*
 * func-name: sub_10006130
 * func-address: 0x10006130
 * callers: 0x10006130
 * callees: 0x100054c0, 0x10006130, 0x100066b0, 0x10019750
 */

int __cdecl sub_10006130(const char *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  const CHAR *v7; // eax
  HANDLE FirstFileA; // edi
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  int last_of; // eax
  int v14; // eax
  int v15; // eax
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
  std::string::string(a1);
  v30 = 0;
  if ( std::string::find(v23, "\\", 0) != strlen(a1) - 1 || std::string::find(v23, "/", 0) != strlen(a1) - 1 )
    std::string::operator+=(v23, "\\");
  std::string::string(a4);
  LOBYTE(v30) = 1;
  if ( *(_BYTE *)std::string::operator[](v26, 0) == 42 )
  {
    v5 = std::string::substr(v26, v20, 1, std::string::npos);
    LOBYTE(v30) = 2;
    std::string::operator=(v26, v5);
    LOBYTE(v30) = 1;
    std::string::~string(v20);
  }
  v6 = std::string::string("*.*");
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
          v9 = std::string::string(FindFileData.cFileName);
          LOBYTE(v30) = 6;
          v10 = std::operator+<char>(v21, v23, v9);
          LOBYTE(v30) = 7;
          std::operator+<char>(v27, v10, "\\");
          LOBYTE(v30) = 9;
          std::string::~string(v21);
          LOBYTE(v30) = 10;
          std::string::~string(v19);
          v11 = (const char *)std::string::c_str(v27);
          sub_10006130(v11, (int)a2, v31, a4, a5);
          LOBYTE(v30) = 5;
          std::string::~string(v27);
        }
        FirstFileA = v18;
      }
    }
    else if ( FindFileData.dwFileAttributes )
    {
      std::string::string(FindFileData.cFileName);
      LOBYTE(v30) = 11;
      v17 = std::string::length(v24);
      last_of = std::string::find_last_of(v24, 46, std::string::npos);
      v14 = std::string::substr(v24, v19, last_of, v17);
      LOBYTE(v30) = 12;
      std::string::operator=(v24, v14);
      LOBYTE(v30) = 11;
      std::string::~string(v19);
      sub_100054C0((int)v24);
      std::string::string(a4);
      LOBYTE(v30) = 13;
      sub_100054C0((int)v25);
      if ( (unsigned __int8)std::operator==<char>(v24, v25) || (unsigned __int8)std::operator==<char>(v25, ".*") )
      {
        if ( (_BYTE)a5 )
        {
          v15 = std::operator+<char>(v19, v23, FindFileData.cFileName);
          LOBYTE(v30) = 14;
          sub_100066B0(a2, v15);
          v16 = v19;
        }
        else
        {
          std::string::string(FindFileData.cFileName);
          LOBYTE(v30) = 15;
          sub_100066B0(a2, (int)v20);
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
