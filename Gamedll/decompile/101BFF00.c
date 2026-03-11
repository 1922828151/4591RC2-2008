/*
 * func-name: ??0Func_Power_Input@GameClient@@QAE@K@Z_0
 * func-address: 0x101bff00
 * callers: 0x10013f6b
 * callees: 0x1000f5a1
 */

GameClient::Func_Power_Input *__thiscall GameClient::Func_Power_Input::Func_Power_Input(
        GameClient::Func_Power_Input *this,
        unsigned int a2)
{
  GameClient::Func_Power::Func_Power(this, a2);
  *(_DWORD *)this = &GameClient::Func_Power_Input::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Power_Input::`vftable'{for `GameClient::DataObject'};
  *((_DWORD *)this + 10) = 7;
  return this;
}
