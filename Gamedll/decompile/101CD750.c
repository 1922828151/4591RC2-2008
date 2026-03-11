/*
 * func-name: ??1Function@GameClient@@UAE@XZ_0
 * func-address: 0x101cd750
 * callers: 0x1001a618
 * callees: 0x10007f27, 0x10018d31
 */

void __thiscall GameClient::Function::~Function(GameClient::Function *this)
{
  GameClient::DataObject *v2; // ecx

  v2 = (GameClient::Function *)((char *)this + 16);
  *(_DWORD *)this = &GameClient::Function::`vftable'{for `GameClient::Interactable'};
  *(_DWORD *)v2 = &GameClient::Function::`vftable'{for `GameClient::DataObject'};
  GameClient::DataObject::~DataObject(v2);
  GameClient::Interactable::~Interactable(this);
}
