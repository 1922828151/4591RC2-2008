/*
 * func-name: ?Reset@PedrailVehicleController@GameClient@@UAEXXZ_0
 * func-address: 0x101be690
 * callers: 0x10018bc4
 * callees: 0x10018809
 */

void __thiscall GameClient::PedrailVehicleController::Reset(GameClient::PedrailVehicleController *this)
{
  GameClient::ICtlEstabController::Reset(this);
  *((_DWORD *)this + 3) = 0;
}
