/*
 * func-name: ??0AuraManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10143fe0
 * callers: 0x1000ae3e
 * callees: 0x10003ff8
 */

GameClient::AuraManager *__thiscall GameClient::AuraManager::AuraManager(
        GameClient::AuraManager *this,
        const struct GameClient::AuraManager *a2)
{
  sub_10003FF8((int)a2);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  return this;
}
