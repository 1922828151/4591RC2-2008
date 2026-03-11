/*
 * func-name: ?connect@Message_Facade@Message@Outpop@@SAXI@Z
 * func-address: 0x1000cb70
 * callers: none
 * callees: 0x100145a0
 */

void __cdecl Outpop::Message::Message_Facade::connect(unsigned int a1)
{
  Outpop::Message::Connector_Manager::connect(
    *((Outpop::Message::Connector_Manager **)Outpop::Message::Message_Facade::g_c_ + 9),
    a1);
}
