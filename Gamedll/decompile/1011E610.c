/*
 * func-name: ??0IEstabController@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1011e610
 * callers: 0x1000e093
 * callees: none
 */

GameClient::IEstabController *__thiscall GameClient::IEstabController::IEstabController(
        GameClient::IEstabController *this,
        const struct GameClient::IEstabController *a2)
{
  GameClient::IEstabController *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::IEstabController::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
