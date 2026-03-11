/*
 * func-name: ??0AEnergy@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cfb60
 * callers: 0x1000ecd7
 * callees: 0x10014cd6
 */

GameClient::AEnergy *__thiscall GameClient::AEnergy::AEnergy(
        GameClient::AEnergy *this,
        const struct GameClient::AEnergy *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::AEnergy::`vftable';
  return this;
}
