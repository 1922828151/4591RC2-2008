/*
 * func-name: ??0Func_RobotReceive@GameClient@@QAE@K@Z_0
 * func-address: 0x101c33d0
 * callers: 0x100160ea
 * callees: 0x10008d32
 */

GameClient::Func_RobotReceive *__thiscall GameClient::Func_RobotReceive::Func_RobotReceive(
        GameClient::Func_RobotReceive *this,
        unsigned int a2)
{
  GameClient::Func_Receive::Func_Receive(this, a2);
  *(_DWORD *)this = &GameClient::Func_RobotReceive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_RobotReceive::`vftable'{for `GameClient::DataObject'};
  *((_DWORD *)this + 10) = 2;
  return this;
}
