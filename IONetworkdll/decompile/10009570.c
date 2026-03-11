/*
 * func-name: ?get_login_packet_type@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAE_NE@Z
 * func-address: 0x10009570
 * callers: none
 * callees: none
 */

char __thiscall Outpop::IONetwork::Dgram_Protocol_Head_Process::get_login_packet_type(
        Outpop::IONetwork::Dgram_Protocol_Head_Process *this,
        unsigned __int8 a2)
{
  return a2 >> 7;
}
