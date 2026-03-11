/*
 * func-name: ??0Function@GameClient@@QAE@K@Z_0
 * func-address: 0x101cd6d0
 * callers: 0x10016a7c
 * callees: 0x100081ed, 0x1000a407
 */

GameClient::Function *__thiscall GameClient::Function::Function(GameClient::Function *this, unsigned int a2)
{
  GameClient::Interactable::Interactable(this, a2);
  GameClient::DataObject::DataObject((GameClient::Function *)((char *)this + 16));
  *(_DWORD *)this = &GameClient::Function::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Function::`vftable'{for `GameClient::DataObject'};
  *((_DWORD *)this + 8) = a2;
  *((_BYTE *)this + 36) = 1;
  *((_DWORD *)this + 10) = 8;
  return this;
}
