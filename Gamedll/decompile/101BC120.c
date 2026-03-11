/*
 * func-name: ?Reset@AircraftVehicleController@GameClient@@UAEXXZ_0
 * func-address: 0x101bc120
 * callers: 0x1000a29a
 * callees: 0x10018809
 */

void __thiscall GameClient::AircraftVehicleController::Reset(GameClient::AircraftVehicleController *this)
{
  GameClient::ICtlEstabController::Reset(this);
  *((float *)this + 4) = 0.0;
  *((_DWORD *)this + 3) = 0;
}
