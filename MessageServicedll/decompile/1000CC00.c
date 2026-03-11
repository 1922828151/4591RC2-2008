/*
 * func-name: ?close_connector@Message_Facade@Message@Outpop@@SAXI@Z
 * func-address: 0x1000cc00
 * callers: none
 * callees: 0x100150f0
 */

void __cdecl Outpop::Message::Message_Facade::close_connector(unsigned int a1)
{
  Outpop::Message::Connector_Manager::close_connector(
    *((Outpop::Message::Connector_Manager **)Outpop::Message::Message_Facade::g_c_ + 9),
    a1);
}
