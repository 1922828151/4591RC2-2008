/*
 * func-name: ?get_relible@Dgram_Protocol_Head_Process@IONetwork@Outpop@@QAE_NE@Z
 * func-address: 0x10009540
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::IONetwork::Dgram_Protocol_Head_Process::get_relible(
        Outpop::IONetwork::Dgram_Protocol_Head_Process *this,
        unsigned __int8 a2)
{
  return (a2 & 0x40) != 0;
}
