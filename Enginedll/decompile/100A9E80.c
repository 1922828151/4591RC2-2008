/*
 * func-name: ?CreateTexture@CREDialogResourceManager@@IAEJI@Z
 * func-address: 0x100a9e80
 * callers: 0x100af790, 0x100af9f0
 * callees: 0x10097220, 0x10178140, 0x1017a230, 0x1017a280
 */

int __thiscall CREDialogResourceManager::CreateTexture(CREDialogResourceManager *this, unsigned int a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // edi
  char v9[4]; // [esp+34h] [ebp-B8h] BYREF
  _BYTE v10[28]; // [esp+38h] [ebp-B4h] BYREF
  _DWORD v11[7]; // [esp+54h] [ebp-98h] BYREF
  _BYTE v12[4]; // [esp+70h] [ebp-7Ch] BYREF
  _DWORD v13[6]; // [esp+74h] [ebp-78h] BYREF
  _DWORD v14[7]; // [esp+8Ch] [ebp-60h] BYREF
  _DWORD v15[7]; // [esp+A8h] [ebp-44h] BYREF
  _BYTE v16[28]; // [esp+C4h] [ebp-28h] BYREF
  int v17; // [esp+E8h] [ebp-4h]

  v3 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * a2);
  if ( !v3 || !*(_WORD *)v3 )
    return 0;
  std::wstring::wstring(v15, v3);
  v17 = 0;
  sub_1017A230(v10, v15);
  LOBYTE(v17) = 2;
  std::wstring::~wstring(v15);
  std::string::string(v11, v10);
  LOBYTE(v17) = 3;
  if ( !FindMedia((int)v10, (int)"Textures", 0, 0) )
  {
    v9[0] = 46;
    v4 = std::string::rfind(v11, v9, std::string::npos, 1);
    if ( v4 != std::string::npos )
    {
      std::string::erase(v11, v4, v11[5] - v4);
      v5 = std::operator+<char>(v16, v11, ".dds");
      LOBYTE(v17) = 4;
      std::string::operator=(v10, v5);
      LOBYTE(v17) = 3;
      std::string::~string(v16);
      FindMedia((int)v10, (int)"Textures", 0, 0);
    }
  }
  sub_1017A280(v12, v10);
  v6 = (_DWORD *)v13[0];
  if ( v13[5] < 8u )
    v6 = v13;
  v7 = D3DXCreateTextureFromFileExW(*((_DWORD *)this + 8), v6, -1, -1, -1, 0, 0, 1, -1, -1, 0, v14, 0, v3 + 520);
  LOBYTE(v17) = 3;
  if ( v7 >= 0 )
  {
    *(_DWORD *)(v3 + 532) = 1;
    *(_DWORD *)(v3 + 524) = v14[0];
    *(_DWORD *)(v3 + 528) = v14[1];
    std::wstring::~wstring(v12);
    LOBYTE(v17) = 2;
    std::string::~string(v11);
    v17 = -1;
    std::string::~string(v10);
    return 0;
  }
  else
  {
    std::wstring::~wstring(v12);
    LOBYTE(v17) = 2;
    std::string::~string(v11);
    v17 = -1;
    std::string::~string(v10);
    return v7;
  }
}
