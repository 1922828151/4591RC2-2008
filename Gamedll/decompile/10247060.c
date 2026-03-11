/*
 * func-name: ??0FAArmor@GameClient@@QAE@XZ_0
 * func-address: 0x10247060
 * callers: 0x100033d7
 * callees: 0x1000c563, 0x102c3880
 */

GameClient::FAArmor *__thiscall GameClient::FAArmor::FAArmor(GameClient::FAArmor *this)
{
  _BYTE v3[28]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+30h] [ebp-28h] BYREF
  int v5; // [esp+54h] [ebp-4h]

  GameClient::FAura::FAura(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FAArmor::`vftable';
  *((_DWORD *)this + 65) = 4;
  *((_DWORD *)this + 66) = 200;
  std::string::string(v4, &unk_1031F518);
  LOBYTE(v5) = 1;
  std::string::string(v3, "AddonArmorType");
  LOBYTE(v5) = 2;
  sub_102C3880(this, v3, (char *)this + 260, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F53C);
  LOBYTE(v5) = 3;
  std::string::string(v4, "AddonArmor");
  LOBYTE(v5) = 4;
  sub_102C3880(this, v4, (char *)this + 264, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
