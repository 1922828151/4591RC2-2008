/*
 * func-name: ??0RobotCallback@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x100339b0
 * callers: 0x1000d48b
 * callees: none
 */

GameClient::RobotCallback *__thiscall GameClient::RobotCallback::RobotCallback(
        GameClient::RobotCallback *this,
        const struct GameClient::RobotCallback *a2)
{
  GameClient::RobotCallback *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::RobotCallback::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
