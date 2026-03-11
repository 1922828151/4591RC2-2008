/*
 * func-name: ?Reset@WheelVehicleController@GameClient@@UAEXXZ_0
 * func-address: 0x101bed00
 * callers: 0x10017265
 * callees: 0x10018809
 */

void __thiscall GameClient::WheelVehicleController::Reset(GameClient::WheelVehicleController *this)
{
  GameClient::ICtlEstabController::Reset(this);
  *((_DWORD *)this + 3) = 0;
}
