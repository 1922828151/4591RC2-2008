/*
 * func-name: ??0Func_Sheild@GameClient@@QAE@K@Z_0
 * func-address: 0x101c4a40
 * callers: 0x100054ed
 * callees: 0x10016a7c
 */

GameClient::Func_Sheild *__thiscall GameClient::Func_Sheild::Func_Sheild(
        GameClient::Func_Sheild *this,
        unsigned int a2)
{
  GameClient::Func_Sheild *result; // eax

  GameClient::Function::Function(this, a2);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *(_DWORD *)this = &GameClient::Func_Sheild::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Sheild::`vftable'{for `GameClient::DataObject'};
  *((float *)this + 17) = 0.0;
  *((float *)this + 18) = 0.0;
  result = this;
  *((float *)this + 19) = 0.0;
  *((_DWORD *)this + 10) = 6;
  return result;
}
