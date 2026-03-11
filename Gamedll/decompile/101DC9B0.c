/*
 * func-name: ??4BattleFieldManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101dc9b0
 * callers: 0x100184f8
 * callees: 0x100015c8, 0x10003530
 */

char *__thiscall GameClient::BattleFieldManager::operator=(char *this, int a2)
{
  if ( this + 4 != (char *)(a2 + 4) )
    sub_100015C8(a2 + 4);
  if ( this + 44 != (char *)(a2 + 44) )
    sub_10003530(a2 + 44);
  return this;
}
