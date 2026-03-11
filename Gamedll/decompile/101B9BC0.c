/*
 * func-name: ??1SuspendVehicle@GameClient@@UAE@XZ_0
 * func-address: 0x101b9bc0
 * callers: 0x10009827
 * callees: 0x10007e37, 0x100090f7
 */

void __thiscall GameClient::SuspendVehicle::~SuspendVehicle(GameClient::SuspendVehicle *this)
{
  *(_DWORD *)this = &GameClient::SuspendVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::SuspendVehicle::`vftable'{for `GameClient::DamageUnit'};
  sub_100090F7();
  GameClient::ControlledEstab::~ControlledEstab(this);
}
