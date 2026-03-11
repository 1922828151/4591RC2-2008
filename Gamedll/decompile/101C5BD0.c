/*
 * func-name: ??1Func_Store@GameClient@@UAE@XZ_0
 * func-address: 0x101c5bd0
 * callers: 0x10013953
 * callees: 0x1000aad8, 0x102c9d50
 */

void __thiscall GameClient::Func_Store::~Func_Store(GameClient::Func_Store *this)
{
  *(_DWORD *)this = &GameClient::Func_Store::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Store::`vftable'{for `GameClient::DataObject'};
  if ( *((_DWORD *)this + 16) )
    operator delete(*((void **)this + 16));
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  sub_1000AAD8();
  GameClient::Function::~Function(this);
}
