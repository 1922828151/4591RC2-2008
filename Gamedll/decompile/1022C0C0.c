/*
 * func-name: ??0FFunc_Power_Input@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022c0c0
 * callers: 0x100141aa
 * callees: 0x1001549c
 */

GameClient::FFunc_Power_Input *__thiscall GameClient::FFunc_Power_Input::FFunc_Power_Input(
        GameClient::FFunc_Power_Input *this,
        const struct GameClient::FFunc_Power_Input *a2)
{
  GameClient::FFunc_Power::FFunc_Power(this, a2);
  *(_DWORD *)this = &GameClient::FFunc_Power_Input::`vftable';
  return this;
}
