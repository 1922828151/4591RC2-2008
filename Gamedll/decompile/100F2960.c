/*
 * func-name: ??0AdapterActorALReport@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100f2960
 * callers: 0x1001195a
 * callees: none
 */

GameClient::AdapterActorALReport *__thiscall GameClient::AdapterActorALReport::AdapterActorALReport(
        GameClient::AdapterActorALReport *this,
        const struct GameClient::AdapterActorALReport *a2)
{
  GameClient::AdapterActorALReport *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::AdapterActorALReport::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
