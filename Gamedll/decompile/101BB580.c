/*
 * func-name: ??1WheelVehicle@GameClient@@UAE@XZ_0
 * func-address: 0x101bb580
 * callers: 0x10015b77
 * callees: 0x10007e37, 0x100090f7
 */

void __thiscall GameClient::WheelVehicle::~WheelVehicle(GameClient::WheelVehicle *this)
{
  *(_DWORD *)this = &GameClient::WheelVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::WheelVehicle::`vftable'{for `GameClient::DamageUnit'};
  sub_100090F7();
  GameClient::ControlledEstab::~ControlledEstab(this);
}
