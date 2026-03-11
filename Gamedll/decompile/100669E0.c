/*
 * func-name: ??0FlyweightManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100669e0
 * callers: 0x1000c6fd
 * callees: 0x100077d4, 0x10008026
 */

GameClient::FlyweightManager *__thiscall GameClient::FlyweightManager::FlyweightManager(
        GameClient::FlyweightManager *this,
        const struct GameClient::FlyweightManager *a2)
{
  sub_10008026((int)a2);
  sub_100077D4((int)a2 + 40);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  return this;
}
