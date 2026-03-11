/*
 * func-name: ??1FSuspendVehicleWheel@GameClient@@UAE@XZ_0
 * func-address: 0x102417e0
 * callers: 0x100150d7
 * callees: none
 */

void __thiscall GameClient::FSuspendVehicleWheel::~FSuspendVehicleWheel(GameClient::FSuspendVehicleWheel *this)
{
  *(_DWORD *)this = &GameClient::FSuspendVehicleWheel::`vftable';
  GameClient::FWheel::~FWheel(this);
}
