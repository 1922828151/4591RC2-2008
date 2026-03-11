/*
 * func-name: ??1FPedrailVehicleWheel@GameClient@@UAE@XZ_0
 * func-address: 0x10234670
 * callers: 0x1001a55a
 * callees: none
 */

void __thiscall GameClient::FPedrailVehicleWheel::~FPedrailVehicleWheel(GameClient::FPedrailVehicleWheel *this)
{
  *(_DWORD *)this = &GameClient::FPedrailVehicleWheel::`vftable';
  GameClient::FWheel::~FWheel(this);
}
