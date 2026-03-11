/*
 * func-name: ??0RobotAsyncLoaderReport@GameClient@@QAE@PAVCombinRobot@1@@Z_0
 * func-address: 0x10110520
 * callers: 0x1000bcb7
 * callees: none
 */

GameClient::RobotAsyncLoaderReport *__thiscall GameClient::RobotAsyncLoaderReport::RobotAsyncLoaderReport(
        GameClient::RobotAsyncLoaderReport *this,
        struct GameClient::CombinRobot *a2)
{
  AsyncLoaderReport::AsyncLoaderReport(this);
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &GameClient::RobotAsyncLoaderReport::`vftable';
  return this;
}
