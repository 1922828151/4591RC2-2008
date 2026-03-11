/*
 * func-name: ??0FAMovement@GameClient@@QAE@XZ_0
 * func-address: 0x102484e0
 * callers: 0x100026b2
 * callees: 0x1000c563, 0x102c3a00, 0x102c3b80
 */

GameClient::FAMovement *__thiscall GameClient::FAMovement::FAMovement(GameClient::FAMovement *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FAura::FAura(this);
  *((float *)this + 66) = 0.0;
  *((float *)this + 67) = 0.0;
  v5 = 0;
  *(_DWORD *)this = &GameClient::FAMovement::`vftable';
  *((_BYTE *)this + 260) = 1;
  std::string::string(v4, &unk_1031F6BC);
  LOBYTE(v5) = 1;
  std::string::string(v3, "DependUserDir");
  LOBYTE(v5) = 2;
  sub_102C3B80(this, v3, (char *)this + 260, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F6E0);
  LOBYTE(v5) = 3;
  std::string::string(v4, "MoveSpeedPercent");
  LOBYTE(v5) = 4;
  sub_102C3A00(this, v4, (char *)this + 264, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F708);
  LOBYTE(v5) = 5;
  std::string::string(v4, "UpSpeed");
  LOBYTE(v5) = 6;
  sub_102C3A00(this, v4, (char *)this + 268, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
