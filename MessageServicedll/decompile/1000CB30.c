/*
 * func-name: ?add_acceptor@Message_Facade@Message@Outpop@@SAXAAUAcceptor_Config@IONetwork@3@@Z
 * func-address: 0x1000cb30
 * callers: none
 * callees: 0x1000ed90
 */

void __cdecl Outpop::Message::Message_Facade::add_acceptor(struct Outpop::IONetwork::Acceptor_Config *a1)
{
  Outpop::Message::Acceptor_Manager::add_acceptor(
    *((Outpop::Message::Acceptor_Manager **)Outpop::Message::Message_Facade::g_c_ + 7),
    a1);
}
