/*
 * func-name: ??0AircraftVehicle@GameClient@@QAE@K@Z_0
 * func-address: 0x101b5d90
 * callers: 0x100050ec
 * callees: 0x100060e6
 */

GameClient::AircraftVehicle *__thiscall GameClient::AircraftVehicle::AircraftVehicle(
        GameClient::AircraftVehicle *this,
        unsigned int a2)
{
  GameClient::ControlledEstab::ControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::AircraftVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::AircraftVehicle::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_BYTE *)this + 556) = 0;
  AnimationSet::AnimationSet((GameClient::AircraftVehicle *)((char *)this + 560));
  *((_DWORD *)this + 151) = -1;
  AnimationSet::AnimationSet((GameClient::AircraftVehicle *)((char *)this + 608));
  *((_DWORD *)this + 163) = -1;
  return this;
}
