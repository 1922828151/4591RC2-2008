/*
 * func-name: ??0ARepair@GameClient@@QAE@K@Z_0
 * func-address: 0x101d0140
 * callers: 0x100028fb
 * callees: 0x10001154
 */

GameClient::ARepair *__thiscall GameClient::ARepair::ARepair(GameClient::ARepair *this, unsigned int a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ARepair::`vftable';
  return this;
}
