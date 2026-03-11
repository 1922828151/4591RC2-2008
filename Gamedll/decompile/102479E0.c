/*
 * func-name: ??0FACapability@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x102479e0
 * callers: 0x1000b5aa
 * callees: 0x1000ed77
 */

GameClient::FACapability *__thiscall GameClient::FACapability::FACapability(
        GameClient::FACapability *this,
        const struct GameClient::FACapability *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FACapability::`vftable';
  return this;
}
