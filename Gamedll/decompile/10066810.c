/*
 * func-name: ??0Func_RobotReceive@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10066810
 * callers: 0x1000bfb4
 * callees: 0x100109a6
 */

GameClient::Func_RobotReceive *__thiscall GameClient::Func_RobotReceive::Func_RobotReceive(
        GameClient::Func_RobotReceive *this,
        const struct GameClient::Func_RobotReceive *a2)
{
  GameClient::Func_Receive::Func_Receive(this, a2);
  *(_DWORD *)this = &GameClient::Func_RobotReceive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_RobotReceive::`vftable'{for `GameClient::DataObject'};
  return this;
}
