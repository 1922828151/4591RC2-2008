/*
 * func-name: ??0FAEnergy@GameClient@@QAE@XZ_0
 * func-address: 0x10247f60
 * callers: 0x10010726
 * callees: 0x1000c563, 0x102c3880
 */

GameClient::FAEnergy *__thiscall GameClient::FAEnergy::FAEnergy(GameClient::FAEnergy *this)
{
  _BYTE v3[28]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+30h] [ebp-28h] BYREF
  int v5; // [esp+54h] [ebp-4h]

  GameClient::FAura::FAura(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FAEnergy::`vftable';
  *((_DWORD *)this + 65) = 1000;
  *((_DWORD *)this + 66) = 100;
  std::string::string(v4, &unk_1031F64C);
  LOBYTE(v5) = 1;
  std::string::string(v3, "Energy");
  LOBYTE(v5) = 2;
  sub_102C3880(this, v3, (char *)this + 260, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F664);
  LOBYTE(v5) = 3;
  std::string::string(v4, "ExEnergy");
  LOBYTE(v5) = 4;
  sub_102C3880(this, v4, (char *)this + 264, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
