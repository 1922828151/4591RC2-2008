/*
 * func-name: ??0ADamage@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cf9a0
 * callers: 0x100107b7
 * callees: 0x10014cd6
 */

GameClient::ADamage *__thiscall GameClient::ADamage::ADamage(
        GameClient::ADamage *this,
        const struct GameClient::ADamage *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ADamage::`vftable';
  return this;
}
