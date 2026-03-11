/*
 * func-name: ??0AdapterActorALReport@GameClient@@QAE@PAVAdapterActor@1@@Z_0
 * func-address: 0x100f2c20
 * callers: 0x100148a8
 * callees: none
 */

GameClient::AdapterActorALReport *__thiscall GameClient::AdapterActorALReport::AdapterActorALReport(
        GameClient::AdapterActorALReport *this,
        struct GameClient::AdapterActor *a2)
{
  AsyncLoaderReport::AsyncLoaderReport(this);
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &GameClient::AdapterActorALReport::`vftable';
  return this;
}
