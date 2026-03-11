/*
 * func-name: sub_102C7F50
 * func-address: 0x102c7f50
 * callers: 0x102c7f50
 * callees: 0x1000ab4b, 0x102c7f50, 0x102c9d62
 */

void __cdecl sub_102C7F50(int a1, void *a2, int a3)
{
  int v3; // eax
  int v4; // eax
  const CHAR *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  HANDLE hFindFile; // [esp+14h] [ebp-1E0h]
  _BYTE v10[28]; // [esp+18h] [ebp-1DCh] BYREF
  _BYTE v11[28]; // [esp+34h] [ebp-1C0h] BYREF
  _BYTE v12[28]; // [esp+50h] [ebp-1A4h] BYREF
  _BYTE v13[28]; // [esp+6Ch] [ebp-188h] BYREF
  _BYTE v14[28]; // [esp+88h] [ebp-16Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+A4h] [ebp-150h] BYREF
  int v16; // [esp+1F0h] [ebp-4h]

  std::string::string(v12, a1);
  v16 = 0;
  v3 = std::string::length(v12);
  if ( *(_BYTE *)std::string::operator[](v12, v3 - 1) != 92 )
  {
    v4 = std::string::length(v12);
    if ( *(_BYTE *)std::string::operator[](v12, v4 - 1) != 47 )
      std::string::operator+=(v12, "\\");
  }
  std::operator+<char>(v14, v12, "*.*");
  LOBYTE(v16) = 1;
  v5 = (const CHAR *)std::string::c_str(v14);
  hFindFile = FindFirstFileA(v5, &FindFileData);
  do
  {
    if ( (FindFileData.dwFileAttributes & 0x10) != 0 && FindFileData.cFileName[0] != 46 && a3 != 1 )
    {
      v6 = std::string::string(v11, FindFileData.cFileName);
      LOBYTE(v16) = 2;
      v7 = std::operator+<char>(v10, v12, v6);
      LOBYTE(v16) = 3;
      std::operator+<char>(v13, v7, "\\");
      LOBYTE(v16) = 5;
      std::string::~string(v10);
      LOBYTE(v16) = 6;
      std::string::~string(v11);
      sub_1000AB4B(a2, v13);
      v8 = std::string::c_str(v13);
      sub_102C7F50(v8, a2, a3 - 1);
      LOBYTE(v16) = 1;
      std::string::~string(v13);
    }
  }
  while ( hFindFile && FindNextFileA(hFindFile, &FindFileData) );
  FindClose(hFindFile);
  LOBYTE(v16) = 0;
  std::string::~string(v14);
  v16 = -1;
  std::string::~string(v12);
}
