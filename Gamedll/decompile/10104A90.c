/*
 * func-name: ??0PartAsyncLoaderReport@GameClient@@QAE@PAVCombinActor@1@@Z_0
 * func-address: 0x10104a90
 * callers: 0x100056ff
 * callees: none
 */

GameClient::PartAsyncLoaderReport *__thiscall GameClient::PartAsyncLoaderReport::PartAsyncLoaderReport(
        GameClient::PartAsyncLoaderReport *this,
        struct GameClient::CombinActor *a2)
{
  AsyncLoaderReport::AsyncLoaderReport(this);
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &GameClient::PartAsyncLoaderReport::`vftable';
  return this;
}
