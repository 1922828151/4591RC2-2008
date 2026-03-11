/*
 * func-name: ?add_connector@Message_Facade@Message@Outpop@@SAHAAUMessage_Connector_Config@23@@Z
 * func-address: 0x1000cbc0
 * callers: none
 * callees: 0x100146d0
 */

int __cdecl Outpop::Message::Message_Facade::add_connector(struct Outpop::Message::Message_Connector_Config *a1)
{
  return Outpop::Message::Connector_Manager::add_connector(
           *((Outpop::Message::Connector_Manager **)Outpop::Message::Message_Facade::g_c_ + 9),
           a1);
}
