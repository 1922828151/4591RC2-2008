/*
 * func-name: sub_1002B990
 * func-address: 0x1002b990
 * callers: none
 * callees: 0x100292b0
 */

unsigned int __thiscall sub_1002B990(_DWORD *this, int a2, int a3, int a4, int a5)
{
  Outpop::IONetwork::Dgram_Acceptor *v6; // ecx
  unsigned int result; // eax

  v6 = (Outpop::IONetwork::Dgram_Acceptor *)this[7];
  result = this[13];
  if ( result == *((_DWORD *)v6 + 32) )
    return Outpop::IONetwork::Dgram_Acceptor::check_channel_map_time_out(v6);
  return result;
}
