/*
 * func-name: ??4P2P_Context@P2P@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100012c0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::P2P::P2P_Context::operator=(int this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  Outpop::IONetwork::INET_Addr::operator=(this + 48, a2 + 48);
  v3 = *(Outpop::Utility::Ref_Object **)(this + 76);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *(Outpop::Utility::Ref_Object **)(a2 + 76);
  *(_DWORD *)(this + 76) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  *(_WORD *)(this + 80) = *(_WORD *)(a2 + 80);
  *(_BYTE *)(this + 82) = *(_BYTE *)(a2 + 82);
  return this;
}
