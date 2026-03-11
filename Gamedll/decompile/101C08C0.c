/*
 * func-name: ??0Func_Receive@GameClient@@QAE@K@Z_0
 * func-address: 0x101c08c0
 * callers: 0x10008d32
 * callees: 0x10003bb1, 0x1000e8a4, 0x10016a7c
 */

GameClient::Func_Receive *__thiscall GameClient::Func_Receive::Func_Receive(
        GameClient::Func_Receive *this,
        unsigned int a2)
{
  GameClient::Func_Receive *result; // eax

  GameClient::Function::Function(this, a2);
  *(_DWORD *)this = &GameClient::Func_Receive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Receive::`vftable'{for `GameClient::DataObject'};
  sub_1000E8A4((int)&a2, (int)&a2);
  sub_10003BB1((int)&a2, (int)&a2);
  *((float *)this + 31) = 0.0;
  result = this;
  *((float *)this + 32) = 0.0;
  *((float *)this + 33) = 0.0;
  return result;
}
