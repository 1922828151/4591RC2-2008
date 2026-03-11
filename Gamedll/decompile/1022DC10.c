/*
 * func-name: ??0Flyweight@GameClient@@QAE@XZ_0
 * func-address: 0x1022dc10
 * callers: 0x1000a993
 * callees: 0x102c3790, 0x102c3c40
 */

GameClient::Flyweight *__thiscall GameClient::Flyweight::Flyweight(GameClient::Flyweight *this)
{
  _BYTE v3[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v5; // [esp+50h] [ebp-4h]

  sub_102C3790();
  v5 = 0;
  *(_DWORD *)this = &GameClient::Flyweight::`vftable';
  *((_DWORD *)this + 12) = 0;
  std::string::string((char *)this + 52);
  std::string::string((char *)this + 80);
  LOBYTE(v5) = 2;
  std::string::string(v4, &unk_1031C4EC);
  LOBYTE(v5) = 3;
  std::string::string(v3, "ImageName");
  LOBYTE(v5) = 4;
  sub_102C3C40(this, v3, (char *)this + 80, v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  LOBYTE(v5) = 2;
  std::string::~string(v4);
  return this;
}
