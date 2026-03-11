/*
 * func-name: ??0EquipAsyncLoaderReport@GameClient@@QAE@PAVAEquip@1@@Z_0
 * func-address: 0x100fe420
 * callers: 0x10019768
 * callees: none
 */

GameClient::EquipAsyncLoaderReport *__thiscall GameClient::EquipAsyncLoaderReport::EquipAsyncLoaderReport(
        GameClient::EquipAsyncLoaderReport *this,
        struct GameClient::AEquip *a2)
{
  AsyncLoaderReport::AsyncLoaderReport(this);
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &GameClient::EquipAsyncLoaderReport::`vftable';
  return this;
}
