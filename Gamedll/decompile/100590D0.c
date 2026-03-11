/*
 * func-name: ??0DamageUnit@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100590d0
 * callers: 0x1001786e
 * callees: 0x1000f5ce
 */

GameClient::DamageUnit *__thiscall GameClient::DamageUnit::DamageUnit(
        GameClient::DamageUnit *this,
        const struct GameClient::DamageUnit *a2)
{
  *(_DWORD *)this = &GameClient::DamageUnit::`vftable';
  sub_1000F5CE((int)a2 + 4);
  return this;
}
