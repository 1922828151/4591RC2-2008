/*
 * func-name: ?close@Dgram_Accept_Bluider_Process@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x10040db0
 * callers: 0x1003ffb0
 * callees: 0x1002a120
 */

char __thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::close(
        Outpop::IONetwork::Dgram_Accept_Bluider_Process *this)
{
  return Outpop::IONetwork::Dgram_Acceptor::erase_security_wait_channel_from_map(
           *((Outpop::IONetwork::Dgram_Acceptor **)this + 12),
           (struct in_addr *)this + 2);
}
