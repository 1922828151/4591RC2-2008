/*
 * func-name: ??0FFunc_Receive@GameClient@@QAE@XZ_0
 * func-address: 0x1022c270
 * callers: 0x10012a9e
 * callees: 0x10002f5e, 0x102c3a00, 0x102c3d00
 */

GameClient::FFunc_Receive *__thiscall GameClient::FFunc_Receive::FFunc_Receive(GameClient::FFunc_Receive *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FFunction::FFunction(this);
  *(_DWORD *)this = &GameClient::FFunc_Receive::`vftable';
  *((float *)this + 27) = 0.0;
  *((float *)this + 28) = 0.0;
  *((float *)this + 29) = 0.0;
  *((float *)this + 31) = 5.0;
  *((float *)this + 30) = 5.0;
  v5 = 0;
  std::string::string(v4, &unk_1031C26C);
  LOBYTE(v5) = 1;
  std::string::string(v3, "ReceiveLoc");
  LOBYTE(v5) = 2;
  sub_102C3D00(this, v3, (char *)this + 108, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031C284);
  LOBYTE(v5) = 3;
  std::string::string(v4, "EffectRange");
  LOBYTE(v5) = 4;
  sub_102C3A00(this, v4, (char *)this + 120, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031C2A4);
  LOBYTE(v5) = 5;
  std::string::string(v4, "EffectHeight");
  LOBYTE(v5) = 6;
  sub_102C3A00(this, v4, (char *)this + 124, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
