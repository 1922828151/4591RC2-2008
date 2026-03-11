/*
 * func-name: ??0RobotAsyncLoaderReport@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1010fd00
 * callers: 0x10001136
 * callees: none
 */

GameClient::RobotAsyncLoaderReport *__thiscall GameClient::RobotAsyncLoaderReport::RobotAsyncLoaderReport(
        GameClient::RobotAsyncLoaderReport *this,
        const struct GameClient::RobotAsyncLoaderReport *a2)
{
  GameClient::RobotAsyncLoaderReport *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::RobotAsyncLoaderReport::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
