/*
 * func-name: ??0PassengerController@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bc9f0
 * callers: 0x10013133
 * callees: none
 */

GameClient::PassengerController *__thiscall GameClient::PassengerController::PassengerController(
        GameClient::PassengerController *this,
        const struct GameClient::PassengerController *a2)
{
  GameClient::PassengerController *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::IEstabController::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &GameClient::PassengerController::`vftable';
  return result;
}
