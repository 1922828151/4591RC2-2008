/*
 * func-name: ??0P2P_Config@IONetwork@Outpop@@QAE@ABU012@@Z
 * func-address: 0x100048b0
 * callers: 0x10042700
 * callees: none
 */

Outpop::IONetwork::P2P_Config *__thiscall Outpop::IONetwork::P2P_Config::P2P_Config(
        Outpop::IONetwork::P2P_Config *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx

  qmemcpy(this, a2, 0x2Cu);
  std::string::string(a2 + 11);
  *((_WORD *)this + 36) = *((_WORD *)a2 + 36);
  *((_DWORD *)this + 19) = a2[19];
  *((_DWORD *)this + 20) = a2[20];
  *((_DWORD *)this + 21) = a2[21];
  v3 = a2[22];
  *((_DWORD *)this + 22) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  *((_DWORD *)this + 23) = a2[23];
  return this;
}
