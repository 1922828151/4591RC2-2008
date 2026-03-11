/*
 * func-name: ??0WheelVehicle@GameClient@@QAE@K@Z_0
 * func-address: 0x101bb500
 * callers: 0x10015082
 * callees: 0x100060e6
 */

GameClient::WheelVehicle *__thiscall GameClient::WheelVehicle::WheelVehicle(
        GameClient::WheelVehicle *this,
        unsigned int a2)
{
  GameClient::ControlledEstab::ControlledEstab(this, a2);
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_BYTE *)this + 552) = 0;
  *(_DWORD *)this = &GameClient::WheelVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::WheelVehicle::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 140) = 0;
  *((_DWORD *)this + 141) = 0;
  *((_DWORD *)this + 142) = 0;
  return this;
}
