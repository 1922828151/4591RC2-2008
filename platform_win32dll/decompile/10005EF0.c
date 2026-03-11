/*
 * func-name: sub_10005EF0
 * func-address: 0x10005ef0
 * callers: 0x10005ef0
 * callees: 0x10005ef0, 0x100066b0, 0x10019750
 */

int __cdecl sub_10005EF0(int a1, _DWORD *a2, int a3)
{
  int v3; // eax
  int v4; // eax
  const CHAR *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  HANDLE hFindFile; // [esp+14h] [ebp-1E0h]
  _BYTE v11[28]; // [esp+18h] [ebp-1DCh] BYREF
  _BYTE v12[28]; // [esp+34h] [ebp-1C0h] BYREF
  _BYTE v13[28]; // [esp+50h] [ebp-1A4h] BYREF
  _BYTE v14[28]; // [esp+6Ch] [ebp-188h] BYREF
  _BYTE v15[28]; // [esp+88h] [ebp-16Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+A4h] [ebp-150h] BYREF
  int v17; // [esp+1F0h] [ebp-4h]

  std::string::string(a1);
  v17 = 0;
  v3 = std::string::length(v13);
  if ( *(_BYTE *)std::string::operator[](v13, v3 - 1) != 92 )
  {
    v4 = std::string::length(v13);
    if ( *(_BYTE *)std::string::operator[](v13, v4 - 1) != 47 )
      std::string::operator+=(v13, "\\");
  }
  std::operator+<char>(v15, v13, "*.*");
  LOBYTE(v17) = 1;
  v5 = (const CHAR *)std::string::c_str(v15);
  hFindFile = FindFirstFileA(v5, &FindFileData);
  do
  {
    if ( (FindFileData.dwFileAttributes & 0x10) != 0 && FindFileData.cFileName[0] != 46 && a3 != 1 )
    {
      v6 = std::string::string(FindFileData.cFileName);
      LOBYTE(v17) = 2;
      v7 = std::operator+<char>(v11, v13, v6);
      LOBYTE(v17) = 3;
      std::operator+<char>(v14, v7, "\\");
      LOBYTE(v17) = 5;
      std::string::~string(v11);
      LOBYTE(v17) = 6;
      std::string::~string(v12);
      sub_100066B0(a2, (int)v14);
      v8 = std::string::c_str(v14);
      sub_10005EF0(v8, (int)a2, a3 - 1);
      LOBYTE(v17) = 1;
      std::string::~string(v14);
    }
  }
  while ( hFindFile && FindNextFileA(hFindFile, &FindFileData) );
  FindClose(hFindFile);
  LOBYTE(v17) = 0;
  std::string::~string(v15);
  v17 = -1;
  return std::string::~string(v13);
}
