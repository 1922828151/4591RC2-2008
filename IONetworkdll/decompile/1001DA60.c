/*
 * func-name: ??0Stream_Connector@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1001da60
 * callers: none
 * callees: 0x10002e10, 0x10004e20, 0x1001dc40
 */

Outpop::IONetwork::Stream_Connector *__thiscall Outpop::IONetwork::Stream_Connector::Stream_Connector(
        Outpop::IONetwork::Stream_Connector *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::IONetwork::Connector::Connector(this, a2);
  *(_DWORD *)this = &Outpop::IONetwork::Stream_Connector::`vftable';
  *((_DWORD *)this + 29) = a2[29];
  sub_1001DC40((char *)this + 120);
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::Stream_Connector *)((char *)this + 140),
    (const struct Outpop::IONetwork::INET_Addr *)(a2 + 35));
  *((_DWORD *)this + 42) = a2[42];
  return this;
}
