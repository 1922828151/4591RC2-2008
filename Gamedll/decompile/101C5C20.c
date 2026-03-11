/*
 * func-name: ??0Func_Store@GameClient@@QAE@K@Z_0
 * func-address: 0x101c5c20
 * callers: 0x10008706
 * callees: 0x10016a7c, 0x100180e3
 */

GameClient::Func_Store *__thiscall GameClient::Func_Store::Func_Store(GameClient::Func_Store *this, unsigned int a2)
{
  GameClient::Function::Function(this, a2);
  *(_DWORD *)this = &GameClient::Func_Store::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Store::`vftable'{for `GameClient::DataObject'};
  sub_100180E3((int)&a2, (int)&a2);
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 10) = 4;
  return this;
}
