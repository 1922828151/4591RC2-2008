/*
 * func-name: ??0FDamageEquip@GameClient@@QAE@XZ_0
 * func-address: 0x10226050
 * callers: 0x10017017
 * callees: 0x100057f4, 0x100076e9, 0x1000f1dc, 0x102c3880, 0x102c3a00, 0x102c3b80, 0x102c3c40, 0x102c3d00
 */

GameClient::FDamageEquip *__thiscall GameClient::FDamageEquip::FDamageEquip(GameClient::FDamageEquip *this)
{
  int v3; // [esp+0h] [ebp-5Ch]
  int v4; // [esp+4h] [ebp-58h]
  _BYTE v5[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v6[28]; // [esp+34h] [ebp-28h] BYREF
  int v7; // [esp+58h] [ebp-4h]

  GameClient::FItem::FItem(this);
  v7 = 0;
  *(_DWORD *)this = &GameClient::FDamageEquip::`vftable';
  sub_1000F1DC();
  *((float *)this + 564) = 0.0;
  *((float *)this + 565) = 0.0;
  *((float *)this + 566) = 0.0;
  std::string::string((char *)this + 2268);
  sub_100057F4(v3, v4);
  LOBYTE(v7) = 3;
  *((_DWORD *)this + 550) = 10;
  *((_DWORD *)this + 551) = 20;
  *((_BYTE *)this + 2208) = 0;
  *((_DWORD *)this + 563) = 16;
  std::string::operator=((char *)this + 2268, &unk_1031AA2C);
  std::string::string(v6, &unk_1031AA30);
  LOBYTE(v7) = 4;
  std::string::string(v5, "FlySpeed");
  LOBYTE(v7) = 5;
  sub_102C3880(this, v5, (char *)this + 2200, v6);
  LOBYTE(v7) = 4;
  std::string::~string(v5);
  LOBYTE(v7) = 3;
  std::string::~string(v6);
  std::string::string(v5, &unk_1031AA48);
  LOBYTE(v7) = 6;
  std::string::string(v6, "Gravity");
  LOBYTE(v7) = 7;
  sub_102C3880(this, v6, (char *)this + 2204, v5);
  LOBYTE(v7) = 6;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AA60);
  LOBYTE(v7) = 8;
  std::string::string(v6, "PhysicsShow");
  LOBYTE(v7) = 9;
  sub_102C3B80(this, v6, (char *)this + 2208, v5);
  LOBYTE(v7) = 8;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AA80);
  LOBYTE(v7) = 10;
  std::string::string(v6, "CollisionBoxMax");
  LOBYTE(v7) = 11;
  sub_102C3D00(this, v6, (char *)this + 2240, v5);
  LOBYTE(v7) = 10;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AAA4);
  LOBYTE(v7) = 12;
  std::string::string(v6, "CollisionBoxMin");
  LOBYTE(v7) = 13;
  sub_102C3D00(this, v6, (char *)this + 2228, v5);
  LOBYTE(v7) = 12;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AAC8);
  LOBYTE(v7) = 14;
  std::string::string(v6, "VisiableTarget");
  LOBYTE(v7) = 15;
  sub_102C3880(this, v6, (char *)this + 2252, v5);
  LOBYTE(v7) = 14;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AB18);
  LOBYTE(v7) = 16;
  std::string::string(v6, "ModelOffset");
  LOBYTE(v7) = 17;
  sub_102C3D00(this, v6, (char *)this + 2256, v5);
  LOBYTE(v7) = 16;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AB34);
  LOBYTE(v7) = 18;
  std::string::string(v6, "FXExplodeName");
  LOBYTE(v7) = 19;
  sub_102C3C40(this, v6, (char *)this + 2268, v5);
  LOBYTE(v7) = 18;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AB54);
  LOBYTE(v7) = 20;
  std::string::string(v6, "SDExplodeName");
  LOBYTE(v7) = 21;
  sub_102C3C40(this, v6, (char *)this + 2296, v5);
  LOBYTE(v7) = 20;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  std::string::string(v5, &unk_1031AB74);
  LOBYTE(v7) = 22;
  std::string::string(v6, "SDExplodeRange");
  LOBYTE(v7) = 23;
  sub_102C3A00(this, v6, (char *)this + 2356, v5);
  LOBYTE(v7) = 22;
  std::string::~string(v6);
  LOBYTE(v7) = 3;
  std::string::~string(v5);
  return this;
}
