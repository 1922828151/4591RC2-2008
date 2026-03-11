/*
 * func-name: ?get_priority@Stream_Protocol_Head_Process@IONetwork@Outpop@@QAE?AW4EPriority@Utility@3@E@Z
 * func-address: 0x10009130
 * callers: none
 * callees: none
 */

int __stdcall Outpop::IONetwork::Stream_Protocol_Head_Process::get_priority(char a1)
{
  if ( (a1 & 0x30) == 0x10 )
    return 1;
  else
    return 2 * ((a1 & 0x30) == 48) + 3;
}
