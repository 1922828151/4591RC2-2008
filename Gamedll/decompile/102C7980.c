/*
 * func-name: sub_102C7980
 * func-address: 0x102c7980
 * callers: 0x101125e0, 0x10114160, 0x102b7ad0, 0x102be800, 0x102bf0f0
 * callees: 0x102c7580, 0x102c9d62
 */

char __cdecl sub_102C7980()
{
  HMODULE ModuleHandleA; // eax
  int last_of; // eax
  int v2; // eax
  const CHAR *v3; // eax
  void *v4; // eax
  char v5; // bl
  void *v6; // eax
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
  last_of = std::string::find_last_of(v12, "\\", std::string::npos);
  v2 = std::string::substr(v12, v10, 0, last_of + 1);
  LOBYTE(v14) = 1;
  std::string::operator=(v12, v2);
  LOBYTE(v14) = 0;
  std::string::~string(v10);
  v3 = (const CHAR *)std::string::c_str(v12);
  SetCurrentDirectoryA(v3);
  v4 = sub_102C7580(v11, v12);
  v5 = 1;
  LOBYTE(v14) = 2;
  if ( std::string::find(v4, "system", 0) == -1
    || (v6 = sub_102C7580(v10, v12),
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
