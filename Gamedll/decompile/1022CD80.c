/*
 * func-name: ??0FFunc_Store@GameClient@@QAE@XZ_0
 * func-address: 0x1022cd80
 * callers: 0x1000bbd1
 * callees: 0x10002f5e, 0x102c3880
 */

GameClient::FFunc_Store *__thiscall GameClient::FFunc_Store::FFunc_Store(GameClient::FFunc_Store *this)
{
  _BYTE v3[28]; // [esp+Ch] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+28h] [ebp-28h] BYREF
  int v5; // [esp+4Ch] [ebp-4h]

  GameClient::FFunction::FFunction(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FFunc_Store::`vftable';
  std::string::string(v4, &unk_1031C354);
  LOBYTE(v5) = 1;
  std::string::string(v3, "MaxStocks");
  LOBYTE(v5) = 2;
  sub_102C3880(this, v3, (char *)this + 108, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031C370);
  LOBYTE(v5) = 3;
  std::string::string(v4, "MaxEachStocks");
  LOBYTE(v5) = 4;
  sub_102C3880(this, v4, (char *)this + 112, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
