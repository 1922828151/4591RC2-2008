/*
 * func-name: ??0EstabManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10128fc0
 * callers: 0x1000e697
 * callees: 0x1000882d, 0x100156c2
 */

GameClient::EstabManager *__thiscall GameClient::EstabManager::EstabManager(
        GameClient::EstabManager *this,
        const struct GameClient::EstabManager *a2)
{
  *(_DWORD *)this = &GameClient::EstabManager::`vftable';
  sub_100156C2((int)a2 + 4);
  sub_1000882D((int)a2 + 44);
  return this;
}
