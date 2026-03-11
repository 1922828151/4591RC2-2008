/*
 * func-name: ??1Stream_Connector@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1001dd60
 * callers: 0x1001dbe0
 * callees: 0x10004d20
 */

void __thiscall Outpop::IONetwork::Stream_Connector::~Stream_Connector(Outpop::IONetwork::Stream_Connector *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::IONetwork::Stream_Connector::`vftable';
  *((_DWORD *)this + 35) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 35) = &Outpop::IONetwork::Addr::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 33);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::IONetwork::Connector::~Connector(this);
}
