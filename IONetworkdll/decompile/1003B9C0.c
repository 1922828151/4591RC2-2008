/*
 * func-name: sub_1003B9C0
 * func-address: 0x1003b9c0
 * callers: 0x1003a5b0, 0x1003aa70
 * callees: 0x10036a40
 */

char __usercall sub_1003B9C0@<al>(int a1@<eax>)
{
  if ( !*(_BYTE *)(a1 + 8) )
    LOBYTE(a1) = Outpop::IONetwork::Dgram_Connector::erase_simple_wait_connect_channel_from_map(
                   *(Outpop::IONetwork::Dgram_Connector **)(a1 + 72),
                   (struct Outpop::IONetwork::INET_Addr *)(a1 + 40));
  return a1;
}
