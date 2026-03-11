/*
 * func-name: ??0AAlarm@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cf350
 * callers: 0x10006dbb
 * callees: 0x10014cd6
 */

GameClient::AAlarm *__thiscall GameClient::AAlarm::AAlarm(
        GameClient::AAlarm *this,
        const struct GameClient::AAlarm *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::AAlarm::`vftable';
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  return this;
}
