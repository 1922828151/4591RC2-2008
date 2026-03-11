/*
 * func-name: ??1SuspendVehicleController@GameClient@@UAE@XZ_0
 * func-address: 0x101be950
 * callers: 0x10010b68
 * callees: none
 */

void __thiscall GameClient::SuspendVehicleController::~SuspendVehicleController(
        GameClient::SuspendVehicleController *this)
{
  *(_DWORD *)this = &GameClient::SuspendVehicleController::`vftable';
  GameClient::ICtlEstabController::~ICtlEstabController(this);
}
