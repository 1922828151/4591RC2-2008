/*
 * func-name: ??1PedrailVehicle@GameClient@@UAE@XZ_0
 * func-address: 0x101b8180
 * callers: 0x100125da
 * callees: 0x10007e37, 0x100090f7
 */

void __thiscall GameClient::PedrailVehicle::~PedrailVehicle(GameClient::PedrailVehicle *this)
{
  *(_DWORD *)this = &GameClient::PedrailVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::PedrailVehicle::`vftable'{for `GameClient::DamageUnit'};
  sub_100090F7();
  GameClient::ControlledEstab::~ControlledEstab(this);
}
