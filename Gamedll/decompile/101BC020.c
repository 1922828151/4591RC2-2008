/*
 * func-name: ??0AircraftVehicleController@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bc020
 * callers: 0x100056b4
 * callees: none
 */

GameClient::AircraftVehicleController *__thiscall GameClient::AircraftVehicleController::AircraftVehicleController(
        GameClient::AircraftVehicleController *this,
        const struct GameClient::AircraftVehicleController *a2)
{
  GameClient::AircraftVehicleController *result; // eax
  int v3; // edx

  result = this;
  *(_DWORD *)this = &GameClient::IEstabController::`vftable';
  v3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &GameClient::ICtlEstabController::`vftable';
  *((_DWORD *)this + 1) = v3;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::AircraftVehicleController::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((float *)this + 4) = *((float *)a2 + 4);
  *((float *)this + 5) = *((float *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  return result;
}
