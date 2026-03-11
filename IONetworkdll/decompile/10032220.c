/*
 * func-name: ?get_login_stream_packet_count@Dgram_Channel@IONetwork@Outpop@@QAEJXZ
 * func-address: 0x10032220
 * callers: 0x10027c50
 * callees: none
 */

LONG __thiscall Outpop::IONetwork::Dgram_Channel::get_login_stream_packet_count(volatile LONG *this)
{
  return InterlockedExchange(this + 156, *((_DWORD *)this + 156));
}
