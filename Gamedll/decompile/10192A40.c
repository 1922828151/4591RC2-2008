/*
 * func-name: ??0LocalUserManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10192a40
 * callers: 0x1000570e
 * callees: 0x10017a8f
 */

GameClient::LocalUserManager *__thiscall GameClient::LocalUserManager::LocalUserManager(
        GameClient::LocalUserManager *this,
        const struct GameClient::LocalUserManager *a2)
{
  *(_DWORD *)this = &GameClient::LocalUserManager::`vftable';
  sub_10017A8F((int)a2 + 4);
  return this;
}
