/*
 * func-name: ??0FAura@GameClient@@QAE@XZ_0
 * func-address: 0x1024a290
 * callers: 0x1000c563
 * callees: 0x1000a993, 0x102c3880, 0x102c3a00, 0x102c3b80, 0x102c3c40
 */

GameClient::FAura *__thiscall GameClient::FAura::FAura(GameClient::FAura *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::Flyweight::Flyweight(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FAura::`vftable';
  std::string::string((char *)this + 140);
  std::string::string((char *)this + 172);
  std::string::string((char *)this + 200);
  std::string::string((char *)this + 228);
  *((float *)this + 32) = 0.0;
  *((float *)this + 33) = 0.0;
  LOBYTE(v5) = 4;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_BYTE *)this + 124) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_BYTE *)this + 137) = 1;
  std::string::operator=((char *)this + 200, &unk_1031F978);
  std::string::operator=((char *)this + 228, &unk_1031F979);
  *((_BYTE *)this + 256) = 0;
  std::string::operator=((char *)this + 140, &unk_1031F97A);
  *((_DWORD *)this + 42) = 3;
  std::string::operator=((char *)this + 172, &unk_1031F97B);
  std::string::string(v4, &unk_1031F97C);
  LOBYTE(v5) = 5;
  std::string::string(v3, "AuraType");
  LOBYTE(v5) = 6;
  sub_102C3880(this, v3, (char *)this + 108, v4);
  LOBYTE(v5) = 5;
  std::string::~string(v3);
  LOBYTE(v5) = 4;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F9A0);
  LOBYTE(v5) = 7;
  std::string::string(v4, "AuraPeriodicityType");
  LOBYTE(v5) = 8;
  sub_102C3880(this, v4, (char *)this + 112, v3);
  LOBYTE(v5) = 7;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F9E0);
  LOBYTE(v5) = 9;
  std::string::string(v4, "AuraCapacity");
  LOBYTE(v5) = 10;
  sub_102C3880(this, v4, (char *)this + 116, v3);
  LOBYTE(v5) = 9;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FA00);
  LOBYTE(v5) = 11;
  std::string::string(v4, "Duration");
  LOBYTE(v5) = 12;
  sub_102C3A00(this, v4, (char *)this + 128, v3);
  LOBYTE(v5) = 11;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FA18);
  LOBYTE(v5) = 13;
  std::string::string(v4, "Periodicity");
  LOBYTE(v5) = 14;
  sub_102C3A00(this, v4, (char *)this + 132, v3);
  LOBYTE(v5) = 13;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FA30);
  LOBYTE(v5) = 15;
  std::string::string(v4, "FxName");
  LOBYTE(v5) = 16;
  sub_102C3C40(this, v4, (char *)this + 200, v3);
  LOBYTE(v5) = 15;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FA44);
  LOBYTE(v5) = 17;
  std::string::string(v4, "FxBoneName");
  LOBYTE(v5) = 18;
  sub_102C3C40(this, v4, (char *)this + 228, v3);
  LOBYTE(v5) = 17;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FA64);
  LOBYTE(v5) = 19;
  std::string::string(v4, "FxFPVHidden");
  LOBYTE(v5) = 20;
  sub_102C3B80(this, v4, (char *)this + 256, v3);
  LOBYTE(v5) = 19;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FA88);
  LOBYTE(v5) = 21;
  std::string::string(v4, "TexName");
  LOBYTE(v5) = 22;
  sub_102C3C40(this, v4, (char *)this + 172, v3);
  LOBYTE(v5) = 21;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FAA0);
  LOBYTE(v5) = 23;
  std::string::string(v4, "SoundName");
  LOBYTE(v5) = 24;
  sub_102C3C40(this, v4, (char *)this + 140, v3);
  LOBYTE(v5) = 23;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031FABC);
  LOBYTE(v5) = 25;
  std::string::string(v4, "SoundRange");
  LOBYTE(v5) = 26;
  sub_102C3880(this, v4, (char *)this + 168, v3);
  LOBYTE(v5) = 25;
  std::string::~string(v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  return this;
}
