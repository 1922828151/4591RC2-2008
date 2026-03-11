/*
 * func-name: ??0FSystemPart@GameClient@@QAE@XZ_0
 * func-address: 0x10241950
 * callers: 0x1001018b
 * callees: 0x10003427, 0x102c3880
 */

GameClient::FSystemPart *__thiscall GameClient::FSystemPart::FSystemPart(GameClient::FSystemPart *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FProduct::FProduct(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FSystemPart::`vftable';
  std::string::string((char *)this + 212);
  std::string::string((char *)this + 244);
  LOBYTE(v5) = 2;
  *((_DWORD *)this + 49) = 3;
  *((_DWORD *)this + 52) = 0;
  std::string::operator=((char *)this + 212, &unk_1031E4F0);
  *((_DWORD *)this + 60) = 0;
  std::string::operator=((char *)this + 244, &unk_1031E4F1);
  *((_DWORD *)this + 50) = 1;
  *((_DWORD *)this + 51) = 1;
  std::string::operator=((char *)this + 168, &unk_1031E4F2);
  std::string::string(v4, &unk_1031E4F4);
  LOBYTE(v5) = 3;
  std::string::string(v3, "Mass");
  LOBYTE(v5) = 4;
  sub_102C3880(this, v3, (char *)this + 200, v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  LOBYTE(v5) = 2;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031E504);
  LOBYTE(v5) = 5;
  std::string::string(v4, "Power");
  LOBYTE(v5) = 6;
  sub_102C3880(this, v4, (char *)this + 204, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  return this;
}
