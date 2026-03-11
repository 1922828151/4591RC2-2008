/*
 * func-name: ?asynch_receive@Dgram_Acceptor@IONetwork@Outpop@@QAEHPAX@Z
 * func-address: 0x10027c40
 * callers: 0x1002b250
 * callees: none
 */

int __thiscall Outpop::IONetwork::Dgram_Acceptor::asynch_receive(Outpop::IONetwork::Dgram_Acceptor *this, void *a2)
{
  return Outpop::IONetwork::Dgram_Acceptor::PostAccept(this, 0xFFDCu);
}
