/*
 * func-name: ?LoadResourcesFPV@AEquip@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z_0
 * func-address: 0x100fdfe0
 * callers: 0x1000b438
 * callees: 0x1000b43d, 0x102c71e0
 */

char __thiscall GameClient::AEquip::LoadResourcesFPV(int *this, int a2, int a3)
{
  void *v4; // edi
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  void (__thiscall *v8)(int *, _BYTE *, _BYTE *, int); // edx
  _DWORD v10[5]; // [esp+0h] [ebp-88h] BYREF
  _BYTE *v11; // [esp+14h] [ebp-74h]
  int v12; // [esp+18h] [ebp-70h]
  _BYTE v13[28]; // [esp+28h] [ebp-60h] BYREF
  _BYTE v14[28]; // [esp+44h] [ebp-44h] BYREF
  _BYTE v15[28]; // [esp+60h] [ebp-28h] BYREF
  int v16; // [esp+84h] [ebp-4h]

  v4 = this + 319;
  std::string::operator=(this + 319, a2);
  std::string::operator=(this + 326, &unk_10311273);
  sub_1000B43D(v4);
  v5 = this[341] == 0;
  this[532] = 0;
  if ( !v5 )
  {
    v6 = sub_102C71E0(v15, v4);
    v16 = 0;
    std::operator+<char>(v10, v6, "_DCD");
    this[532] = StaticModel::FindMaterial(this[341], v10[0], v10[1], v10[2], v10[3], v10[4], v11, v12);
    v16 = -1;
    std::string::~string(v15);
    std::string::string(v14, "Weapon_Point");
    v16 = 1;
    std::string::string(v13, "FPVWeaponPoint");
    v7 = *this;
    v12 = this[341];
    v11 = v14;
    v8 = *(void (__thiscall **)(int *, _BYTE *, _BYTE *, int))(v7 + 124);
    LOBYTE(v16) = 2;
    v8(this, v13, v14, v12);
    LOBYTE(v16) = 1;
    std::string::~string(v13);
    v16 = -1;
    std::string::~string(v14);
  }
  return 1;
}
