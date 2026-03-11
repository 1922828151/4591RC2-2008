/*
 * func-name: ??0FBooty@GameClient@@QAE@XZ_0
 * func-address: 0x10223550
 * callers: 0x10012d32
 * callees: 0x1000a993, 0x1000f1dc, 0x102c3a00, 0x102c3c40, 0x102c3d00
 */

GameClient::FBooty *__thiscall GameClient::FBooty::FBooty(GameClient::FBooty *this)
{
  _BYTE v3[28]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+40h] [ebp-28h] BYREF
  int v5; // [esp+64h] [ebp-4h]

  GameClient::Flyweight::Flyweight(this);
  *((float *)this + 27) = 1000.0;
  v5 = 0;
  *((float *)this + 28) = 3.0;
  *(_DWORD *)this = &GameClient::FBooty::`vftable';
  sub_1000F1DC();
  std::string::string((char *)this + 156);
  LOBYTE(v5) = 2;
  std::string::operator=((char *)this + 156, &unk_1031A11C);
  *((float *)this + 36) = 0.5;
  *((float *)this + 37) = 0.5;
  *((float *)this + 33) = 0.0;
  *((float *)this + 38) = 0.5;
  *((float *)this + 34) = 0.0;
  *((float *)this + 35) = 0.0;
  std::string::string(v4, &unk_1031A120);
  LOBYTE(v5) = 3;
  std::string::string(v3, "OpenRange");
  LOBYTE(v5) = 4;
  sub_102C3A00(this, v3, (char *)this + 112, v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  LOBYTE(v5) = 2;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031A138);
  LOBYTE(v5) = 5;
  std::string::string(v4, "NxBoxMax");
  LOBYTE(v5) = 6;
  sub_102C3D00(this, v4, (char *)this + 144, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031A158);
  LOBYTE(v5) = 7;
  std::string::string(v4, "NxBoxMin");
  LOBYTE(v5) = 8;
  sub_102C3D00(this, v4, (char *)this + 132, v3);
  LOBYTE(v5) = 7;
  std::string::~string(v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031A178);
  LOBYTE(v5) = 9;
  std::string::string(v4, "ModelName");
  LOBYTE(v5) = 10;
  sub_102C3C40(this, v4, (char *)this + 156, v3);
  LOBYTE(v5) = 9;
  std::string::~string(v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  return this;
}
