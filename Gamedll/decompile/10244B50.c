/*
 * func-name: ??0FWheel@GameClient@@QAE@XZ_0
 * func-address: 0x10244b50
 * callers: 0x10007d9c
 * callees: 0x1000a993, 0x102c3a00
 */

GameClient::FWheel *__thiscall GameClient::FWheel::FWheel(GameClient::FWheel *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::Flyweight::Flyweight(this);
  *((float *)this + 27) = 0.0;
  *((float *)this + 28) = 0.0;
  *((float *)this + 36) = 0.0;
  *((float *)this + 35) = 0.0;
  *((float *)this + 34) = 0.0;
  *((float *)this + 33) = 0.0;
  v5 = 0;
  *((float *)this + 32) = 0.0;
  *(_DWORD *)this = &GameClient::FWheel::`vftable';
  *((float *)this + 31) = 0.0;
  *((float *)this + 30) = 0.0;
  *((float *)this + 29) = 0.0;
  std::string::string(v4, &unk_1031F0AC);
  LOBYTE(v5) = 1;
  std::string::string(v3, "Height");
  LOBYTE(v5) = 2;
  sub_102C3A00(this, v3, (char *)this + 108, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F0C4);
  LOBYTE(v5) = 3;
  std::string::string(v4, "Size");
  LOBYTE(v5) = 4;
  sub_102C3A00(this, v4, (char *)this + 112, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F0E4);
  LOBYTE(v5) = 5;
  std::string::string(v4, "RotVizBias");
  LOBYTE(v5) = 6;
  sub_102C3A00(this, v4, (char *)this + 116, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F104);
  LOBYTE(v5) = 7;
  std::string::string(v4, "TransVizBias");
  LOBYTE(v5) = 8;
  sub_102C3A00(this, v4, (char *)this + 120, v3);
  LOBYTE(v5) = 7;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F128);
  LOBYTE(v5) = 9;
  std::string::string(v4, "SpringBias");
  LOBYTE(v5) = 10;
  sub_102C3A00(this, v4, (char *)this + 124, v3);
  LOBYTE(v5) = 9;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F148);
  LOBYTE(v5) = 11;
  std::string::string(v4, "DumperBias");
  LOBYTE(v5) = 12;
  sub_102C3A00(this, v4, (char *)this + 128, v3);
  LOBYTE(v5) = 11;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F168);
  LOBYTE(v5) = 13;
  std::string::string(v4, "DynamicFric");
  LOBYTE(v5) = 14;
  sub_102C3A00(this, v4, (char *)this + 132, v3);
  LOBYTE(v5) = 13;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F184);
  LOBYTE(v5) = 15;
  std::string::string(v4, "StaticFric");
  LOBYTE(v5) = 16;
  sub_102C3A00(this, v4, (char *)this + 136, v3);
  LOBYTE(v5) = 15;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F1A0);
  LOBYTE(v5) = 17;
  std::string::string(v4, "DynamicFricV");
  LOBYTE(v5) = 18;
  sub_102C3A00(this, v4, (char *)this + 140, v3);
  LOBYTE(v5) = 17;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F1C4);
  LOBYTE(v5) = 19;
  std::string::string(v4, "StaticFricV");
  LOBYTE(v5) = 20;
  sub_102C3A00(this, v4, (char *)this + 144, v3);
  LOBYTE(v5) = 19;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
