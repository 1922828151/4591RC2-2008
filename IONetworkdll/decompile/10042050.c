/*
 * func-name: ?close@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x10042050
 * callers: none
 * callees: 0x10036b30
 */

char __thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::close(Outpop::IONetwork::Dgram_Connector **this)
{
  return Outpop::IONetwork::Dgram_Connector::erase_security_wait_channel_from_map(
           this[10],
           (struct Outpop::IONetwork::INET_Addr *)(this + 2));
}
