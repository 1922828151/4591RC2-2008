/*
 * func-name: ??0FWheelVehicleWheel@GameClient@@QAE@XZ_0
 * func-address: 0x10246850
 * callers: 0x10016685
 * callees: 0x10007d9c, 0x102c3a00, 0x102c3b80
 */

GameClient::FWheelVehicleWheel *__thiscall GameClient::FWheelVehicleWheel::FWheelVehicleWheel(
        GameClient::FWheelVehicleWheel *this)
{
  _BYTE v3[28]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+30h] [ebp-28h] BYREF
  int v5; // [esp+54h] [ebp-4h]

  GameClient::FWheel::FWheel(this);
  *((float *)this + 37) = 0.0;
  v5 = 0;
  *(_DWORD *)this = &GameClient::FWheelVehicleWheel::`vftable';
  *((_BYTE *)this + 152) = 1;
  std::string::string(v4, &unk_1031F46C);
  LOBYTE(v5) = 1;
  std::string::string(v3, "MaxSteerAngle");
  LOBYTE(v5) = 2;
  sub_102C3A00(this, v3, (char *)this + 148, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F48C);
  LOBYTE(v5) = 3;
  std::string::string(v4, "HasForce");
  LOBYTE(v5) = 4;
  sub_102C3B80(this, v4, (char *)this + 152, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
