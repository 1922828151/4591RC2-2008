/*
 * func-name: ??0FADamage@GameClient@@QAE@XZ_0
 * func-address: 0x10247b10
 * callers: 0x100058df
 * callees: 0x1000c563, 0x102c3880, 0x102c3a00
 */

GameClient::FADamage *__thiscall GameClient::FADamage::FADamage(GameClient::FADamage *this)
{
  _BYTE v3[28]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+30h] [ebp-28h] BYREF
  int v5; // [esp+54h] [ebp-4h]

  GameClient::FAura::FAura(this);
  *((float *)this + 65) = 0.2;
  v5 = 0;
  *(_DWORD *)this = &GameClient::FADamage::`vftable';
  *((_DWORD *)this + 66) = 50;
  std::string::string(v4, &unk_1031F5D8);
  LOBYTE(v5) = 1;
  std::string::string(v3, "DamageAbsorbCoeff");
  LOBYTE(v5) = 2;
  sub_102C3A00(this, v3, (char *)this + 260, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F608);
  LOBYTE(v5) = 3;
  std::string::string(v4, "Damage");
  LOBYTE(v5) = 4;
  sub_102C3880(this, v4, (char *)this + 264, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
