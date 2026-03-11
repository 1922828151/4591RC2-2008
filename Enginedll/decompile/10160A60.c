/*
 * func-name: ?SaveMapAfter@TerrainNode@@UAEXXZ
 * func-address: 0x10160a60
 * callers: none
 * callees: 0x1004d710
 */

void __thiscall TerrainNode::SaveMapAfter(TerrainNode *this)
{
  TerrainNode *v1; // edi
  int v2; // eax
  bool v3; // cf
  int v4; // eax
  int last_of; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const CHAR *v10; // eax
  HANDLE FileA; // ebx
  int v12; // edx
  _DWORD *v13; // eax
  char *v14; // edi
  _DWORD *i; // esi
  _DWORD *v16; // ebp
  char *v17; // edi
  _DWORD *j; // esi
  _DWORD *v19; // ebp
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-ACh] BYREF
  HANDLE v21; // [esp+10h] [ebp-A8h]
  TerrainNode *v22; // [esp+14h] [ebp-A4h]
  int v23; // [esp+18h] [ebp-A0h] BYREF
  int Buffer; // [esp+1Ch] [ebp-9Ch] BYREF
  _BYTE v25[28]; // [esp+20h] [ebp-98h] BYREF
  _BYTE v26[4]; // [esp+3Ch] [ebp-7Ch] BYREF
  LPCSTR lpFileName[6]; // [esp+40h] [ebp-78h] BYREF
  _BYTE v28[28]; // [esp+58h] [ebp-60h] BYREF
  _BYTE v29[28]; // [esp+74h] [ebp-44h] BYREF
  _BYTE v30[28]; // [esp+90h] [ebp-28h] BYREF
  int v31; // [esp+B4h] [ebp-4h]

  v1 = this;
  v2 = *((_DWORD *)this + 178) + 3188;
  v3 = *(_DWORD *)(*((_DWORD *)this + 178) + 3212) < 0x10u;
  v22 = this;
  if ( v3 )
    v4 = v2 + 4;
  else
    v4 = *(_DWORD *)(v2 + 4);
  std::string::string(v29, v4);
  v31 = 0;
  last_of = std::string::find_last_of(v29, ".", std::string::npos, 1);
  std::string::substr(v29, v25, 0, last_of);
  LOBYTE(v31) = 1;
  if ( std::string::find_last_of(v25, "\\", std::string::npos, 1) != -1 )
  {
    v6 = std::string::find_last_of(v25, "\\", std::string::npos, 1);
    v7 = std::string::substr(v25, v28, 0, v6);
    LOBYTE(v31) = 2;
    std::string::operator=(v25, v7);
    LOBYTE(v31) = 1;
    std::string::~string(v28);
  }
  v8 = std::operator+<char>(v30, v25, "\\");
  LOBYTE(v31) = 3;
  v9 = std::operator+<char>(v28, v8, (char *)v1 + 444);
  LOBYTE(v31) = 4;
  std::operator+<char>(v26, v9, ".hole");
  LOBYTE(v31) = 6;
  std::string::~string(v28);
  LOBYTE(v31) = 7;
  std::string::~string(v30);
  v10 = lpFileName[0];
  if ( lpFileName[5] < (LPCSTR)0x10 )
    v10 = (const CHAR *)lpFileName;
  FileA = CreateFileA(v10, 0x40000000u, 0, 0, 4u, 0, 0);
  v21 = FileA;
  if ( FileA != (HANDLE)-1 )
  {
    v12 = *((_DWORD *)v1 + 313);
    Buffer = *((_DWORD *)v1 + 310);
    v23 = v12;
    if ( !WriteFile(FileA, &Buffer, 4u, &NumberOfBytesWritten, 0) || NumberOfBytesWritten != 4 )
      CloseHandle(FileA);
    v13 = (_DWORD *)**((_DWORD **)v1 + 309);
    v14 = (char *)v1 + 1232;
    for ( i = v13; ; i = (_DWORD *)*i )
    {
      v16 = (_DWORD *)*((_DWORD *)v14 + 1);
      if ( !v14 )
      {
        invalid_parameter_noinfo();
        FileA = v21;
      }
      if ( i == v16 )
        break;
      if ( !v14 )
        invalid_parameter_noinfo();
      if ( i == *((_DWORD **)v14 + 1) )
        invalid_parameter_noinfo();
      if ( !WriteFile(FileA, i + 2, 6u, &NumberOfBytesWritten, 0) || NumberOfBytesWritten != 6 )
        CloseHandle(FileA);
      if ( i == *((_DWORD **)v14 + 1) )
        invalid_parameter_noinfo();
    }
    if ( !WriteFile(FileA, &v23, 4u, &NumberOfBytesWritten, 0) || NumberOfBytesWritten != 4 )
      CloseHandle(FileA);
    v17 = (char *)v22 + 1244;
    for ( j = (_DWORD *)**((_DWORD **)v22 + 312); ; j = (_DWORD *)*j )
    {
      v19 = (_DWORD *)*((_DWORD *)v17 + 1);
      if ( !v17 )
      {
        invalid_parameter_noinfo();
        FileA = v21;
      }
      if ( j == v19 )
        break;
      if ( !v17 )
        invalid_parameter_noinfo();
      if ( j == *((_DWORD **)v17 + 1) )
        invalid_parameter_noinfo();
      if ( !WriteFile(FileA, j + 2, 6u, &NumberOfBytesWritten, 0) || NumberOfBytesWritten != 6 )
        CloseHandle(FileA);
      if ( j == *((_DWORD **)v17 + 1) )
        invalid_parameter_noinfo();
    }
    CloseHandle(FileA);
    v1 = v22;
  }
  Actor::SaveMapAfter(v1);
  LOBYTE(v31) = 1;
  std::string::~string(v26);
  LOBYTE(v31) = 0;
  std::string::~string(v25);
  v31 = -1;
  std::string::~string(v29);
}
