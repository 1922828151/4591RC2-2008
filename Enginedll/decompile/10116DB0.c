/*
 * func-name: ?DeserializationComplete@PrefabInstance@@UAEXXZ
 * func-address: 0x10116db0
 * callers: none
 * callees: 0x10001330, 0x10015b30, 0x10097220, 0x100efd60, 0x10141cd0, 0x10143fd0, 0x10174aa0, 0x1017a2d0
 */

void __thiscall PrefabInstance::DeserializationComplete(PrefabInstance *this)
{
  float v2; // eax
  float v3; // ecx
  int v4; // ecx
  char *v5; // esi
  int *v6; // edi
  int v7; // eax
  const char *v8; // eax
  int v9; // [esp-8h] [ebp-90h]
  _BYTE v10[28]; // [esp+4h] [ebp-84h] BYREF
  _BYTE v11[28]; // [esp+20h] [ebp-68h] BYREF
  float v12[16]; // [esp+3Ch] [ebp-4Ch] BYREF
  int v13; // [esp+84h] [ebp-4h]

  if ( *(_BYTE *)(*((_DWORD *)this + 178) + 724) )
  {
    if ( !*((_BYTE *)this + 724) && FindMedia((int)this + 1172, (int)"Models", 0, 0) )
    {
      sub_10001330(v12, (char *)this + 868);
      v2 = *((float *)this + 215);
      v3 = *((float *)this + 216);
      v12[12] = *((float *)this + 214);
      v9 = *((_DWORD *)this + 266);
      v12[13] = v2;
      v12[14] = v3;
      NxPhysics::Instance();
      *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(this, -1, (char *)this + 1172, v12, v9);
    }
    v4 = *((_DWORD *)this + 179);
    if ( v4 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 12))(v4, 1);
      *((_DWORD *)this + 179) = 0;
    }
    v5 = (char *)this + 1172;
    v6 = (int *)AsyncLoader::CachePacket(v5);
    if ( v6 )
    {
      v7 = sub_1017A2D0(v11, v5);
      v13 = 0;
      std::operator+<char>(v10, v7, ".dds");
      LOBYTE(v13) = 2;
      std::string::~string(v11);
      if ( FindMedia((int)v10, (int)"Models", 0, 0) )
        sub_10015B30(v6, (int)v10);
      v13 = -1;
      std::string::~string(v10);
    }
  }
  else
  {
    v8 = (const char *)std::string::c_str((char *)this + 1172);
    StaticModel::Load(*((ModelFrame ***)this + 179), v8, 0);
  }
}
