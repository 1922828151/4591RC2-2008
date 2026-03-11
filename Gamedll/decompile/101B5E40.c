/*
 * func-name: ??1AircraftVehicle@GameClient@@UAE@XZ_0
 * func-address: 0x101b5e40
 * callers: 0x1000fb5f
 * callees: 0x10007e37
 */

void __thiscall GameClient::AircraftVehicle::~AircraftVehicle(GameClient::AircraftVehicle *this)
{
  *(_DWORD *)this = &GameClient::AircraftVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::AircraftVehicle::`vftable'{for `GameClient::DamageUnit'};
  AnimationSet::~AnimationSet((GameClient::AircraftVehicle *)((char *)this + 608));
  AnimationSet::~AnimationSet((GameClient::AircraftVehicle *)((char *)this + 560));
  GameClient::ControlledEstab::~ControlledEstab(this);
}
