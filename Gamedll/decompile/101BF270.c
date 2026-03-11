/*
 * func-name: ??1Func_Power@GameClient@@UAE@XZ_0
 * func-address: 0x101bf270
 * callers: 0x10018575
 * callees: none
 */

void __thiscall GameClient::Func_Power::~Func_Power(GameClient::Function *this)
{
  *(_DWORD *)this = &GameClient::Func_Power::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Power::`vftable'{for `GameClient::DataObject'};
  GameClient::Function::~Function(this);
}
