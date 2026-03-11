/*
 * func-name: ??0Connector_Config@IONetwork@Outpop@@QAE@ABU012@@Z
 * func-address: 0x10004630
 * callers: 0x10004e20
 * callees: 0x10002e10
 */

Outpop::IONetwork::Connector_Config *__thiscall Outpop::IONetwork::Connector_Config::Connector_Config(
        Outpop::IONetwork::Connector_Config *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  qmemcpy(this, a2, 0x2Cu);
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Connector_Config *)((char *)this + 44),
    (const struct Outpop::IONetwork::INET_Addr *)(a2 + 11));
  *((_BYTE *)this + 72) = *((_BYTE *)a2 + 72);
  *((_DWORD *)this + 19) = a2[19];
  v3 = a2[20];
  *((_DWORD *)this + 20) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  *((_DWORD *)this + 21) = a2[21];
  *((_DWORD *)this + 22) = a2[22];
  v4 = a2[23];
  *((_DWORD *)this + 23) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  return this;
}
