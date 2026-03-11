/*
 * func-name: ??0ARepair@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d02c0
 * callers: 0x10003aee
 * callees: 0x10014cd6
 */

GameClient::ARepair *__thiscall GameClient::ARepair::ARepair(
        GameClient::ARepair *this,
        const struct GameClient::ARepair *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ARepair::`vftable';
  return this;
}
