/*
 * func-name: ?close_channel@Message_Facade@Message@Outpop@@SAXH@Z
 * func-address: 0x1000cc90
 * callers: none
 * callees: 0x10011620
 */

void __cdecl Outpop::Message::Message_Facade::close_channel(int a1)
{
  Outpop::Message::Channel_Manager::close_channel(
    *((Outpop::Message::Channel_Manager **)Outpop::Message::Message_Facade::g_c_ + 8),
    a1);
}
