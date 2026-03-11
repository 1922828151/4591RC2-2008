/*
 * func-name: ??0FProductInfo@GameClient@@QAE@XZ_0
 * func-address: 0x10234c70
 * callers: 0x1000d99a
 * callees: 0x1000a993, 0x102c3940, 0x102c3c40
 */

GameClient::FProductInfo *__thiscall GameClient::FProductInfo::FProductInfo(GameClient::FProductInfo *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::Flyweight::Flyweight(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FProductInfo::`vftable';
  std::string::string((char *)this + 120);
  std::string::string((char *)this + 148);
  std::string::string((char *)this + 176);
  std::string::string((char *)this + 204);
  std::string::string((char *)this + 232);
  LOBYTE(v5) = 5;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 28) = 0;
  std::string::string(v4, &unk_1031CC34);
  LOBYTE(v5) = 6;
  std::string::string(v3, "ProductID");
  LOBYTE(v5) = 7;
  sub_102C3940(this, v3, (char *)this + 108, v4);
  LOBYTE(v5) = 6;
  std::string::~string(v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031CC48);
  LOBYTE(v5) = 8;
  std::string::string(v4, "Type");
  LOBYTE(v5) = 9;
  sub_102C3940(this, v4, (char *)this + 112, v3);
  LOBYTE(v5) = 8;
  std::string::~string(v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CC5C);
  LOBYTE(v5) = 10;
  std::string::string(v4, "SubType");
  LOBYTE(v5) = 11;
  sub_102C3940(this, v4, (char *)this + 116, v3);
  LOBYTE(v5) = 10;
  std::string::~string(v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CC70);
  LOBYTE(v5) = 12;
  std::string::string(v4, "ProductName");
  LOBYTE(v5) = 13;
  sub_102C3C40(this, v4, (char *)this + 120, v3);
  LOBYTE(v5) = 12;
  std::string::~string(v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CC84);
  LOBYTE(v5) = 14;
  std::string::string(v4, "ProductIntro");
  LOBYTE(v5) = 15;
  sub_102C3C40(this, v4, (char *)this + 148, v3);
  LOBYTE(v5) = 14;
  std::string::~string(v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CCA0);
  LOBYTE(v5) = 16;
  std::string::string(v4, "ProductShow");
  LOBYTE(v5) = 17;
  sub_102C3C40(this, v4, (char *)this + 176, v3);
  LOBYTE(v5) = 16;
  std::string::~string(v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CCC4);
  LOBYTE(v5) = 18;
  std::string::string(v4, "ProductRadarIcon");
  LOBYTE(v5) = 19;
  sub_102C3C40(this, v4, (char *)this + 204, v3);
  LOBYTE(v5) = 18;
  std::string::~string(v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CCE4);
  LOBYTE(v5) = 20;
  std::string::string(v4, "KillingIcon");
  LOBYTE(v5) = 21;
  sub_102C3C40(this, v4, (char *)this + 232, v3);
  LOBYTE(v5) = 20;
  std::string::~string(v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  return this;
}
