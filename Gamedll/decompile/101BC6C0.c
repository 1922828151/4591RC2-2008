/*
 * func-name: ??0WheelVehicleController@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bc6c0
 * callers: 0x10012ec2
 * callees: none
 */

GameClient::WheelVehicleController *__thiscall GameClient::WheelVehicleController::WheelVehicleController(
        GameClient::WheelVehicleController *this,
        const struct GameClient::WheelVehicleController *a2)
{
  GameClient::WheelVehicleController *result; // eax
  int v3; // edx

  result = this;
  *(_DWORD *)this = &GameClient::IEstabController::`vftable';
  v3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &GameClient::ICtlEstabController::`vftable';
  *((_DWORD *)this + 1) = v3;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::WheelVehicleController::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return result;
}
