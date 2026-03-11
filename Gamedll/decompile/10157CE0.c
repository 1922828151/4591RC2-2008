/*
 * func-name: ??0DamageManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10157ce0
 * callers: 0x10002676
 * callees: 0x10010131, 0x10015c21
 */

GameClient::DamageManager *__thiscall GameClient::DamageManager::DamageManager(
        GameClient::DamageManager *this,
        const struct GameClient::DamageManager *a2)
{
  sub_10015C21((int)a2);
  sub_10010131((int)a2 + 40);
  return this;
}
