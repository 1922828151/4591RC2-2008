/*
 * func-name: ?get_len_flag@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAEHE@Z
 * func-address: 0x100091a0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::IONetwork::Stream_Protocol_Head_Process::get_len_flag(
        Outpop::IONetwork::Stream_Protocol_Head_Process *this,
        unsigned __int8 a2)
{
  char v2; // al

  v2 = a2 & 0xC0;
  if ( (a2 & 0xC0) == 0x40 )
    return 1;
  if ( v2 == (char)0x80 )
    return 2;
  return v2 != -64 ? 0 : 4;
}
