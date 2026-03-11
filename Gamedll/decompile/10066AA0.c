/*
 * func-name: ??0RobotManager@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10066aa0
 * callers: 0x10005ede
 * callees: 0x100014ec
 */

GameClient::RobotManager *__thiscall GameClient::RobotManager::RobotManager(
        GameClient::RobotManager *this,
        const struct GameClient::RobotManager *a2)
{
  sub_100014EC((int)a2);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  return this;
}
