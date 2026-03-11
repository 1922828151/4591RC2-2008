/*
 * func-name: ??1Func_RobotReceive@GameClient@@UAE@XZ_0
 * func-address: 0x101c3400
 * callers: 0x100048a9
 * callees: none
 */

void __thiscall GameClient::Func_RobotReceive::~Func_RobotReceive(GameClient::Func_RobotReceive *this)
{
  *(_DWORD *)this = &GameClient::Func_RobotReceive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_RobotReceive::`vftable'{for `GameClient::DataObject'};
  GameClient::Func_Receive::~Func_Receive(this);
}
