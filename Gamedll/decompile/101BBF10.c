/*
 * func-name: ??0ICtlEstabController@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bbf10
 * callers: 0x10008242
 * callees: none
 */

GameClient::ICtlEstabController *__thiscall GameClient::ICtlEstabController::ICtlEstabController(
        GameClient::ICtlEstabController *this,
        const struct GameClient::ICtlEstabController *a2)
{
  GameClient::ICtlEstabController *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::IEstabController::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &GameClient::ICtlEstabController::`vftable';
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  return result;
}
