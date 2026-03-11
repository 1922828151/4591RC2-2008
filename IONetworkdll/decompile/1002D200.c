/*
 * func-name: ?set_connector@Dgram_Channel@IONetwork@Outpop@@UAEXAAVConnector@23@@Z
 * func-address: 0x1002d200
 * callers: none
 * callees: none
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::set_connector(
        Outpop::IONetwork::Dgram_Channel *this,
        struct Outpop::IONetwork::Connector *a2)
{
  *((_DWORD *)this + 47) = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
}
