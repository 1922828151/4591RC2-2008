/*
 * func-name: ??0PedrailVehicleController@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bc8e0
 * callers: 0x100063d9
 * callees: none
 */

GameClient::PedrailVehicleController *__thiscall GameClient::PedrailVehicleController::PedrailVehicleController(
        GameClient::PedrailVehicleController *this,
        const struct GameClient::PedrailVehicleController *a2)
{
  GameClient::PedrailVehicleController *result; // eax
  int v3; // edx

  result = this;
  *(_DWORD *)this = &GameClient::IEstabController::`vftable';
  v3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &GameClient::ICtlEstabController::`vftable';
  *((_DWORD *)this + 1) = v3;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *(_DWORD *)this = &GameClient::PedrailVehicleController::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return result;
}
