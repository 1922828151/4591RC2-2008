/*
 * func-name: ??0FProduct@GameClient@@QAE@XZ_0
 * func-address: 0x10234830
 * callers: 0x10003427
 * callees: 0x1000a993, 0x102c3940, 0x102c3c40
 */

GameClient::FProduct *__thiscall GameClient::FProduct::FProduct(GameClient::FProduct *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::Flyweight::Flyweight(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FProduct::`vftable';
  std::string::string((char *)this + 112);
  std::string::string((char *)this + 140);
  std::string::string((char *)this + 168);
  LOBYTE(v5) = 3;
  *((_DWORD *)this + 27) = 0;
  std::string::string(v4, &unk_1031CBC4);
  LOBYTE(v5) = 4;
  std::string::string(v3, "ProductID");
  LOBYTE(v5) = 5;
  sub_102C3940(this, v3, (char *)this + 108, v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031CBD8);
  LOBYTE(v5) = 6;
  std::string::string(v4, "VersionName");
  LOBYTE(v5) = 7;
  sub_102C3C40(this, v4, (char *)this + 112, v3);
  LOBYTE(v5) = 6;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CBF0);
  LOBYTE(v5) = 8;
  std::string::string(v4, "VersionIntro");
  LOBYTE(v5) = 9;
  sub_102C3C40(this, v4, (char *)this + 140, v3);
  LOBYTE(v5) = 8;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CC0C);
  LOBYTE(v5) = 10;
  std::string::string(v4, "IconName");
  LOBYTE(v5) = 11;
  sub_102C3C40(this, v4, (char *)this + 168, v3);
  LOBYTE(v5) = 10;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  return this;
}
