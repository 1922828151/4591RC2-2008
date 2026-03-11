/*
 * func-name: ??4P2P_Config@IONetwork@Outpop@@QAEAAU012@ABU012@@Z
 * func-address: 0x10004960
 * callers: 0x10042880, 0x1004b7c0, 0x1004b8b0
 * callees: none
 */

int __thiscall Outpop::IONetwork::P2P_Config::operator=(int this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  qmemcpy((void *)this, (const void *)a2, 0x2Cu);
  std::string::operator=(a2 + 44);
  *(_WORD *)(this + 72) = *(_WORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  v3 = *(Outpop::Utility::Ref_Object **)(this + 88);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *(Outpop::Utility::Ref_Object **)(a2 + 88);
  *(_DWORD *)(this + 88) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  return this;
}
