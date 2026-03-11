/*
 * func-name: ?Reset@SuspendVehicleController@GameClient@@UAEXXZ_0
 * func-address: 0x101be9a0
 * callers: 0x1001773d
 * callees: 0x10018809
 */

void __thiscall GameClient::SuspendVehicleController::Reset(GameClient::SuspendVehicleController *this)
{
  GameClient::ICtlEstabController::Reset(this);
  *((_DWORD *)this + 3) = 0;
}
