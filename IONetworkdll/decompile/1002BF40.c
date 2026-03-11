/*
 * func-name: sub_1002BF40
 * func-address: 0x1002bf40
 * callers: 0x1002ad90, 0x1002b250
 * callees: 0x10029ed0
 */

char __usercall sub_1002BF40@<al>(int a1@<eax>)
{
  if ( *(_BYTE *)(a1 + 8) )
    LOBYTE(a1) = Outpop::IONetwork::Dgram_Acceptor::erase_simple_wait_channel_from_map(
                   *(Outpop::IONetwork::Dgram_Acceptor **)(a1 + 72),
                   (struct in_addr *)(a1 + 40));
  return a1;
}
