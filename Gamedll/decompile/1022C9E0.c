/*
 * func-name: ??0FFunc_Sheild@GameClient@@QAE@XZ_0
 * func-address: 0x1022c9e0
 * callers: 0x1000ca68
 * callees: 0x10002f5e, 0x102c3c40
 */

GameClient::FFunc_Sheild *__thiscall GameClient::FFunc_Sheild::FFunc_Sheild(GameClient::FFunc_Sheild *this)
{
  _BYTE v3[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v5; // [esp+50h] [ebp-4h]

  GameClient::FFunction::FFunction(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FFunc_Sheild::`vftable';
  std::string::string((char *)this + 108);
  LOBYTE(v5) = 1;
  std::string::string(v4, &unk_1031C318);
  LOBYTE(v5) = 2;
  std::string::string(v3, "SheildModel");
  LOBYTE(v5) = 3;
  sub_102C3C40(this, v3, (char *)this + 108, v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  LOBYTE(v5) = 1;
  std::string::~string(v4);
  return this;
}
