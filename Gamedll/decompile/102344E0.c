/*
 * func-name: ??0FPedrailVehicleWheel@GameClient@@QAE@XZ_0
 * func-address: 0x102344e0
 * callers: 0x1001057d
 * callees: 0x10007d9c, 0x102c3a00, 0x102c3b80
 */

GameClient::FPedrailVehicleWheel *__thiscall GameClient::FPedrailVehicleWheel::FPedrailVehicleWheel(
        GameClient::FPedrailVehicleWheel *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FWheel::FWheel(this);
  *((float *)this + 38) = 1.0;
  *((float *)this + 39) = 30.0;
  v5 = 0;
  *(_DWORD *)this = &GameClient::FPedrailVehicleWheel::`vftable';
  *((_BYTE *)this + 148) = 0;
  std::string::string(v4, &unk_1031CB40);
  LOBYTE(v5) = 1;
  std::string::string(v3, "IsLeft");
  LOBYTE(v5) = 2;
  sub_102C3B80(this, v3, (char *)this + 148, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031CB54);
  LOBYTE(v5) = 3;
  std::string::string(v4, "SteerBias");
  LOBYTE(v5) = 4;
  sub_102C3A00(this, v4, (char *)this + 152, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031CB6C);
  LOBYTE(v5) = 5;
  std::string::string(v4, "SteerAngle");
  LOBYTE(v5) = 6;
  sub_102C3A00(this, v4, (char *)this + 156, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
