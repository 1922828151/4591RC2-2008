/*
 * func-name: ??4ASummon@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101d0e50
 * callers: 0x100185de
 * callees: 0x10016ed7
 */

_DWORD *__thiscall GameClient::ASummon::operator=(_DWORD *this, int a2)
{
  GameClient::Aura::operator=(a2);
  this[39] = *(_DWORD *)(a2 + 156);
  this[40] = *(_DWORD *)(a2 + 160);
  return this;
}
