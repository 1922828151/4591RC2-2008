/*
 * func-name: ??0AMovement@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cff10
 * callers: 0x1000b519
 * callees: 0x10014cd6
 */

GameClient::AMovement *__thiscall GameClient::AMovement::AMovement(
        GameClient::AMovement *this,
        const struct GameClient::AMovement *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::AMovement::`vftable';
  return this;
}
