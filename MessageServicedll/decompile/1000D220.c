/*
 * func-name: ?get_channel_remote_addr@Message_Facade@Message@Outpop@@SAAAVINET_Addr@IONetwork@3@H@Z
 * func-address: 0x1000d220
 * callers: none
 * callees: 0x10011f00
 */

struct Outpop::IONetwork::INET_Addr *__cdecl Outpop::Message::Message_Facade::get_channel_remote_addr(int a1)
{
  return Outpop::Message::Channel_Manager::get_remote_addr(
           *((Outpop::Message::Channel_Manager **)Outpop::Message::Message_Facade::g_c_ + 8),
           a1);
}
