/*
 * func-name: ?flush_channel@Message_Facade@Message@Outpop@@SAXXZ
 * func-address: 0x1000d2e0
 * callers: none
 * callees: 0x1000f0d0, 0x10015330, 0x1001bd30, 0x100214e0, 0x10027030
 */

void __cdecl Outpop::Message::Message_Facade::flush_channel()
{
  Outpop::Message::Message_Sender::flush(*((Outpop::Message::Message_Sender **)Outpop::Message::Message_Facade::g_c_ + 10));
  Outpop::Message::Request_Ack::flush(*((Outpop::Message::Request_Ack **)Outpop::Message::Message_Facade::g_c_ + 11));
  sub_1001BD30(*((_DWORD *)Outpop::Message::Message_Facade::g_c_ + 19));
  Outpop::Message::Connector_Manager::flush(*((Outpop::Message::Connector_Manager **)Outpop::Message::Message_Facade::g_c_
                                            + 9));
  Outpop::Message::Acceptor_Manager::flush(*((Outpop::Message::Acceptor_Manager **)Outpop::Message::Message_Facade::g_c_
                                           + 7));
  Outpop::Message::Channel_Manager::flush(*((Outpop::Message::Channel_Manager **)Outpop::Message::Message_Facade::g_c_
                                          + 8));
}
