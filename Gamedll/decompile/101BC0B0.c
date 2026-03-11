/*
 * func-name: ??0AircraftVehicleController@GameClient@@QAE@XZ_0
 * func-address: 0x101bc0b0
 * callers: 0x100181c9
 * callees: 0x1001a2df
 */

GameClient::AircraftVehicleController *__thiscall GameClient::AircraftVehicleController::AircraftVehicleController(
        GameClient::AircraftVehicleController *this)
{
  GameClient::ICtlEstabController::ICtlEstabController(this);
  *((float *)this + 4) = 0.0;
  *(_DWORD *)this = &GameClient::AircraftVehicleController::`vftable';
  *((_DWORD *)this + 6) = 0;
  return this;
}
