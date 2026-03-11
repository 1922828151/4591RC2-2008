/*
 * func-name: ?get_key@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAE_NE@Z
 * func-address: 0x100090b0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::IONetwork::Stream_Protocol_Head_Process::get_key(
        Outpop::IONetwork::Stream_Protocol_Head_Process *this,
        unsigned __int8 a2)
{
  return (a2 & 2) != 0;
}
