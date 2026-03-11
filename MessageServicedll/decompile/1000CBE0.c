/*
 * func-name: ?cache_add_connector@Message_Facade@Message@Outpop@@SAHAAUMessage_Connector_Config@23@@Z
 * func-address: 0x1000cbe0
 * callers: none
 * callees: 0x10015230
 */

int __cdecl Outpop::Message::Message_Facade::cache_add_connector(struct Outpop::Message::Message_Connector_Config *a1)
{
  return Outpop::Message::Connector_Manager::cache_add_connector(
           *((Outpop::Message::Connector_Manager **)Outpop::Message::Message_Facade::g_c_ + 9),
           a1);
}
