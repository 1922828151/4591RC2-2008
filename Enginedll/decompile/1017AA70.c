/*
 * func-name: sub_1017AA70
 * func-address: 0x1017aa70
 * callers: 0x1004b530, 0x10068c50, 0x1007d280, 0x10083770, 0x10096af0, 0x10097220, 0x10097e80, 0x10097ea0, 0x1011acf0, 0x1011b080, 0x1011b1a0, 0x1011b2a0, 0x1011b490, 0x1011b780, 0x1011fde0, 0x10124400, 0x1017cd90, 0x1017d680
 * callees: 0x1017a670, 0x101a2c8e
 */

char __cdecl sub_1017AA70()
{
  HMODULE ModuleHandleA; // eax
  int last_of; // eax
  int v2; // eax
  const CHAR *v3; // eax
  int v4; // eax
  char v5; // bl
  int v6; // eax
  unsigned int v7; // ebp
  char v9; // [esp+13h] [ebp-869h]
  _BYTE v10[28]; // [esp+18h] [ebp-864h] BYREF
  _BYTE v11[28]; // [esp+34h] [ebp-848h] BYREF
  CHAR v12[28]; // [esp+50h] [ebp-82Ch] BYREF
  CHAR Filename[2048]; // [esp+6Ch] [ebp-810h] BYREF
  int v14; // [esp+878h] [ebp-4h]

  ModuleHandleA = GetModuleHandleA(0);
  GetModuleFileNameA(ModuleHandleA, Filename, 0x200u);
  std::string::string(v12, Filename);
  v14 = 0;
  last_of = std::string::find_last_of(v12, &unk_101CE80C, std::string::npos);
  v2 = std::string::substr(v12, v10, 0, last_of + 1);
  LOBYTE(v14) = 1;
  std::string::operator=(v12, v2);
  LOBYTE(v14) = 0;
  std::string::~string(v10);
  v3 = (const CHAR *)std::string::c_str(v12);
  SetCurrentDirectoryA(v3);
  v4 = sub_1017A670((int)v11, (int)v12);
  v5 = 1;
  LOBYTE(v14) = 2;
  if ( std::string::find(v4, "system", 0) == -1
    || (v6 = sub_1017A670((int)v10, (int)v12),
        v5 = 3,
        v14 = 3,
        v7 = std::string::find(v6, "system", 0),
        v9 = 0,
        v7 <= std::string::length(v12) - 9) )
  {
    v9 = 1;
  }
  v14 = 2;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    std::string::~string(v10);
  }
  v14 = 0;
  if ( (v5 & 1) != 0 )
    std::string::~string(v11);
  if ( v9 )
    SetCurrentDirectoryA(".\\System\\");
  v14 = -1;
  std::string::~string(v12);
  return 1;
}
