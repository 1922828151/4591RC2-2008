/*
 * func-name: ??0Func_Power_Input@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101bfeb0
 * callers: 0x10016987
 * callees: 0x100186ce
 */

GameClient::Func_Power_Input *__thiscall GameClient::Func_Power_Input::Func_Power_Input(
        GameClient::Func_Power_Input *this,
        const struct GameClient::Func_Power_Input *a2)
{
  GameClient::Func_Power::Func_Power(this, a2);
  *(_DWORD *)this = &GameClient::Func_Power_Input::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Power_Input::`vftable'{for `GameClient::DataObject'};
  return this;
}
