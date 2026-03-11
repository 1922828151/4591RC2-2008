/*
 * func-name: ?LoadPatterns@Terrain@@QAE_NXZ
 * func-address: 0x10161f10
 * callers: 0x10162f00
 * callees: 0x10097220, 0x1015dd10, 0x1016b790, 0x101a2534
 */

char __thiscall Terrain::LoadPatterns(Terrain *this)
{
  HMODULE ModuleHandleA; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const CHAR *v7; // eax
  HANDLE FirstFileA; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  char v12; // [esp-1Ch] [ebp-9BCh] BYREF
  LPCSTR v13; // [esp-18h] [ebp-9B8h]
  int v14; // [esp-14h] [ebp-9B4h]
  int v15; // [esp-10h] [ebp-9B0h]
  int v16; // [esp-Ch] [ebp-9ACh]
  int v17; // [esp-8h] [ebp-9A8h]
  unsigned int v18; // [esp-4h] [ebp-9A4h]
  char v19[4]; // [esp+10h] [ebp-990h] BYREF
  int v20; // [esp+14h] [ebp-98Ch] BYREF
  _BYTE v21[4]; // [esp+18h] [ebp-988h] BYREF
  LPCSTR lpFileName[6]; // [esp+1Ch] [ebp-984h] BYREF
  int v23[8]; // [esp+34h] [ebp-96Ch] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+54h] [ebp-94Ch] BYREF
  CHAR Filename[2048]; // [esp+194h] [ebp-80Ch] BYREF
  int v26; // [esp+99Ch] [ebp-4h]

  ModuleHandleA = GetModuleHandleA(0);
  GetModuleFileNameA(ModuleHandleA, Filename, 0x200u);
  std::string::string(v21, Filename);
  v26 = 0;
  v19[0] = 92;
  v3 = std::string::rfind(v21, v19, std::string::npos, 1);
  v4 = std::string::substr(v21, v23, 0, v3);
  LOBYTE(v26) = 1;
  std::string::operator=(v21, v4);
  LOBYTE(v26) = 0;
  std::string::~string(v23);
  v19[0] = 92;
  v5 = std::string::rfind(v21, v19, std::string::npos, 1);
  v6 = std::string::substr(v21, v23, 0, v5);
  LOBYTE(v26) = 2;
  std::string::operator=(v21, v6);
  LOBYTE(v26) = 0;
  std::string::~string(v23);
  std::string::operator+=(v21, "\\Textures\\Core\\Patterns\\*.*");
  v7 = lpFileName[0];
  if ( lpFileName[5] < (LPCSTR)0x10 )
    v7 = (const CHAR *)lpFileName;
  FirstFileA = FindFirstFileA(v7, &FindFileData);
  do
  {
    if ( FindFileData.cFileName[0] != 46 )
    {
      std::string::string(v23, FindFileData.cFileName);
      LOBYTE(v26) = 3;
      if ( FindMedia((int)v23, (int)"Textures", 0, 0) )
      {
        v9 = operator new(0x2Cu);
        v10 = v9;
        v20 = (int)v9;
        LOBYTE(v26) = 4;
        if ( v9 )
        {
          *v9 = &Pattern::`vftable';
          std::string::string(v9 + 1);
          v10[10] = 0;
          v10[8] = 0;
          v10[9] = 0;
        }
        else
        {
          v10 = 0;
        }
        v23[7] = (int)&v12;
        LOBYTE(v26) = 3;
        v20 = (int)v10;
        std::string::string(&v12, v23);
        if ( sub_1015DD10(v10, v12, v13, v14, v15, v16, v17, v18) )
        {
          sub_1016B790((int)this + 1176, (int)&v20);
        }
        else if ( v10 )
        {
          (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1);
        }
      }
      LOBYTE(v26) = 0;
      std::string::~string(v23);
    }
  }
  while ( FirstFileA && FindNextFileA(FirstFileA, &FindFileData) );
  v26 = -1;
  std::string::~string(v21);
  return 1;
}
