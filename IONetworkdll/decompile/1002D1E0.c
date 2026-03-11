/*
 * func-name: ?set_connector@Stream_Channel@IONetwork@Outpop@@UAEXAAVConnector@23@@Z
 * func-address: 0x1002d1e0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::IONetwork::Stream_Channel::set_connector(
        Outpop::IONetwork::Stream_Channel *this,
        struct Outpop::IONetwork::Connector *a2)
{
  *((_DWORD *)this + 46) = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
}
