/*
 * func-name: ??1Func_Sheild@GameClient@@UAE@XZ_0
 * func-address: 0x101c4a80
 * callers: 0x10003526
 * callees: none
 */

void __thiscall GameClient::Func_Sheild::~Func_Sheild(GameClient::Function *this)
{
  *(_DWORD *)this = &GameClient::Func_Sheild::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Sheild::`vftable'{for `GameClient::DataObject'};
  GameClient::Function::~Function(this);
}
