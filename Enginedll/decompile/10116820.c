/*
 * func-name: ?LoadModel@PrefabInstance@@QAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10116820
 * callers: 0x10084f60, 0x100853c0
 * callees: 0x100efd60, 0x101377c0, 0x1017ad40
 */

int __thiscall PrefabInstance::LoadModel(ModelFrame ***this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  const char *v9; // eax
  int last_of; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD v15[10]; // [esp-1Ch] [ebp-C0h] BYREF
  _BYTE v16[28]; // [esp+Ch] [ebp-98h] BYREF
  _BYTE v17[28]; // [esp+28h] [ebp-7Ch] BYREF
  _BYTE v18[28]; // [esp+44h] [ebp-60h] BYREF
  _BYTE v19[28]; // [esp+60h] [ebp-44h] BYREF
  _BYTE v20[28]; // [esp+7Ch] [ebp-28h] BYREF
  int v21; // [esp+A0h] [ebp-4h]

  v21 = 0;
  if ( (unsigned int)std::string::length(&a2) > 4 )
  {
    std::string::operator=(this + 293, &a2);
    v9 = (const char *)std::string::c_str(this + 293);
    StaticModel::Load(this[179], v9, 0);
    last_of = std::string::find_last_of(this + 293, "\\", std::string::npos);
    std::string::substr(this + 293, v17, last_of + 1, std::string::npos);
    LOBYTE(v21) = 1;
    v11 = std::string::length(v17);
    std::string::substr(v17, v18, 0, v11 - 4);
    LOBYTE(v21) = 2;
    v12 = std::string::string(v19, "Prefab_");
    LOBYTE(v21) = 3;
    std::operator+<char>(v16, v12, v18);
    LOBYTE(v21) = 5;
    std::string::~string(v19);
    while ( World::FindActor(v16) )
    {
      v15[9] = v15;
      std::string::string(v15, v16);
      v13 = sub_1017AD40(v20, v15[0]);
      LOBYTE(v21) = 6;
      std::string::operator=(v16, v13);
      LOBYTE(v21) = 5;
      std::string::~string(v20);
    }
    std::string::operator=(this + 111, v16);
    LOBYTE(v21) = 2;
    std::string::~string(v16);
    LOBYTE(v21) = 1;
    std::string::~string(v18);
    LOBYTE(v21) = 0;
    std::string::~string(v17);
  }
  v21 = -1;
  return std::string::~string(&a2);
}
