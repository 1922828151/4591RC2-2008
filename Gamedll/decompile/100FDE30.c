/*
 * func-name: ??0EquipAsyncLoaderReport@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100fde30
 * callers: 0x1000a498
 * callees: none
 */

GameClient::EquipAsyncLoaderReport *__thiscall GameClient::EquipAsyncLoaderReport::EquipAsyncLoaderReport(
        GameClient::EquipAsyncLoaderReport *this,
        const struct GameClient::EquipAsyncLoaderReport *a2)
{
  GameClient::EquipAsyncLoaderReport *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::EquipAsyncLoaderReport::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
