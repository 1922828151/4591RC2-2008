/*
 * func-name: ??0SuspendVehicleController@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bc7d0
 * callers: 0x1000d5f3
 * callees: none
 */

GameClient::SuspendVehicleController *__thiscall GameClient::SuspendVehicleController::SuspendVehicleController(
        GameClient::SuspendVehicleController *this,
        const struct GameClient::SuspendVehicleController *a2)
{
  GameClient::SuspendVehicleController *result; // eax
  int v3; // edx

  result = this;
  *(_DWORD *)this = &GameClient::IEstabController::`vftable';
  v3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &GameClient::ICtlEstabController::`vftable';
  *((_DWORD *)this + 1) = v3;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::SuspendVehicleController::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return result;
}
