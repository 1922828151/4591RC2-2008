/*
 * func-name: ??0SuspendVehicle@GameClient@@QAE@K@Z_0
 * func-address: 0x101b9b10
 * callers: 0x100045de
 * callees: 0x100060e6
 */

GameClient::SuspendVehicle *__thiscall GameClient::SuspendVehicle::SuspendVehicle(
        GameClient::SuspendVehicle *this,
        unsigned int a2)
{
  GameClient::ControlledEstab::ControlledEstab(this, a2);
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_BYTE *)this + 552) = 0;
  *(_DWORD *)this = &GameClient::SuspendVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::SuspendVehicle::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 140) = 0;
  *((_DWORD *)this + 141) = 0;
  *((_DWORD *)this + 142) = 0;
  *((_DWORD *)this + 124) = 14;
  *((_DWORD *)this + 125) = 14;
  *((_BYTE *)this + 476) = 1;
  *((_DWORD *)this + 123) = 15;
  return this;
}
