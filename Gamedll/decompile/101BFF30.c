/*
 * func-name: ??1Func_Power_Input@GameClient@@UAE@XZ_0
 * func-address: 0x101bff30
 * callers: 0x100113e7
 * callees: none
 */

void __thiscall GameClient::Func_Power_Input::~Func_Power_Input(GameClient::Func_Power_Input *this)
{
  *(_DWORD *)this = &GameClient::Func_Power_Input::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Power_Input::`vftable'{for `GameClient::DataObject'};
  GameClient::Func_Power::~Func_Power(this);
}
