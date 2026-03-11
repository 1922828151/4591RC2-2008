/*
 * func-name: ??1FWheelVehicleWheel@GameClient@@UAE@XZ_0
 * func-address: 0x10246970
 * callers: 0x10003fa3
 * callees: none
 */

void __thiscall GameClient::FWheelVehicleWheel::~FWheelVehicleWheel(GameClient::FWheelVehicleWheel *this)
{
  *(_DWORD *)this = &GameClient::FWheelVehicleWheel::`vftable';
  GameClient::FWheel::~FWheel(this);
}
