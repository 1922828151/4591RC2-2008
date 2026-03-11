/*
 * func-name: ??0ProductManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10067980
 * callers: 0x10009c3c
 * callees: 0x1000aefc, 0x1000e3db, 0x10015a8c
 */

GameClient::ProductManager *__thiscall GameClient::ProductManager::ProductManager(
        GameClient::ProductManager *this,
        const struct GameClient::ProductManager *a2)
{
  *(_DWORD *)this = &GameClient::ProductManager::`vftable';
  sub_1000E3DB((int)a2 + 4);
  sub_1000AEFC((int)a2 + 44);
  sub_10015A8C((int)a2 + 84);
  return this;
}
