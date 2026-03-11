/*
 * func-name: sub_102C8190
 * func-address: 0x102c8190
 * callers: 0x101125e0, 0x10114160, 0x1022ef60, 0x102c8190
 * callees: 0x1000ab4b, 0x102c7520, 0x102c8190, 0x102c9d62
 */

void __cdecl sub_102C8190(const char *a1, void *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  const CHAR *v7; // eax
  HANDLE FirstFileA; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int last_of; // eax
  int v13; // eax
  void *v14; // eax
  _BYTE *v15; // ecx
  int v16; // [esp-4h] [ebp-288h]
  HANDLE v17; // [esp+18h] [ebp-26Ch]
  _BYTE v18[28]; // [esp+1Ch] [ebp-268h] BYREF
  _BYTE v19[28]; // [esp+38h] [ebp-24Ch] BYREF
  _BYTE v20[28]; // [esp+54h] [ebp-230h] BYREF
  _BYTE v21[28]; // [esp+70h] [ebp-214h] BYREF
  _BYTE v22[28]; // [esp+8Ch] [ebp-1F8h] BYREF
  _BYTE v23[28]; // [esp+A8h] [ebp-1DCh] BYREF
  _BYTE v24[28]; // [esp+C4h] [ebp-1C0h] BYREF
  _BYTE v25[28]; // [esp+E0h] [ebp-1A4h] BYREF
  _BYTE v26[28]; // [esp+FCh] [ebp-188h] BYREF
  _BYTE v27[28]; // [esp+118h] [ebp-16Ch] BYREF
  _WIN32_FIND_DATAA FindFileData; // [esp+134h] [ebp-150h] BYREF
  int v29; // [esp+280h] [ebp-4h]
  int v30; // [esp+290h] [ebp+Ch]

  v30 = a3 - 1;
  std::string::string(v22, a1);
  v29 = 0;
  if ( std::string::find(v22, "\\", 0) != strlen(a1) - 1 || std::string::find(v22, "/", 0) != strlen(a1) - 1 )
    std::string::operator+=(v22, "\\");
  std::string::string(v25, a4);
  LOBYTE(v29) = 1;
  if ( *(_BYTE *)std::string::operator[](v25, 0) == 42 )
  {
    v5 = std::string::substr(v25, v19, 1, std::string::npos);
    LOBYTE(v29) = 2;
    std::string::operator=(v25, v5);
    LOBYTE(v29) = 1;
    std::string::~string(v19);
  }
  v6 = std::string::string(v21, "*.*");
  LOBYTE(v29) = 3;
  std::operator+<char>(v27, v22, v6);
  LOBYTE(v29) = 5;
  std::string::~string(v21);
  FindFileData.dwFileAttributes = 0;
  v7 = (const CHAR *)std::string::c_str(v27);
  FirstFileA = FindFirstFileA(v7, &FindFileData);
  v17 = FirstFileA;
  do
  {
    if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
    {
      if ( FindFileData.cFileName[0] != 46 )
      {
        if ( v30 >= 0 )
        {
          v9 = std::string::string(v18, FindFileData.cFileName);
          LOBYTE(v29) = 6;
          v10 = std::operator+<char>(v20, v22, v9);
          LOBYTE(v29) = 7;
          std::operator+<char>(v26, v10, "\\");
          LOBYTE(v29) = 9;
          std::string::~string(v20);
          LOBYTE(v29) = 10;
          std::string::~string(v18);
          v11 = std::string::c_str(v26);
          sub_102C8190(v11, a2, v30, a4, a5);
          LOBYTE(v29) = 5;
          std::string::~string(v26);
        }
        FirstFileA = v17;
      }
    }
    else if ( FindFileData.dwFileAttributes )
    {
      std::string::string(v23, FindFileData.cFileName);
      LOBYTE(v29) = 11;
      v16 = std::string::length(v23);
      last_of = std::string::find_last_of(v23, 46, std::string::npos);
      v13 = std::string::substr(v23, v18, last_of, v16);
      LOBYTE(v29) = 12;
      std::string::operator=(v23, v13);
      LOBYTE(v29) = 11;
      std::string::~string(v18);
      sub_102C7520((int)v23);
      std::string::string(v24, a4);
      LOBYTE(v29) = 13;
      sub_102C7520((int)v24);
      if ( (unsigned __int8)std::operator==<char>(v23, v24) || (unsigned __int8)std::operator==<char>(v24, ".*") )
      {
        if ( (_BYTE)a5 )
        {
          v14 = (void *)std::operator+<char>(v18, v22, FindFileData.cFileName);
          LOBYTE(v29) = 14;
          sub_1000AB4B(a2, v14);
          v15 = v18;
        }
        else
        {
          std::string::string(v19, FindFileData.cFileName);
          LOBYTE(v29) = 15;
          sub_1000AB4B(a2, v19);
          v15 = v19;
        }
        LOBYTE(v29) = 13;
        std::string::~string(v15);
      }
      LOBYTE(v29) = 11;
      std::string::~string(v24);
      LOBYTE(v29) = 5;
      std::string::~string(v23);
    }
  }
  while ( FirstFileA && FindNextFileA(FirstFileA, &FindFileData) );
  FindClose(FirstFileA);
  LOBYTE(v29) = 1;
  std::string::~string(v27);
  LOBYTE(v29) = 0;
  std::string::~string(v25);
  v29 = -1;
  std::string::~string(v22);
}
