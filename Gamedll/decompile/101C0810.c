/*
 * func-name: ??1Func_Receive@GameClient@@UAE@XZ_0
 * func-address: 0x101c0810
 * callers: 0x1000727f
 * callees: 0x1000443f, 0x10007540, 0x102c9d50
 */

void __thiscall GameClient::Func_Receive::~Func_Receive(GameClient::Func_Receive *this)
{
  *(_DWORD *)this = &GameClient::Func_Receive::`vftable'{for `GameClient::Interactable'};
  *((_DWORD *)this + 4) = &GameClient::Func_Receive::`vftable'{for `GameClient::DataObject'};
  if ( *((_DWORD *)this + 26) )
    operator delete(*((void **)this + 26));
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  sub_1000443F();
  if ( *((_DWORD *)this + 16) )
    operator delete(*((void **)this + 16));
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  sub_10007540();
  GameClient::Function::~Function(this);
}
