/*
 * func-name: ??0Stream_Connector@IONetwork@Outpop@@QAE@PAVConnector_Handler@12@PAVWIN32_IoCompletionPort@12@@Z
 * func-address: 0x1001dcb0
 * callers: none
 * callees: 0x10002600, 0x10004ca0, 0x1001eda0
 */

Outpop::IONetwork::Stream_Connector *__thiscall Outpop::IONetwork::Stream_Connector::Stream_Connector(
        Outpop::IONetwork::Stream_Connector *this,
        struct Outpop::IONetwork::Connector_Handler *a2,
        struct Outpop::IONetwork::WIN32_IoCompletionPort *a3)
{
  Outpop::IONetwork::Connector::Connector(this);
  *((_DWORD *)this + 29) = a2;
  *(_DWORD *)this = &Outpop::IONetwork::Stream_Connector::`vftable';
  Outpop::Utility::Ref_Object::addref(this);
  sub_1001EDA0((char *)this + 120, a3, this);
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::Stream_Connector *)((char *)this + 140));
  *((_DWORD *)this + 2) = a3;
  return this;
}
